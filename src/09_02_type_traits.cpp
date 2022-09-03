#include <headers.h>

template <typename T>
void algo(T input = 0)
{
    if(std::is_floating_point<T>::value)
        std::cout<<"Floating type provided\n";
    else if(std::is_reference<T>::value)
    {
        std::cout<<"I am a reference \n";
        
        using b = std::remove_reference_t<T>;
        b c = 5;

        input =  c;
    }
}


int main() 
{
    algo<float>();
    algo<int>();

    int x = 10;
    int &y = x;

    algo<int&>(y);

    std::cout<<"y = "<<y<<"\n";

    return 0;
}

