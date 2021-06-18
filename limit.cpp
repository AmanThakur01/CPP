// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     cout << "\nupper and lower limits of integer is :\n";
//     cout << "upper limit of int is :  " << INT_MAX << endl;
//     cout << "lower limit of int is :  " << INT_MIN << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1 = 5, num2 = 7;
//     double d1 = 3.7, d2 = 8.0;

//     cout << "\n\nArithmetic operations:\n";

//     cout << " " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//     cout << " " << d1 << " + " << d2 << " = " << d1 + d2 << endl;
//     cout << " " << num1 << " + " << d2 << " = " << num1 + d2 << endl;

//     cout << " " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//     cout << " " << d1 << " - " << d2 << " = " << d1 - d2 << endl;
//     cout << " " << num1 << " - " << d2 << " = " << num1 - d2 << endl;

//     cout << " " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//     cout << " " << d1 << " * " << d2 << " = " << d1 * d2 << endl;
//     cout << " " << num1 << " * " << d2 << " = " << num1 * d2 << endl;

//     cout << " " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//     cout << " " << d1 << " / " << d2 << " = " << d1 / d2 << endl;
//     cout << " " << num1 << " / " << d2 << " = " << num1 / d2 << endl;
//     cout << endl;
//     return 0;
// }

// # include<iostream>

// using namespace std;

// int main(){
//     float radius,vol;
//     cout<<"Enter the Radius of Sphere:";
//     cin>>radius;
//     vol=(4*3.14*radius*radius*radius)/3;
//     cout<<"Volume is :"<<vol<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
//     {
//     	int rad1,hgt;
//     	float volcy;

//         cout<<" Enter the radius of the cylinder : ";
//     	cin>>rad1;
// 		cout<<" Enter the height of the cylinder : ";
//     	cin>>hgt;
//     	volcy=(3.14*rad1*rad1*hgt);
//         cout<<" The volume of a cylinder is : "<< volcy << endl;
//         cout << endl;
//         return 0;
//     }

// # include<iostream>

// using namespace std;

// int main(){
//     float radius,vol;
//     cout<<"Enter the Radius of Sphere:";
//     cin>>radius;
//     vol=(4*3.14*radius*radius*radius)/3;
//     cout<<"Volume is :"<<vol<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
//     {
//     	int rad1,hgt;
//     	float volcy;

//         cout<<" Enter the radius of the cylinder : ";
//     	cin>>rad1;
// 		cout<<" Enter the height of the cylinder : ";
//     	cin>>hgt;
//     	volcy=(3.14*rad1*rad1*hgt);
//         cout<<" The volume of a cylinder is : "<< volcy << endl;
//         cout << endl;
//         return 0;
//     }

// #include <iostream>
// using namespace std;

//     int main()
//     {
//     	int sid1;
//     	float vol;

//         cout<<" Enter the side of a cube : ";
//     	cin>>sid1;
//     	vol=(sid1*sid1*sid1);
//         cout<<" The volume of a cube is : "<< vol << endl;
//         cout << endl;
//         return 0;
//     }

// #include <iostream>
// using namespace std;

//     int main()
//     {
//     	int width, length, area, peri;
// 		cout << "\nArea and Perimeter of a Rectangle :\n";
//         cout<<" Enter the length of the rectangle : ";
//     	cin>>length;
// 		cout<<" Enter the width of the rectangle : ";
//     	cin>>width;
//     	area=(length*width);
// 		peri=2*(length+width);
//         cout<<" The area of the rectangle is : "<< area << endl;
//         cout<<" The perimeter of the rectangle is : "<< peri << endl;
//         return 0;
//     }

// #include <iostream>
// using namespace std;

// int main()
// {
//     float f, cel;
// 	cout << "\nCelsius to Fahrenheit :\n";
//     cout << " Enter the temperature in Celsius : ";
//     cin >> cel;
//     f = (cel * 9.0) / 5.0 + 32;
//     cout << " Celsius    : " << cel << endl;
//     cout << " Fahrenheit : " << f << endl;
// 	cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    time_t now = time(0);
//    char* dt = ctime(&now);

//    cout << "The local date and time is: " << dt << endl;
//     return 0;
// }

// int main()
// {
// int a,i=0;
//     cout << "\n\n Print the multiplication table of a number upto 10:\n";
// 	cout << " Enter For tabel: ";
// 	cin>> a;
// 	for (i=1;i<=10;i++)
// 	{
// 	cout << a<<" x "<< i << " = "<<a*i<<"\n" ;
// 	}

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p, r, t, i;
//     cout << "\n\n Calculate the Simple Interest :\n";
//     cout << " Enter the Principle: ";
//     cin >> p;
//     cout << " Enter the Rate: ";
//     cin >> r;
//     cout << " Enetr the Time: ";
//     cin >> t;
//     i = (p * r * t) / 100;
//     cout << " The Simple interest is : " << i;
//     cout << endl;
//     return 0;
// }