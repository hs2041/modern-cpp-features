#include <headers.h>

 
int main() 
{
    std::unique_ptr<int> abc = std::make_unique<int>(0);

    // auto f = [](){
    //     //abc won't be captured using pass by value since unique pointers only support move not copy
    //     if(abc == nullptr) 
    //     std::cout<<"Pointer to null\n";
    //     return 1;
    //     };

    auto f = [def = std::move(abc)](){
        // init capture is used here 
        if(def != nullptr) 
            std::cout<<"Pointer not to null\n";
        return 1;
        };

    //not only can you move a variable but also create one using init capture
    //note that the initializing expression is evaluated when the lambda is created (not when it is invoked).
    auto f2 = [def = std::make_unique<float>()](){
        // init capture is used here 
        if(def != nullptr) 
            std::cout<<"Pointer not to null\n";
        return 1;
        };

    if(abc == nullptr) 
        std::cout<<"Pointer set to null\n";

    f();
    // abc.reset();
    if(abc == nullptr) 
        std::cout<<"Pointer set to null\n";

    // abc = nullptr;
    f();
    return 0;
}

