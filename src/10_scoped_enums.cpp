#include <headers.h>

 
int main() 
{
    enum class color {red, blue, white};
    enum u_color{red, blue, white};

    std::cout<<u_color::red;
    //error
    // std::cout<<color::red;

    //forward declaration
    // enum box;
    
    //this acts as the declaration
    enum class  box;
    //while this is the actual definition
    enum class box{big, small, med};


    return 0;
}

