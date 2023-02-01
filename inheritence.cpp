#include <iostream>
using namespace std;

//single
class A{};
class B: public A{};

// multiple
class A{};
class B{};
class c: public A, public B{};

// multilevel
class A{};
class B:public A{};
class C:public B{};

// inheritance
class A{};
class B:public A{};
class C:public B{};

// hybrid
class A{};
class B{};
class C:public A, public B{};
class D:public c{};
class E:public c{};








int main(){


return 0;
}
