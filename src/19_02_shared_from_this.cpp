#include <headers.h>

class sharing: public std::enable_shared_from_this<sharing>{

    public:
        auto get_shared()
        {
            return shared_from_this();
        }
};

int main() 
{
    sharing a1, a2, a3;


    std::shared_ptr<sharing> b1 = std::make_shared<sharing>(a1);
    std::shared_ptr<sharing> b2 = b1->get_shared();
    std::shared_ptr<sharing> b3 = b2->get_shared();

    std::cout<<"Count for a1: "<<b1.use_count()<<"\n";
    return 0;
}

