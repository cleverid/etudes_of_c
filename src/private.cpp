#include <iostream>

using namespace std;

class A {
    int v;
    public:
    A(int v) {
        this->v = v;
    }
    bool compare(A &a) {
        return v == a.v;
    }
};

int main()
{
    A a(1);
    A b(2);
    if (a.compare(b)) {
        cout << "Равны" << std::endl;
    } else {
        cout << "Не равны" << std::endl;
    }
}
