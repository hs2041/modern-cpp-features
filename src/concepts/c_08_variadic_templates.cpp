#include <headers.h>

template <typename T>
void print( T a)
{
    std::cout<<a<<std::endl;
}

template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    std::cout << var1 << std::endl;
 
    print(var2...);
}

int main()
{
    int a = 1;
    // print(a,a);

    // print(a,a,a,a,a,a);
    print(1, 2, 3.14,
          "Pass me any number of arguments",
          "I will print\n", 3.8f);

    return 1;
}