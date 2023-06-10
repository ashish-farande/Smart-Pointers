# Implemented Smart Pointers

The smart pointer manages the allocation & deallocation of the resources and also takes care of move semantics.

## Compilation

To Build the Project:

    cd build
    cmake ..
    make

The project can also be built using the following command

    g++ main.cpp -std=c++14 -o smart-pointers

## Execution

Run the following command:

    ./smart-pointers

## Output

    Creating resource
    Resource acquired

    Copying the resource res to res1
    Resource acquired
    res.isNull(): 0 res1.isNull(): 0

    Moving the resource res to res2
    res.isNull(): 1 res2.isNull(): 0

    Ending the Program
    Resource destroyed
    Resource destroyed