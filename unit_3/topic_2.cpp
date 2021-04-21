#include <iostream>
using namespace std;

int main()
{
    const float inches = 12.0;
    const float meter = 0.0254;
    const float kilogram = 2.2;
    float foots;
    float pounds;
    cout << "Please enter your height by foots:__\b\b";
    cin >> foots;
    cout << "Please enter your weight by pounds:___\b\b\b";
    cin >> pounds;
    cout << "Your BMI is " << pounds / kilogram / foots * inches * meter << endl;
    return 0;
}