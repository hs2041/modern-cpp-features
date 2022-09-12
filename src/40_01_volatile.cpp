#include <headers.h>

//  It is used to tell the compiler, that the value may change at any time. These are some properties of volatile.

// The volatile keyword cannot remove the memory assignment.
// It cannot cache the variables in register.
// The value cannot change in order of assignment.
 
int main() 
{
    //basically removes majority of the compiler optimizations
    int volatile a;
    volatile float b;
    return 0;
}

