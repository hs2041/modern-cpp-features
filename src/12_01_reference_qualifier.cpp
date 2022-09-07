#include <headers.h>

class tester{
    
    public:
    void do1() &
    {
        std::cout<<"lvalue\n";
    }
        void do1() &&
    {
        std::cout<<"rvalue\n";
    }
};
 
int main() 
{   
    tester a;
    a.do1();
    tester().do1();

    return 0;
}

