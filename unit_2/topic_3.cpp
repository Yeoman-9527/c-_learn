#include <iostream>

void one();
void two();

using namespace std;

int main()
{
	one();
	two();
	return 0;
}

void one()
{
	cout << "Three blind mice\n"
		 << "Three blind mice"
		 << endl;
}

void two()
{
	cout << "see how they run\n"
		 << "see how they run"
		 << endl;
}
