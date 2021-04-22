#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int minNum = INT_MAX, currentNumber, index;

    for(int i = 1; i<=t; i++)
    {
        cin >> currentNumber;
        if(currentNumber < minNum)
        {
            index = i;
            minNum = currentNumber;
        }
    }
    cout << index << endl;
    return 0;
}
