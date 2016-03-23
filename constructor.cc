// ?? why display invoke the copy operation? 
#include <iostream>

using namespace std;

class Line
{
    double *ptr;
    public:
    Line(double len);  // This is the constructor
    Line(const Line &obj);  // This is the copy control 
    ~Line();
    double getLength();
    void display(class Line);
};


// Member functions definitions including constructor
Line::Line(double len)
{
    cout << "Object is being created" << endl;
    ptr = new double;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "copy an object " << endl; 
    ptr = new double;
    *ptr = *obj.ptr; // ptr = obj.ptr means share memory.
}
double Line::getLength()
{
    return *ptr;
}
Line::~Line()
{
    cout << "delete the class " << endl;
    delete ptr;
}

void display(class Line obj)
{
    cout << " the length is " << obj.getLength() << endl;
}

// Main function for the program
int main()
{
    Line line(5.0);
    Line line2 = line;
    Line *ptr = &line;
    cout << ptr -> getLength() << endl;

    //cout << "Length of line : " << line2.getLength() <<endl;

    return 0;
}
