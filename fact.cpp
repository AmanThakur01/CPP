#include <iostream>
using namespace std;

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * fact(n - 1);
// }

// // // Driver code
// int main()
// {
//     int num = 4;
//     cout << "Factorial of "
//          << num << " is " << fact(num) << endl;
//     return 0;
// }


// ###########################################################
int main(){
    int num=5,res=1;
    for (int i = num; i > 0 ; i--)
    {
        res=res*i;
    }

    cout << "Factorial of "<< num << " is " << res << endl;
    return 0;
}

// #########################################################

// int main()
// {
//     int a = 0, b = 1, c;
//     cout<<"fibonacci series:"<<endl;
//     cout << a << ", ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b << ", ";
//         c = b;
//         b = a + b;
//         a = c;
//     }

//     return 0;
// }
// ###############################################

// int main()
// {
//     int binnum, decnum = 0, power_of_2 = 1, rem;
//     cout << "Enter any Binary Number: ";
//     cin >> binnum;
//     while (binnum != 0)
//     {
//         rem = binnum % 10;
//         decnum = decnum + (rem * power_of_2);
//         power_of_2 = power_of_2 * 2;
//         binnum = binnum / 10;
//     }
//     cout << "\nDecimal Value = " << decnum;
//     cout << endl;
//     return 0;
// }

// int main(){
//     int a=2;
//     int*ptr;
//     ptr=&a;
//     cout<<"address of a : "<<ptr<<endl;

// }