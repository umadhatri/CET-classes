#include <iostream>
using namespace std;
class numbers
{
    private:
        int x;
    public:
        numbers()
        {
            x  = 0;
        }
        numbers(int n)
        {
            x = n;
        }
        numbers operator + (numbers l)
        {
            numbers tem;
            tem.x = x + l.x;
            return tem;
        }
        numbers operator * (numbers m)
        {
            numbers temp;
            temp.x = x * m.x;
            return temp;
        }
        void print()
        {
            cout << "Value is: " << x << endl;
        }
};

int main(int argc, char const *argv[])
{
    numbers num1(10), num2(20), num3, num4;
    num3 = num1 + num2;
    num3.print();
    num4 = num3*num1;
    num4.print();

    cout << "\n\n";

    return 0;
}
