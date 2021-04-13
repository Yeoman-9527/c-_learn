#include <iostream>
void month(int);

using namespace std;

int main()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    month(age);
    return 0;
}

void month(int n)
{
    cout << "Your age is " << n << " years old equal " << n * 12 << " months" << endl;
}
