#include <headers.h>

//std::deque (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end. In addition, insertion and deletion at either end of a deque never invalidates pointers or references to the rest of the elements.
 
int main() 
{   
    std::deque<int> d = {7, 5, 16, 8};
 
    // Add an integer to the beginning and end of the deque
    d.push_front(13);
    d.push_back(25);

    std::cout<<d.at(1)<<"\n";
    std::cout<<d.front()<<"\n";
    std::cout<<d.back()<<"\n";

    d.pop_back();
    d.pop_front();
    return 0;
}

