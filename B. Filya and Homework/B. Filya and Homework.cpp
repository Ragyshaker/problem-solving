#include<iostream>
#include<algorithm>
#define endl "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    FAST;
    int n, searchedValue, distinctNumbers = 1, counterForDistinctNumbers = 0;
    // Input size of the array
    cin >> n;
    // Dynamic memory allocation for arrays
    int* arr = new int[n];
    int* distinctNumbersArray = new int[n];
    //Loop to input array numbers
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Sort the array in non-decreasing order
    sort(arr, arr + n);
    searchedValue = arr[0];
    distinctNumbersArray[0] = arr[0];
    //Loop to count distinct numbers in the array and store them 
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != searchedValue)
        {
            distinctNumbers++;
            searchedValue = arr[i];
            counterForDistinctNumbers++;
            //storing the values of distinct numbers in distinctNumbersArray
            distinctNumbersArray[counterForDistinctNumbers] = arr[i];            
        }
    }
    if (distinctNumbers == 3)
    {
        //Finding the difference between elements (1 & 2) and the difference between elements (2 & 3) 
        int  difference1, difference2;
        difference1 = distinctNumbersArray[1] - distinctNumbersArray[0];
        difference2 = distinctNumbersArray[2] - distinctNumbersArray[1];
        // Check if the differences are equal
        if (difference1 != difference2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else if (distinctNumbers < 3)
    {
        // If there are less than 3 distinct numbers, it's always possible
        cout << "YES";
    }
    else
    {
        // If there are more than 3 distinct numbers, it's not possible
        cout << "NO";
    }
    // Deallocate dynamic memory
    delete[] arr;
    delete[] distinctNumbersArray;
    return 0;
}
