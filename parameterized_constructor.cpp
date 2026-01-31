#include <iostream>
using namespace std;

class math
{
private:
    int a, b, c;

public:
    math(int x, int y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        c = a + b;
        cout << "\nTotal: " << c;
    }
};

int main()
{
    int a, b;

    cout << "\n\nEnter The Value For A: ";
    cin >> a;

    cout << "Enter The Value For B: ";
    cin >> b;

    math o(a, b);
    o.add();

    return 0;
}