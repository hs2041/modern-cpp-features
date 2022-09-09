#include <headers.h>

 
int main() 
{
    constexpr int a = 32;
    constexpr float b = 36.5;

    //compiles
    static_assert(a < b);    
    //doesn't compile
    // static_assert(a >= b);    
    return 0;
}

