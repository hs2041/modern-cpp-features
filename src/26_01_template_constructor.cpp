#include <headers.h>

class temple{
    public:

    template <typename T> explicit temple(T&& input){
        std::cout<<"template constructor called\n";
    }

    temple()
    {
        std::cout<<"constructor called\n";
    }

    temple(temple& input)
    {
             std::cout<<"copy constructor called\n";   
    }
};
 
int main() 
{
    temple a(10);
    temple b;
    temple c = b;
    return 0;
}

