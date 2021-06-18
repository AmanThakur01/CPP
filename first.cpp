#include <iostream>
using namespace std; //we dint have to write std:: in every intraction
int NewMethod()
{
    
    cout<<("this is new method\n");
    return 0;
}
struct student
{
    private:
        int num1=10;
    public:
        int id;
        char first;
        float percentage;
    // cout<<"this is struct";
} p1, p2;

int main(int argc, char const *argv[])
{
    // std::cout<<"hello world\n";
    // int k = NewMethod();
    // struct student p1;
    p1.id = 123;
    p2.id = 99;
    cout << p1.id;
    return 0;
}
int main(){
    cout<<"hello world\n";
    return 0;
}