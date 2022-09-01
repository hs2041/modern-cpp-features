#include <headers.h>

struct Bar {
};

struct Foo {
  void getBar() & { std::cout<<"lvalue reference\n"; }
  void getBar() const& { std::cout<<"const lvalue reference\n"; }
  void getBar() && { std::cout<<"rvalue reference\n"; }
private:
  Bar bar;
};


int main()
{
    Foo foo{};
    foo.getBar(); // calls `Bar getBar() &`

    const Foo foo2{};
    foo2.getBar(); // calls `Bar Foo::getBar() const&`

    Foo{}.getBar(); // calls `Bar Foo::getBar() &&`
    std::move(foo).getBar(); // calls `Bar Foo::getBar() &&`

    std::move(foo2).getBar(); // calls `Bar Foo::getBar() &&, due to const it gets treated as an rvalue

    return 0;
}  