#include <iostream>
using namespace std;

class myVec
{
    public:
        myVec(int n){ size = n; data = new double[size];} // initialize; data is the address of the array. 
        myVec(){size = 10; data = new double[10]; } // default initializer
        myVec(const myVec &obj); // copy operator
        ~myVec(){delete [] data; }
        void operator=(const myVec &obj); // operator overloading
        int size;
        double *data;
};
myVec::myVec(const myVec &obj)
{
    int i; 
    int n = obj.size;
    data = new double[n];
    for(i = 0; i < n; i++)
    {
        data[i] = obj.data[i];
    }
}

void myVec::operator=(const myVec &obj)// define assignment operator
{
    if (this != &obj) // avoid self
    {
        delete  data;
        size = obj.size;
        data = new double[size];
        for(int i = 0; i < size; i++)
            data[i] = obj.data[i];
    }
}
int main()
{
    myVec a(5);
    myVec b = a;
    myVec c;
    c = a; 
    return 0;
}

