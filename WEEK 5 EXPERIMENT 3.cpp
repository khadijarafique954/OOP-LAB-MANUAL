#include <iostream>
#include <iomanip>
using namespace std;

class Travel
{
private:
    int kilometer;
    int hour;

public:
    Travel()
    {
        kilometer = 0;
        hour = 0;
    }

    void input()
    {
        cout << "Enter distance in kilometers: ";
        cin >> kilometer;

        cout << "Enter time in hours: ";
        cin >> hour;
    }

    void showTable(Travel p)
    {
        cout << "\nObject\t\tKilometer\tHour\n";
        cout << "----------------------------------------\n";

        cout << "t1\t\t" << kilometer << "\t\t" << hour << endl;
        cout << "t2\t\t" << p.kilometer << "\t\t" << p.hour << endl;
        cout << "Added Result\t" << kilometer + p.kilometer
            << "\t\t" << hour + p.hour << endl;
    }
};

int main()
{
    Travel t1, t2;

    cout << "Enter details for first travel object:\n";
    t1.input();

    cout << "\nEnter details for second travel object:\n";
    t2.input();

    t1.showTable(t2);

    return 0;#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
        cout << "Object created.\n";
    }

    void show()
    {
        cout << "Total objects created so far: " << count << endl;
    }
};

int Capital::count = 0;

int main()
{
    Capital x;
    x.show();

    Capital y;
    y.show();

    Capital z;
    z.show();

    return 0;
}