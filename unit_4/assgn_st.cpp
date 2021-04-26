#include <iostream>
using namespace std;

struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable bouquet = {
        "sunflowers",
        0.20,
        12.49};
    inflatable chioce;
    cout << "bouquet; " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    chioce = bouquet;
    cout << "chioce: " << chioce.name << " for $";
    cout << chioce.price << endl;
    return 0;
}
