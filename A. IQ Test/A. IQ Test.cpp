
//problem link : https://codeforces.com/contest/287/problem/A 

#include<iostream>
#include<cmath>
#define endl "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    FAST;
    char arr[4][4];
    // Loop to input values into the grid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    // Loop to iterate through subgrids
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Calculate the sum of the elements in the current subgrid
            int sum = arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1];
            // If the sum is not equal to 162 (ASCII value of '#' + '#' + '.' + '.'), print "YES" and return
            if (sum != 162)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
