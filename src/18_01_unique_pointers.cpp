#include <headers.h>

class backup{

};
 
int main() 
{
    auto deleter = [](backup *input){
        std::cout<<"destructor called\n";
    };

    std::unique_ptr<backup, decltype(deleter)> abc(new backup, deleter);
    // abc = std::make_unique<backup, decltype(deleter)>();

    std::unique_ptr<backup, decltype(deleter)> def = std::move(abc);
    // copy is not allowed
    // def = abc;

    //move is allowed
    // def = std::move(abc);
    if(abc == nullptr)
        std::cout<<"Pointer gone \n";

    return 0;
}

