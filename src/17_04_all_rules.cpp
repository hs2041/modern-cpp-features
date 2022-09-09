#include <headers.h>

class ruler{
    public:
        //constructor
        ruler() = default;
        //copy constructor
        ruler(ruler &input) = default;
        //move operator
        ruler(ruler &&input) = default;
        //move assignment operator        
        ruler& operator=(ruler &&input) = default;
        //copy assignment operator
        ruler& operator=(ruler &input) = default;
        //destructor
        ~ruler() = default;
};

class ruler_man{
    public:
        //constructor
        ruler_man()
        {
            std::cout<<"constructor called\n"<<std::endl;
        }
        //copy constructor
        ruler_man(ruler_man &input)
        {
            std::cout<<"copy constructor called\n"<<std::endl;
        }
        //move operator
        ruler_man(ruler_man &&input)
        {
            std::cout<<"move operator called\n"<<std::endl;
        }
        //move assignment operator        
        ruler_man& operator=(ruler_man &&input)
        {
            std::cout<<"move assignment operator called\n"<<std::endl;
            return *this;
        }
        //copy assignment operator
        ruler_man& operator=(ruler_man &input)
        {
            std::cout<<"copy assignment operator called\n"<<std::endl;
            return *this;
        }
        //destructor
        ~ruler_man()
        {
            std::cout<<"destructor called\n"<<std::endl;
        }
};

int main() 
{
    ruler_man a;
    ruler_man b(a);
    ruler_man c;
    c = a;
    ruler_man f = std::move(a);
    ruler_man g;
    g = std::move(a);
    return 0;
}

