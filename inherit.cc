#include <iostream>

using namespace std;

// Base class
class Shape 
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

class Class2
{
    protected: // protected member can be accessed by derived class directly. ?? how about private
        int length;
    public:
        void setLength(int l)
        {
            length = l;
        }
};
// Derived class
class Rectangle: public Shape, public Class2 // list to indicate the member from multiple base class.
{
    public:
        int getArea()
        { 
            return (width * height); 
        }
        int getVolume()
        {
            return (width * height * length);
        }
};

int main(void)
{
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);
    Rect.setLength(10);

    // Print the area of the object.
    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total volume: " << Rect.getVolume() << endl;

    return 0;
}
