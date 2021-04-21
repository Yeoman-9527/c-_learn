#include <iostream>
using namespace std;

int main()
{
    float height;
    const float cm = 100.0;
    cout << "Please enter your height ___\b\b\b";
    cin >> height;
    cout << "Your height is " << height * cm << " cm" << endl;
    return 0;
}
