// ??
// 1. reference or pointer
// 2. len is a member or not
// 3. how to copy an object
// 4. how to initialize an object
//    1) assign to member directly
//    2) setvalue function
//    3) copy operation  
#include <iostream>

using namespace std;

class Line
{
		int *ptr;
	public:
		int getLength( void );
		Line( int len );             // simple constructor
		//Line(){};             // default constructor
		Line( const Line &obj);  // copy constructor ??? why it is & not *, means reference?
		~Line();                     // destructor

};

// Member functions definitions including constructor
Line::Line(int len)
{
	cout << "Normal constructor allocating ptr" << endl;
	// allocate memory for the pointer;
	ptr = new int;
	*ptr = len; // class could access the private member
}

Line::Line(const Line &obj)
{
	cout << "Copy constructor allocating ptr." << endl;
	ptr = new int;
	*ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
	cout << "Freeing memory!" << endl;
	delete ptr;
}
int Line::getLength( void )
{
	return *ptr;
}

void display(class Line obj) // ??? why no "class"
{
	cout << "Length of line : " << obj.getLength() <<endl;
}

// Main function for the program
int main( )
{
	Line line(10);
    Line line2 = line;

	display(line);
	display(line2);

	return 0;
}
