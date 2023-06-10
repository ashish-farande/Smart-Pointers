#include <iostream>
#include <string>
#include "smart_pointer.h"

// A sample class to test
class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main()
{
    std::cout<<"\nCreating resource\n";
	SmartPointer<Resource> res(new Resource());

    std::cout<<"\nCopying the resource res to res1\n";
 	SmartPointer<Resource> res1(res);
    std::cout<<"res.isNull(): "<<res.isNull()<<" res1.isNull(): "<<res1.isNull()<<"\n";

    std::cout<<"\nMoving the resource res to res2\n";
 	SmartPointer<Resource> res2(std::move(res));
    std::cout<<"res.isNull(): "<<res.isNull()<<" res2.isNull(): "<<res1.isNull()<<"\n";

    std::cout<<"\nEnding the Program\n";
    
	return 0;
} 