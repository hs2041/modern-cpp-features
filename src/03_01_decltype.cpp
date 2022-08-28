#include <headers.h>

struct test1{
    int x;
};
class test2{
    private:
        int y;
};
 
float f1(int a, int b)
{
    return 0.0;
}

template <typename T> void f4()
{
    if (std::is_same<T, int>::value) { 
        std::cout<<" Function f2 called with type int\n";    
    }
    else if (std::is_same<T, const int>::value) { 
        std::cout<<" Function f2 called with type const int\n";    
    }
} 


int main() 
{
    int a = 2;
    const int a2 = 3;
    //Pointer can be of void type and casted into some other form, however, an object cannot be of void type
    void* a1;
    decltype(a) b;
    decltype(test1::x) c;
    //get the function type
    decltype(f1) f2;
    //get the return type of function
    decltype(f1(1,2)) f3;
    // You can't access the type of private variables
    // decltype(test2::y) d;

    // f2<int>();
    //Use case
    f4<decltype(a)>();
    f4<decltype(a2)>();
    
    //decltype obtained using auto can be used to streamline the code such that even if a different variable needs to be used, no code change is required 

    return 0;
}

