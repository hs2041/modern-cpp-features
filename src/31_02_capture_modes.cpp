#include <headers.h>

 
int main() 
{
    using FilterContainer = std::vector<std::function<int(int)>>;
    FilterContainer filters;

    //this is an interesting case, if i is passed by value, the value of i at the time of lambda declaration is taken. If i is passed by reference, the updated value of i at the time of function call is taken
    for( int i = 3;i<10;i++)
    //pass by reference capture is wrong here since i' scope is limited to the for loop, use by value capture here instead
        filters.emplace_back([=](auto input){return input%i;});
    
    int x = 10, y = 20;

    std::cout<<"Filter 1: "<<filters[0](19)<<std::endl;
    std::cout<<"Filter 2: "<<filters[1](19)<<std::endl;
    std::cout<<"Filter 3: "<<filters[2](19)<<std::endl;

    auto capturer = [y](){
        //x is not captured
        // x = 5;
        //y is captured by value this won't work
        //  y = 5;
        auto c = y;
        c++;
    };
    
    return 0;
}

