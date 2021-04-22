#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t, counter = 1;
    cin>>t;
    while(t--)
    {
        int c,d;
        cin >> c >> d;
        double res = c+(d*5)/(double)9;

        cout << "Case " << counter << ": ";
        cout << fixed << setprecision(2) << res <<endl;
        counter++;

    }
    //system( "notepad.exe out.txt");
    return 0;
}
