#include <iostream>
using namespace std;

class Area
{
private:
    // float length,breadth;
public:
    float room(float length, float breadth);
};

float Area::room(float len, float breadth)
{
    float areaOfRoom;
    areaOfRoom = len * breadth;
    return areaOfRoom;
}

int main()
{
    Area myObj; // Create an object of Area
    cout << endl
         << "Area is :" << myObj.room(10, 20) << endl; // Call the method with an argument
    return 0;
}
