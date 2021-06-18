#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, cube;

    cout << "\tPlease Enter Number   =  ";
    cin >> num;

    cube = num * num*num;

    cout << "\nThe cube is " << num << " = " << cube;

    return 0;
}

// int main(){
//     float num,result;

//     cout << "\tPlease Enter Number   =  ";
//     cin >> num;

//     result = sqrt(num);

//     cout << "\nThe Square root is " << num << " = " << result;

// }

// int main()
// {
//     int num, result, power;

//     cout << "\tPlease Enter Number   =  ";
//     cin >> num;
//     cout << "\tPlease Enter power   =  ";
//     cin >> power;
//     result = pow(num, power);

//     cout << "\nThe result is " << num << "^" << power << " = " << result << endl;
// }