//problem link : https://codeforces.com/contest/215/problem/B
#include<iostream>
#include<cmath>
#include <iomanip>
#define endl "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    FAST;
    double n, value, maxR1 = 0, maxP1 = 0, minP2 = 5000;
    double  A, B, r2;
    cin >> n;
    // Loop to input possible values of r1 and to find the max value
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value > maxR1)
        {
            maxR1 = value;
        }
    }
    maxR1 *= maxR1;
    cin >> n;
    // Loop to input possible values of p1 and to find the max value
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value > maxP1)
        {
            maxP1 = value;
        }
    }
    cin  >> n;
    // Loop to input possible values of p2 and to find the min value
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value <= minP2)
        {
            minP2 = value;
        }
    }
    cin >> A >> B;
    // Mout/Min = A/B Equation
    r2 = sqrt((B * maxP1 * maxR1) / (A * minP2 + B * maxP1));
    cout<< fixed << setprecision(9) << r2;
    return 0;
}
