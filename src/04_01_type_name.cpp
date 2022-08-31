#include <headers.h>
#include <boost/type_index.hpp>
 
struct Student{

};

int main() 
{
    using boost::typeindex::type_id_with_cvr;
    int *v1;
    std::vector<Student> v2;
    std::vector<Student> &v3 = v2;
    std::deque<float> v4;
    const static std::queue<int> v5;
    auto v6 = 3.f;
    int a;
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v1)>().pretty_name() <<"\n";
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v2)>().pretty_name() <<"\n";
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v3)>().pretty_name() <<"\n";
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v4)>().pretty_name() <<"\n";
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v5)>().pretty_name() <<"\n";
    std::cout<< boost::typeindex::type_id_with_cvr<decltype(v6)>().pretty_name() <<"\n";

    return 0;

}

