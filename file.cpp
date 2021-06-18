#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    //create file
    // ofstream create("created.txt"); //shortcut
    // create.open("created.txt"); //if it will not exist it will create file and open empty

    //writing on a file
    // create << "this is the file which ";

    // appending on a file
    // ofstream create("created.txt",ios::app);
    // create << "\nthis is the file which ";

    // read file
    ifstream create("created.txt");
    string s;
    // create>>s;
    // cout<<s<<endl;

    //read word by word

    // while (! create.eof())
    // {
    //     create>>s;
    //     cout<<s<<endl;
    // }

    //read line by line

    while (getline(create, s))
    {
        cout << s << endl;
    }

    create.close();
    return 0;
}