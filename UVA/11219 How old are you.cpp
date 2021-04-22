#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t;i++)
    {
        int tDay, tMon, tYear, pDay, pMon, pYear;

        scanf("%d/%d/%d",&tDay, &tMon, &tYear);
        scanf("%d/%d/%d",&pDay, &pMon, &pYear);

        if(tDay<pDay)
            tMon--;
        if(tMon<pMon)
            tYear--;
        int year = tYear-pYear;

        if(year<0)
            cout << "Case #" << i << ": Invalid birth date" << endl;
        else if(year>130)
            cout << "Case #" << i << ": Check birth date" << endl;
        else
            cout << "Case #" << i << ": " << year << endl;
    }
    return 0;
}
