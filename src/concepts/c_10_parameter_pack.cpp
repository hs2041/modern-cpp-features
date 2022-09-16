#include <iostream>
#include <string>

template<typename ... Args>
void printMe(Args&& ... args) {
    (std::cout <<  ... <<  std::forward<Args>(args)) << '\n';
}


template<typename ... Args>
void printsize(Args&& ... args) {
    std::cout<<"size: "<<sizeof...(args)<<std::endl;
}


int main() {

    std::cout << '\n';

    std::cout << std::boolalpha;

    int a;
    float b;
    double c;
    printsize(a,b,c);
    printMe();
    printMe("Rainer ", "Grimm");
    printMe(true, " ", "+", " ",false, " = ", true + false);
    
    std::cout << '\n';

}