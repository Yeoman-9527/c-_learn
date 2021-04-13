#include <iostream>

void light_year(float);

using namespace std;

int main()
{
    cout << "Enter the number of light years: ";
    float num;
    cin >> num;
    light_year(num);
    return 0;
}

void light_year(float n)
{
    cout << n << " light years = " << n * 63240 << " astronomtical units." << endl;
}