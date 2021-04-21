#include <iostream>
using namespace std;

int main()
{
    long long world;
    long long country;
    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of US: ";
    cin >> country;
    float result = float(country) / world;
    cout << "The population of the US is " << result * 100 << "% of the world population" << endl;
    return 0;
}