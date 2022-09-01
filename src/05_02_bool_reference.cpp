#include <headers.h>

 
int main() 
{
    //Meaning: bool reference is allowed but bit reference is not allowed
    bool a = 1;
    bool &b = a;
    std::cout<<b<<"\n";
    a = 0;
    std::cout<<b<<"\n";
    
    return 0;
}
