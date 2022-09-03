#include <headers.h>

void f1(int* input){
    std::cout<<"int * called\n";
}
 
void f1(float* input){
    std::cout<<"float * called\n";    
}

int main() 
{
    int *a;
    float *b;

    a = nullptr;
    b = nullptr;
    f1(a);
    f1(b);
    // f1(nullpt);a
    // f1(NULL);
    
    return 0;
}   

