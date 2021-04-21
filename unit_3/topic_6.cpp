#include <iostream>
using namespace std;

int main()
{
    float oil, distance;
    cout << "Please enter oil :";
    cin >> oil;
    cout << "Please enter distance :";
    cin >> distance;
    cout << "Every 100 km take " << oil / distance * 100 << " L oil" << endl;
    return 0;
}
