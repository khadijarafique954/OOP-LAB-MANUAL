#include <iostream>
using namespace std;
class Message
{
public:
    Message()
    {
        cout << "Object created! Welcome to the class demonstration." << endl;
    }
};
int main()
{
    Message obj1;
    Message obj2;
    Message obj3;
    return 0;
}
