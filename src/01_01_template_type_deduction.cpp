#include <headers.h>

class animal{};
class person{};

//Type currently being used can be deduced using the is_same comparator
template <typename T>
void f1()
{
    if (std::is_same<T, animal>::value) { 
        std::cout<<" My type is animal\n";
    } 
    else if (std::is_same<T, person>::value) { 
        std::cout<<" My type is person\n";
    } 
}

//Function definition for an explicit template type is also created
template <>void f1<animal>()
{
    std::cout<<" Explicit animal type function called\n";
}

//
template <typename T> void f2 (T a)
{
    if (std::is_same<T, int>::value) { 
        std::cout<<" Function f2 called with type int\n";    
    }
    else if (std::is_same<T, const int>::value) { 
        std::cout<<" Function f2 called with type const int\n";    
    }
    else if (std::is_same<T, int*>::value) { 
        std::cout<<" Function f2 called with type const int\n";    
    }
    else 
        std::cout<<" Function f2 called but not with type int\n";    

}

int main() 
{
    // f1<animal>();
    // f1<person>();
    int a1 = 0;
    float a2 = 0.0;
    const int a3 = 0;
    int *a4;
    f2(a1);
    f2(a2);
    f2(a3);
    f2(a4);

 return 0;
}
