#include <headers.h>

//noexcept is for compiler performance optimizations in the same way that const is for compiler performance optimizations.

void f1() noexcept
{
//  try
//  {
    throw std::exception{};
    // throw 10;

//  }  
//  catch(...)
//  {
//     std::cout<<"entered catch\n";
//  }
} 

void f2()
{
    throw std::exception{};
}

int main() 
{
    // f1();

    std::cout<<noexcept(f1())<<" "<<noexcept(f2())<<"\n";
    return 0;
}

