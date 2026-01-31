#include <iostream>
using namespace std;

class class_2;

class class_1
{
    int valuel;

public:
    void indata(int a)
    {
        valuel = a;
    }

    void display(void)
    {
        cout << valuel << "\n";
    }

    friend void exchange(class_1 &, class_2 &);
};

class class_2
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }

    void display(void)
    {
        cout << value2 << "\n";
    }

    friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
    int temp = x.valuel;
    x.valuel = y.value2;
    y.value2 = temp;
}

int main()
{
    class_1 C1;
    class_2 C2;

    C1.indata(100);
    C2.indata(200);

    cout << "\n\nValues Before Exchange " << "\n";
    C1.display();
    C2.display();

    exchange(C1, C2);

    cout << "\nValues After Exchange " << "\n";
    C1.display();
    C2.display();

    return 0;
}