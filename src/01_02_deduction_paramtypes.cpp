#include <headers.h>

//Template type deduction under different argument types 

//When the parameter is a reference or pointer, we simply ignore that part for deduced the template type
template <typename T>void f1(T& a)
{
    if (std::is_same<T, int>::value) { 
        std::cout<<" Function f2 called with type int\n";    
    }
    else if (std::is_same<T, const int>::value) { 
        std::cout<<" Function f2 called with type const int\n";    
    }
} 

template <typename T>void f2(const T& a)
{

}

//In case of a simple pass by reference, a copy of the variable gets created on function call. Thus, all the parameter types associated with the original variable are simply ignored
template <typename T> void f3(T a)
{

}

//&& is called universal reference
template <typename T>void f4(const T& a)
{

}

int main() 
{

    int a = 10;
    //this won't work, a reference is basically an alias for some other address. A pointer, on the other hand, creates a variable which stores an address. A pointer can be dereferenced to access another memory location.
    // int &referer = 2;

    int &referer = a;
    // std::cout<<referer<<"\n";


    int a1 = 10;
    const int a2 = 20;
    const int& a3 = a1;

    //T will be of type int
    f1(a1);
    //T will be of type const int
    f1(a2);
    //T will be of type const int, referenceness is ignored during type deduction
    f1(a3);

    //T will be of type int
    f1(a1);
    //T will be of type int
    f1(a2);
    //T will be of type int, referenceness is ignored during type deduction
    f1(a3);


    return 0;
}
