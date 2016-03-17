#include <iostream>

using namespace std;

class Box
{
    double width;
    public:
    friend void printWidth( Box box );
    friend class Collections;         // all members of class Collections will be friends of Box; so they can access private member of Box.
    void setWidth( double wid );
};

// Member function definition
void Box::setWidth( double wid )
{
    width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box )
{
    /* Because printWidth() is a friend of Box, it can
       directly access any member of this class */
    cout << "Width of box : " << box.width <<endl;
}
class Collections{
    double length;
    public:
    void setLength(double len){length = len;}
    bool fitOrNot(class Box );
};

// 
bool Collections::fitOrNot(class Box box){ // it is easy to forget the scope "Collections::"
    if(length < box.width){
        std::cout << "this object can be put in the box" << endl;
        return true;
    }
    std::cout << "this object can not be put in the box" << endl;
    return false;
}

// Main function for the program
int main( )
{
    Box box;
    Collections ruler;

    // set box width without member function
    box.setWidth(10.0);
    ruler.setLength(19.0);

    // Use friend function to print the wdith.
    printWidth( box );
    ruler.fitOrNot( box );

    return 0;
}
