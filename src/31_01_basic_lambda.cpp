#include <headers.h>

 
int main() 
{
    int x = 6;

    auto summer = [](int a) { return a + 10;};
    std::function<int(int)> summer2 = [&](int a) { x++; return a + x;};

    std::cout<<"x: "<<x<<std::endl;

    x = x+2;
    std::cout<<"x: "<<x<<std::endl;

    std::cout<<"summer: "<<summer(5)<<std::endl;
    std::cout<<"summer: "<<summer2(5)<<std::endl;
    std::cout<<"x: "<<x<<std::endl;
    
    //use mutable if you want to change pass by value lambda inputs 
    
    return 0;
}

