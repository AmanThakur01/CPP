#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 1, res;
    int *k = &a;
    int *j = &b;
    cout << "a,b=" << a << "," << b << "\n";

    b = (*k + *j) - (*k = *j);

    cout << "a,b=" << *k << "," << *j;
}