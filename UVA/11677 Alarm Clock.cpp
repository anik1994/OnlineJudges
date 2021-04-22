#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sH, sM, eH, eM, res;

    while(cin >> sH >> sM >> eH >> eM)
    {
        if(sH==sM && sM==eH && eH==eM && eM==sH && sH==0)
            break;

        if(eM>=sM)
            res = eM-sM;
        else
        {
            eH--;
            if(eH<0)
                eH = 23;

            eM += 60;
            res = eM-sM;
        }

        if(eH>=sH)
            res += ((eH-sH)*60);
        else
        {
            eH += 24;
            res += ((eH-sH)*60);
        }

        cout<< res << endl;
        res = 0;
    }

    //system("notepad.exe out.txt");
    return 0;
}
