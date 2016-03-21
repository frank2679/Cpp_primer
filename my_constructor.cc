#include <iostream>
using namespace std;

class Line
{
    double length;
    public:
    Line(){ cout << "Object is being created. "<< endl;};
    void setLength(double len){ length = len;};
    void display(){cout << this->length << endl;}; 
};

int main()
{
    Line line;
    Line *p = &line;
    line.setLength(5); 
    line.display();
    p->display();
    p->setLength(6);
    p->display();
    return 0;
}
