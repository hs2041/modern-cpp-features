#include <headers.h>

class backup{

};
 
int main() 
{
    auto deleter = [](backup *input){
        std::cout<<"shared destruction\n";
    };

    std::shared_ptr<backup> abc(new backup, deleter);

    return 0;
}

