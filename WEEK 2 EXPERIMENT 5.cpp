#include <iostream>
using namespace std;
 
struct Distance {
    int feet;
    float inches;
    float toInches() {
        return feet * 12 + inches;
    }
};
 
struct Triangle {
    Distance base;
    Distance height;
    float area() {
        float baseInches = base.toInches();
        float heightInches = height.toInches();
        return 0.5 * baseInches * heightInches;
    }
};
 
int main() {
    Triangle tri;
    cout << "Enter base feet: ";
    cin >> tri.base.feet;
    cout << "Enter base inches: ";
    cin >> tri.base.inches;
    cout << "Enter height feet: ";
    cin >> tri.height.feet;
    cout << "Enter height inches: ";
    cin >> tri.height.inches;
    float area = tri.area();
    cout << "Area of the triangle: " << area << " square inches" << endl;
    return 0;
}