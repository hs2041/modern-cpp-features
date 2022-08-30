#include <headers.h>

void overload_values(int &x)
{
    std::cout<<"received an lvalue\n";
}

void overload_values(int &&x)
{
    std::cout<<"received an rvalue\n";    
}

//requires an lvalue but if you add a const to the argument the program will work even for rvalues (line 36)
void setval(int &x)
{

}

//getval is returning an lvalue, if you remove the & from return type, it would return an rvalue
int& getval()
{
    static int val = 10;

    return val;
}

int main()
{
    int b = getval();
    std::cout<<b<<"\n";
    getval() = 11;
    b = getval();
    std::cout<<b<<"\n";

    //this is a special case which works due to the const signifier without which the compiler throws an error
    const int &a = 10;

    setval(b);
    //doesn't work
    // setval(10);
    // setval(b+10);

    overload_values(b);
    overload_values(10);
    overload_values(b+10);
    
    return 0;
}