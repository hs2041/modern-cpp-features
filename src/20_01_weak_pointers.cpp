#include <headers.h>

class test{

};
 
int main() 
{
    std::weak_ptr<test> a1;

    {
        auto b1 = std::make_shared<test>();

        a1 = b1;

        if(a1.expired())
            std::cout<<"weak pointer expired \n";
    }
    if(a1.expired())
        std::cout<<"weak pointer expired \n";
   
    return 0;
}

