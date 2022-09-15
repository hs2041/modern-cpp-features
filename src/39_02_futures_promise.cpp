#include <headers.h>
#include <thread>
#include <future>


int main()
{
    auto promise = std::promise<std::string>();



    auto future = promise.get_future();

    auto consumer = std::thread([&]
    {
        std::cout << future.get()<<std::endl;
    });

    auto producer = std::thread([&]
    {
        promise.set_value("Hello World");
    });

    producer.join();
    consumer.join();
    return 1;
}