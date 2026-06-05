#include <iostream>
using namespace std;
 
struct Student {
    int id;
    int marks;
};
 
int main() {
    Student s1 = {1, 60};
    Student s2 = {2, 70};
    Student s3 = {3, 80};
    int total = s1.marks + s2.marks + s3.marks;
    cout << "Total Marks: " << total << endl;
    return 0;
}
