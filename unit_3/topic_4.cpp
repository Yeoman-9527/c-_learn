#include <iostream>

int main()

{

    using namespace std;

    long a;

    int d, h, m, s;

    cin >> a;

    d = a / 60 / 60 / 24;

    h = a / 60 / 60 % 24;

    m = a / 60 % 60;

    s = a % 60;

    cout << a << " seconds = "

         << d << " days, "

         << h << " hours,"

         << m << " minutes,"

         << s << " seconds.\n";

    return 0;
}