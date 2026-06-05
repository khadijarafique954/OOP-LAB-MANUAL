#include <iostream>
using namespace std;
struct WorkDay
{
    int eid;
    string day;
    int hour;
    int minute;
};
int main(){
    const float wageRate = 11.0;
    WorkDay week[5] = {
        {1,"Monday",5,35},
        {1,"Tuesday",6,17},
        {1,"Wednesday",7,18},
        {1,"Thursday",4,40},
        {1,"Friday",3,31}
    };
    float totalHours = 0;
    for(int i=0;i<5;i++)
    {
        float hours = week[i].hour + (week[i].minute / 60.0);
        totalHours += hours;
    }
    float totalWage = totalHours * wageRate;
    cout << "Employee ID: " << week[0].eid << endl;
    cout << "Total Working Hours: " << totalHours << endl;
    cout << "Total Wage: " << totalWage << " Euro" << endl;
    return 0;
}