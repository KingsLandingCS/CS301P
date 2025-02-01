#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int price;
    string type;
    int seats;
};

void print(Car c)
{
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << " " << endl;
}

void change(Car &c) // Pass by reference
{
    c.name = "Audi A8";
}

int main()
{
    Car c1;
    c1.name = "Honda City";
    c1.price = 6000;
    c1.seats = 5;
    c1.type = "Sedan";

    print(c1);
    change(c1); // Pass by value
    print(c1);

    Car c2;
    c2.name = "Suzuki Swift";
    c2.price = 2500;
    c2.seats = 5;
    c2.type = "Hatchback";

    Car c3;
    c3.name = "Totoya Fortuner";
    c3.price = 10000;
    c3.seats = 8;
    c3.type = "SUV";

    // print(c1);
    // print(c2);
    // print(c3);

    return 0;
}
