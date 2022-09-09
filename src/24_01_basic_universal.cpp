#include <headers.h>

template <typename T>
void f2(T &&name)
{
    name = 0;
    std::cout<<"name set to zero\n";
}

void f1(int &name)
{   
    std::cout<<"lvalue call\n";
}
void f1(int &&name)
{
    std::cout<<"rvalue call\n";
}

int main() 
{
    int a = 1;
    f2(1);
    f2(a);

    std::cout<<a<<std::endl;

    return 0;
}

