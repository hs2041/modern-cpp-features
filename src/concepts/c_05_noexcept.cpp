#include <headers.h>

// The noexcept operator performs a compile-time check that returns true if an expression is declared to not throw any exceptions.

// It can be used within a function template's noexcept specifier to declare that the function will throw exceptions for some types but not others.


void f1()
{
    // std::terminate();
}

void f2() noexcept
{
    // std::terminate();
}

int main()
{
    // std::cout<<"after the function\n";
    std::cout<<noexcept(f1())<<"\n";
    std::cout<<noexcept(f2())<<"\n";
    
    return 0;
}  