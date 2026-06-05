#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    int yearModel;
    string company;
    int speed;

public:
    void setYearModel(int y){
        yearModel = y;
    }
    void setCompany(string c){
        company = c;
    }
    void setSpeed(int s){
        speed = s;
    }
    int getYearModel(){
        return yearModel;
    }
    string getCompany(){
        return company;
    }
    int getSpeed(){
        return speed;
    }
    void accelerate(){
        speed = speed + 5;
    }
    void brake(){
        speed = speed - 5;
    }
};

int main()
{
    Car myCar;
    myCar.setYearModel(2022);
    myCar.setCompany("Toyota");
    myCar.setSpeed(0);

    cout << "Car Model: " << myCar.getYearModel() << endl;
    cout << "Company: " << myCar.getCompany() << endl << endl;

    cout << "Accelerating..." << endl;
    for (int i = 1; i <= 5; i++) {
        myCar.accelerate();
        cout << "Speed after accelerate " << i << ": " << myCar.getSpeed() << " km/h" << endl;
    }

    cout << endl << "Braking..." << endl;
    for (int i = 1; i <= 5; i++) {
        myCar.brake();
        cout << "Speed after brake " << i << ": " << myCar.getSpeed() << " km/h" << endl;
    }

    return 0;
}
