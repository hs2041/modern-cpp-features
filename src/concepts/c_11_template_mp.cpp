#include <iostream>

template <int N>                                                                 // (2)
struct Factorial{
    static int const value = N * Factorial<N-1>::value;
};

template <>                                                                      // (3)
struct Factorial<1>{
    static int const value = 1;
};

int main(){
    
    std::cout << std::endl;
    const int num = 5;
    // std::cin<<num
    std::cout << "Factorial<5>::value: " << Factorial<num>::value << std::endl;    // (1)
    // std::cout << "Factorial<10>::value: " << Factorial<10>::value << std::endl;
    
    std::cout << std::endl;

}