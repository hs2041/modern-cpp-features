#include <headers.h>

template <typename T>
using f3 = std::vector<T>;
    
int main() 
{
    using f2 = std::vector<float>;
    f3<float> a;

    return 0;
}

