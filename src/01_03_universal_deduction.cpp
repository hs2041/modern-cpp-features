#include <headers.h>

template <typename T>
void f1(T&& input)
{
    if(std::is_lvalue_reference<T>::value)
        std::cout<<"lvalue passed\n";   
    else
        std::cout<<"rvalue passed\n";   
    input++;
}

int main() 
{   
    int a = 10;
    //behaves like an lvalue reference (even though it wasn't a reference type)
    f1(a);
    //behaves like an rvalue only 
    f1(10);
    std::cout<<a<<std::endl;
    return 0;
}

