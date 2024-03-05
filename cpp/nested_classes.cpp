#include <iostream>
using namespace std;

class outer
{
    int x;

public:
    class inner
    {
    public:
        void f()
        {
            outer obj;
            obj.x = 10;
            obj.display();
        }
    };
    void display()
    {
        cout << x;
    }
};

int main()
{
    outer ::inner p;
    p.f();
    return 0;
}
