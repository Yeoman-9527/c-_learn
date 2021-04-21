#include <iostream>
using namespace std;

int main()
{
    const float minutes_turn = 60;
    const float seconds_turn = 3600;
    float degrees, minutes, seconds;
    cout << "<<< Enter a latitude in degrees, minutes and seconds >>>" << endl;
    cout << "First enter the degrees:__\b\b";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:__\b\b";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:__\b\b";
    cin >> seconds;
    cout << degrees << " degrees, ";
    cout << minutes << " minutes, ";
    cout << seconds << " seconds = ";
    cout << degrees + minutes / minutes_turn + seconds / seconds_turn;
    cout << " degrees" << endl;
    return 0;
}
