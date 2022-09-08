#include <headers.h>

class mutexer{
    private:
        std::mutex m1;

};

int main() 
{
    std::mutex m1;

    // mutex object's copy constructor is disabled 
    // auto m2 = m1;
    // std::mutex m2(m1);

    mutexer a1;
    // default copy constructor doesn't work for the wrapped constructor as well 
    // mutexer a2(a1);
    // mutexer a2 = a1;

    return 0;
}

