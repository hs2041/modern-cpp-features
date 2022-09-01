#include <headers.h>

void f1(int& input)
{
    std::terminate();

}

int main()
{
    int a = 10;
    f1(a);

    return 0;
}