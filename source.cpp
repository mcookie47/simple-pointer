#include <iostream>
using namespace std;
void pointer()
{
int n[3] = { 5, 25, 125 };

  int* ptr;

  ptr = n;

  for (int i = 0; i < 3; i++) {
cout << "Value at ptr = << ptr << endl;
cout << "Value at ptr* = << *ptr << endl;

  // increment pointer by 1
  ptr++
  }
  
}

//Driver program
int main() { pointer(); }
