#include <iostream>
using namespace std;

int main()
{
    float oil, distance;
    const double gallon = 3.875;
    const float mile = 0.6214;
    cout << "Please enter oil :";
    cin >> oil;
    cout << "Please enter distance :";
    cin >> distance;
    cout << "Europe 100 km take " << oil / distance * 100 << " L oil" << endl;
    cout << "US 1 gallon can work " << distance * mile / oil / gallon << endl;
    return 0;
}
