#pragma once

template <typename T>
class SmartPointer
{
private:
    T *m_ptr;

public:
    SmartPointer(T *ptr = nullptr) : m_ptr(ptr) {}

    ~SmartPointer()
    {
        delete m_ptr;
    }

    SmartPointer(const SmartPointer<T> &sp)
    {
        m_ptr = new T;
        *m_ptr = *sp.m_ptr;
    }

    SmartPointer(SmartPointer<T> &&sp) noexcept : m_ptr(sp.m_ptr)
    {
        *m_ptr = *sp.m_ptr;
        sp.m_ptr = nullptr;
    }

    SmartPointer<T> &operator=(const SmartPointer<T> &sp)
    {
        if (&sp == this)
            return *this;

        delete m_ptr;
        m_ptr = new T;
        *m_ptr = *sp.m_ptr;
        return *this;
    }
    SmartPointer<T> &operator=(SmartPointer<T> &&sp)
    {
        if (&sp == this)
            return *this;

        delete m_ptr;
        *m_ptr = *sp.m_ptr;
        *sp.m_ptr = nullptr;
        return *this;
    }

    T &operator*() const
    {
        return *m_ptr;
    }

    T *operator->() const
    {
        return m_ptr;
    }

    bool isNull() const { return m_ptr == nullptr; }
};
