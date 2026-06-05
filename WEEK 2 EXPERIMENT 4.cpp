#include <iostream>
#include <string>
using namespace std;
 
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};
 
void displayMovie(MovieData movie);
 
int main() {
 
    MovieData movie1;
    MovieData movie2;
    cout << "Enter details for Movie 1\n";
    cout << "===========================\n";
    cout << "Title: ";
    getline(cin, movie1.title);
    cout << "Director: ";
    getline(cin, movie1.director);
    cout << "Year Released: ";
    cin >> movie1.yearReleased;
    cout << "Running Time (minutes): ";
    cin >> movie1.runningTime;
    cin.ignore();
    cout << "\n";
    cout << "Enter details for Movie 2\n";
    cout << "===========================\n";
    cout << "Title: ";
    getline(cin, movie2.title);
    cout << "Director: ";
    getline(cin, movie2.director);
    cout << "Year Released: ";
    cin >> movie2.yearReleased;
    cout << "Running Time (minutes): ";
    cin >> movie2.runningTime;
    cout << "\n";
    cout << "===== MOVIE DETAILS =====\n\n";
    displayMovie(movie1);
    displayMovie(movie2);
    return 0;
}
 
void displayMovie(MovieData movie) {
    cout << "-----------------------------\n";
    cout << "Title    : " << movie.title << endl;
    cout << "Director : " << movie.director << endl;
    cout << "Year     : " << movie.yearReleased << endl;
    cout << "Duration : " << movie.runningTime << " minutes" << endl;
    cout << "-----------------------------\n\n";
}