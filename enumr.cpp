#include <iostream>


using namespace std;

enum week
{
    January,
    febuary,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

int main()
{
    week year;
    year = November;
    cout << "year " << year;
    return 0;
}
