#include <iostream>
using namespace std;
class calculate
{

    private:
        float radius, base, height;
        long length, breadth;

    public:
        void area(float rad)
        {
            radius = rad;
            cout << "Area of the circle = " << 3.14*rad*rad << endl;
        }

        void area(long l, long b)
        {
            length = l;
            breadth = b;
            cout << "Area of rectangle = " << l*b << endl;
        }

        void area(float ba, float h)
        {
            base = ba;
            height = h;
            cout << "Area of triangle is = " << 0.5*base*height <<endl;
        }
};

int main(int argc, char const *argv[])
{
    calculate *cal = new calculate;
    float rad;
    cout << "Enter the radius of circle: ";
    cin >> rad;
    cal->area(rad);

    long l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cal->area(l, b);

    float base, h;
    cout << "Enter the base and height of triangle: ";
    cin >> base >> h;
    cal->area(base, h);

    cout << "\n\n";
    
    return 0;
}
