#include <iostream>

void long_turn(int);

using namespace std;

int main()
{
	cout << "　1 long = 220 yard　" << endl;
	int length;
	cin >> length;
	long_turn(length);
	return 0;
}

void long_turn(int n)
{
	cout << n << "long = " << n * 220 << "yard" << endl;

}



