// Chips and Salsa
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

int main()
{
    int temp, j; // hold user input & use as pointers
    // Constant for the number of salsa types
    const int num_salsa_types = 5;
    // Array of salsa types
    string salsaNames[5] = {"mild", "medium", "sweet", "hot", "zesty"};

    // Array of sales of each salsa type
    int salsaSales[5];
    // Total number of jars sold
    int total_sold;
    // Subscript of the salsa that sold the most.
    int most_sold;
    // Subscript of the salsa that sold the least.
    int least_sold;
    // Get the number of jars sold of each type of salsa.
    for (int i = 0; i < 5; i++)
    {
        cout << "\nHow many jars of " << salsaNames[i] << " were sold? ";
        cin >> temp;
        while (temp < 0)
        {
            cout << "\nPlease enter a valid, non-negative number.";
            cin >> temp;
        }
        /*        total_sold += temp; // compound total by new */
    }
    // Get the number of jars sold.
    cout << "\nTotal numbers of jars sold: " << total_sold;
    // Validate the input.
    while (total_sold < 0)
    {
        cout << "\nPlease enter a valid non-negative number. ";
        cin >> total_sold;
    }
    // Get total sales and high and low selling products
    // insertion sort : exchange string array as well (mirror)
    for (int i = 0; i < 5; i++)
    {
        temp = salsaSales[i];
        j = i - 1;
        while (j >= 0 && salsaSales[j] > temp)
        {
            salsaSales[j + 1] = salsaSales[j];
            // exchange strings as well
            salsaNames[j + 1] = salsaNames[j];
            j--;
        }
        salsaSales[j + 1] = temp;
    } // i just realized we could have probably just asked for input of lowest/highest sales.. but im too cool for that

    // Display the sales report header.
    cout << "\Salsa sales summary: ";
    // Display the name and jars sold of each type.
    // this running time is going to be tragic
    for (int i = 0; i < 5; i++)
    {
        cout << "\nNumber of " << salsaNames[i] << " jars sold: " << salsaSales[i];
    }
    // Display the total sales, highest seller, and lowest seller.
    cout << "\nTotal sales: " << /* total_sold */ getTotal(salsaSales);
    cout << "\nHighest seller: " << salsaNames[0];
    cout << "\nLowest seller: " << salsaNames[4];
}
// ********************************************************
// The getTotal function calculates and returns the       *
// total of the values stored in the array passed to      *
// the function.                                          *
// ********************************************************
int getTotal(int a[])
{
    int sum = 0;
    // this feel sunnecessary
    for (int i = 0; i < a.size() - 1; i++)
    {
        sum += a[i];
    }
    return sum;
}

// ********************************************************
// The posOfLargest function finds and returns the        *
// subscript of the array position holding the largest    *
// value in the array passed to the function.             *
// ********************************************************
int postOfLargest()
{
}
// ********************************************************
// The posOfSmallest function finds and returns the       *
// subscript of the array position holding the smallest   *
// value in the array passed to the function.             *
// ********************************************************
