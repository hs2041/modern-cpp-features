#include <headers.h>
 
void f(int a)
{
    std::cout<<"working\n";
}

int main() 
{
 
    auto a1 = 32;
    //Creates an intiializer list
    auto a2 = {32};
 
    f(a1);
    //Doesn't work since the function requires int 
    //  f(a2);


 return 0;
}

