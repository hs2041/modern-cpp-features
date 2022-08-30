#include <headers.h>

 
int main() 
{
    // create a container to store reference of objects.
    auto val = 99;
    auto _ref = std::ref(val);
    _ref++;
    auto _cref = std::cref(val);
    //_cref++; does not compile
    std::vector<std::reference_wrapper<int>>vec; // vector<int&>vec does not compile
    vec.push_back(_ref); // vec.push_back(&i) does not compile
    std::cout << val << std::endl; // prints 100
    std::cout << vec[0] << std::endl; // prints 100
    std::cout << _cref; // prints 100
    return 0;
}

