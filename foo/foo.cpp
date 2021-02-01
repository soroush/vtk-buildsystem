#include "foo.hpp"

#include <iostream>

foo::foo() {
}

foo::~foo() {
}

void foo::doFoo() {
    std::cout << "foo::doFoo()\n";
}