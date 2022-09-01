#include <headers.h>

void f1(int& input)
{
    std::cout<<"Called with lvalue\n";
}

void f1(int&& input)
{
    std::cout<<"Called with rvalue\n";
}

template<typename T>
void f2(T &&input)
{

    f1(std::forward<T>(input));
}


int main()
{
    //move simply takes a variable and casts it to an rvalue
    // Don't declare objects const if you want to move from them (in this case move copies the object)
    // using move doesn't guarantee anything will be moved 

    int a = 10;
    
    f1(a);
    f1(std::move(a));

    // Forward 
    // If the arugment passed was an rvalue, turn it back into an rvalue
    // if the argument passed was an lvalue, it should go unchanged
    f2(a);
    f2(std::move(a));

    return 0;
}