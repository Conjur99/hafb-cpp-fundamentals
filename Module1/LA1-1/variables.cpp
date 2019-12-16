#include <iostream>
using namespace std;

int main()
{
    cout << "\nDate Type Bytes"
        << "\n--------"
        << "\nint       " << sizeof(int)        //integer
        << "\nchar      " << sizeof(char)       //1 byte char
        << "\nlong      " << sizeof(long)       //long int
        << "\nbool      " << sizeof(bool)       //boolean
        << endl;
    return 0;
}