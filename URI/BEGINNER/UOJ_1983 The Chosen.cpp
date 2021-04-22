#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    vector <long long int> reg;
    vector <double> score;

    long long int x;
    double scr;

    int currentIndex = -1;
    double currentMax = 8.0;

    for(int i = 0; i<t; i++)
    {
        cin >> x >> scr;
        reg.push_back(x);
        score.push_back(scr);
        if(scr >= currentMax)
        {
            currentIndex = i;
            currentMax = scr;
        }

    }
    if(currentIndex == -1)
        cout << "Minimum note not reached" << endl;
    else
        cout << reg[currentIndex] << endl;

    return 0;
}
