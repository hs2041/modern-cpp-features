#include <headers.h>

template <typename T>
auto auto_getter1(std::vector<T> in, int i)
{
    return in[i];
}

template <typename T>
decltype(auto) auto_getter2(std::vector<T> &in, int i)
{
    return in[i];
} 

int main() 
{

    std::vector<int> v = {1,2,3,4};
    
    //getter1 will return an rvalue, the in[i] is of type &T but during type deduction the referenceness gets ignored
    // auto_getter1(a,2) = 4;
    std::cout<<auto_getter1(v,2)<<"\n";
    //using auto(decltype) one can get over this error
    int &out = auto_getter2<int>(v,1);
    out = 4;

    std::cout<<out<<"\n";
    std::cout<<v[1]<<"\n";

    //Second example

    int a = 30;
    int& b = a;
    auto c = b; // will be int
    c = 10;
    std::cout<<"b: "<<b<<"\n";
    decltype(auto) d = b; // will be int&
    d = 10;
    std::cout<<"b: "<<b<<"\n";


    return 0;
}

