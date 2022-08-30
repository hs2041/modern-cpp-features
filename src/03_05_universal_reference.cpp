#include <headers.h>

// Only accepts r values
void setter(int&& in)
{
    in++;
}


int main() 
{
    std::vector<int> v{1,2,13};

    int z = 10;
    int& a = z;

    setter(10);
    //Doesn't work
    // setter(z);
    std::cout<<a<<std::endl;

    return 0;
}

