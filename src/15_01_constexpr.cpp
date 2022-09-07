#include <headers.h>

constexpr int summer(int a, int b)
{
    return a+b;
}

int main() 
{

    // Doesn't work 
    // const int abc = 123;
    // constexpr const int &def = abc;
    
    // Doesn't work since a must be set at the time of memory allocation
    // const int a;
    // a = 10;

    //Doesn't work since snake is set at runtime
    // int snake = 10;
    // constexpr int bake = snake;

    //works fine
    // const int snake = 10;
    // constexpr int bake = snake;

    //works fine
    constexpr int snake = 10;
    constexpr int bake = snake;


    // this works
    int a;
    std::cin >> a;
    const int b = a;

    //this will be dervied at compile time
    summer(1,2);
    //while this will be updated at runtime
    summer(a,2);

    return 0;
}

