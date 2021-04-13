#include <iostream>

void fahrenheit(float);

using namespace std;

int main()
{
    cout << "1 degree centigrade equal 3.4 fahrenheit" << endl;
    float degree_ctg;
    cin >> degree_ctg;
    fahrenheit(degree_ctg);
    return 0;
}

void fahrenheit(float n)
{
    cout << n << " degree centigrade = " << n * 3.4 << " fahrenheit" << endl;
}