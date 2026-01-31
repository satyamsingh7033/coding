#include <iostream>
using namespace std;

class OprOverload
{
public:
    int x, y;

    OprOverload()
    {
        x = 0;
        y = 0;
    }

    OprOverload(int a, int b)
    {
        x = a;
        y = b;
    }

    OprOverload operator+(OprOverload &Y)
    {
        OprOverload Z;
        Z.x = x + Y.x;
        Z.y = y + Y.y;
        return Z;
    }
};

int main()
{
    OprOverload A(8, 9);
    OprOverload B(10, 2);
    OprOverload C;

    C = A + B;

    cout << "\n\nSum of A & B: " << C.x << "," << C.y << endl;

    return 0;
}