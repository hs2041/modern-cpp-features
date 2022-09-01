#include <headers.h>


void print(std::vector<int> const &input)
{
    std::copy(input.begin(),
            input.end(),
            std::ostream_iterator<int>(std::cout, " "));
}
 
int main() 
{
    std::vector<int> a(4,2);
    std::vector<int> b{4,2};

    print(a);
    std::cout<<"\n";
    print(b);
    std::cout<<"\n";
    return 0;
}

