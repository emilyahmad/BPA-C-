//  Lottery Application
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Global constants
int const SIZE = 5;

// Function prototypes
void generateNumbers(int[], int);
void getUser(int[], int);
int findMatches(int[], int[], int);
void displayValues(int[], int[], int);

int main()
{
    int totalLottery, totalUser; // sums of each array (check matching faster)
    int lottery[SIZE]; // Lottery numbers
    int users[SIZE]; // User's numbers
    // Number of matches
    int num_matches;
    
    // Generate the random lottery numbers.
    generateNumbers(lottery[], SIZE);
    // Get the user's numbers.
    getUser(users[], SIZE);

    // Get the number of matching numbers.
    num_matches = findMatches(lottery[], users[], SIZE);

    // Display the lottery and user numbers.
    displayValues(lottery[], users[], SIZE);

    // Display the number of matching numbers.
    cout << "\nNumber of matching values: " << num_matches;
    // Determine whether the user won the grand prize.
    if (num_matches == 5) {
        cout << "\nYou are a grand prize winner! Nice.";
    }

    return 0;
}

// *******************************************************
// The generateNumbers function generates random numbers *
// and stores them in the lottery array.                 *
// *******************************************************
void generateNumbers(int a[], int s) {
    for (int i = 0; i < s; i++) {
        a[i] == rand() % 10;
    }
}    
// *******************************************************
// The getUser function gets the user's lottery picks.   *
// *******************************************************
void getUser(int a[], s) {
    for (int i = 0; i < s; i++) {
        cout << "\nEnter guess " << i+1 << " /9: ";
        cin >> a[i];
    }
}
// *******************************************************
// The findMatches function finds the number of the      *
// user's values that match the lottery numbers. The     *
// number of matches is returned.                        *
// *******************************************************
int findMatches(int a[], int b[], int c) {
    int matches;
    for (int i=0; i<c; i++) { // double loop to cross check each element
        for (int j=0; j<c; j++) {
            if (a[i] == b[j]) {
                matches++;
            }
        }
    }
}
// *******************************************************
// The displayValues function displays the values in the *
// lottery array and the user array.                     *
// *******************************************************
void displayValues(int a[], int b[], int c) {
    cout << "\nLottery numbers:";
    for (int i=0; i<c; i++) {
        cout << " " << a[i];
    }
    cout << "\nUser's numbers:";
    for (int j=0; j<c; j++) {
        cout << " " << b[i];
    }
}