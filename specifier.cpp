#include <iostream>
using namespace std;

class Volume
{
private:
    float length, breadth, height;

    float cube(float length, float height, float breadth)
    {
        float vol_is;
        vol_is = length * breadth * height;
        return vol_is;
    }
public:
    float here_is(){
        return cube(10, 20, 30);
    }
};


int main()
{
    Volume myObj; // Create an object of volume
    cout << endl
         << "Volume is :" << myObj.here_is() << endl; // Call the method with an argument
    return 0;
}
