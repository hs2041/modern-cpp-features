#include <headers.h>

int main() 
{

    //decltype for expressions leads to references
    int a = 30;
    decltype(auto) b = a;
    b = 20;
    std::cout<<a<<std::endl;
    decltype(auto) c = (a);
    c = 20;
    std::cout<<a<<std::endl;
    
    return 0;
}
