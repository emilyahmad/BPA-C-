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
    for (int i=0; i<SIZE; i++) {
        for (int j=0; j<SIZE; j++) {

        }
    }

    // Display the lottery and user numbers.

    // Display the number of matching numbers.

    // Determine whether the user won the grand prize.

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

// *******************************************************
// The displayValues function displays the values in the *
// lottery array and the user array.                     *
// *******************************************************
