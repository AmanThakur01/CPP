#include <iostream>
using namespace std;

// // function declaration
// int swap(int *x, int *y)
// {
//   return *y, *x;
// }

// int main()
// {
//   // local variable declaration:
//   int a = 100;
//   int b = 200;

//   cout << "Before swap, value of a :" << a << endl;
//   cout << "Before swap, value of b :" << b << endl;

//   /* calling a function to swap the values.
//       * &a indicates pointer to a ie. address of variable a and 
//       * &b indicates pointer to b ie. address of variable b.
//    */
//   a,b=swap(&a, &b);

//   cout << "After swap, value of a :" << a << endl;
//   cout << "After swap, value of b :" << b << endl;

//   return 0;
// }

int main(){
  int a=2,b=3,c;
  cout<<"a="<<a<<"b="<<b<<endl;
  c=a;
  a=b;
  b=c;
  cout<<"a="<<a<<"b="<<b<<endl;
  return 0;
}