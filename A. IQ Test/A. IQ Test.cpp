
//problem link : https://codeforces.com/contest/287/problem/A 

#include<iostream>
#include<cmath>
#define endl "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    FAST;
    int n, m, k, value, maxR1 = 0, maxP1 = 0, minP2 = 5000, r1;
    double  A, B, ratio, r2;
    cin >> n >> m >> k;

    // Loop to input possible values of r1 and to find the max value
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value > maxR1)
        {
            maxR1 = value;
        }
    }
    r1 = maxR1;
    maxR1 *= maxR1;
    // Loop to input possible values of p1 and to find the max value
    for (int i = 0; i < m; i++)
    {
        cin >> value;
        if (value > maxP1)
        {
            maxP1 = value;
        }
    }
    // Loop to input possible values of p2 and to find the min value
    for (int i = 0; i < k; i++)
    {
        cin >> value;
        if (value <= minP2)
        {
            minP2 = value;
        }
    }
    cin >> A >> B;
    ratio = A / B;
    r2 = sqrt((maxP1 * maxR1) / ratio);
    if (r2 < r1) {
        cout << r2;
    }
    else
    {
        while (r2 >= r1) {
            ratio++;
            r2 = sqrt((maxP1 * maxR1) / ratio);  
        }
        cout << r2;
    }
    return 0;
}
