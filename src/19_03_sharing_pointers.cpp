#include <headers.h>

class testbot{

};

int main() 
{

    std::unique_ptr<testbot> a1 = std::make_unique<testbot>();
    std::shared_ptr<testbot> b1 = std::move(a1);

    if(a1 == nullptr)
        std::cout<<"unique pointer was moved\n";

    //the reverse is not possible
    // std::shared_ptr<testbot> b2 = std::make_shared<testbot>();
    // std::unique_ptr<testbot> a2 = std::move(b2);

    
    return 0;
}

