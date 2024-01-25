#include <iostream>
using namespace std;
void pointer()
{
	int n[3] = { 5, 25, 125 };

	int* ptr;

	ptr = n;

	for (int i = 0; i < 3; i++) {
		cout << "Value at ptr = " << ptr << endl;
		cout << "Value at ptr* = " << *ptr << endl;

		// increment pointer by 1
		ptr++;
	}

	cout << endl << endl;
	//pointers are symbolic representations of addresses

	int var2 = 7;

	//declare pointer variable
	int* ptr2;

	//note that data type of ptr2 and var must be the same

	ptr2 = &var2;

	//assign the address of a variable to a pointer
	cout << "Value at ptr2 = " << ptr << endl;
	cout << "Value at var2 = " << var2 << endl;
	cout << "Value at *ptr2 = " << *ptr2 << endl;

}

//Driver program
int main() { pointer(); return 0;  }
