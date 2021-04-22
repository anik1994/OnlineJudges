#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n, counter = 1;
    while(cin >> n, n)
    {
        int temp, res = 0;
        while(n--)
        {
            cin >> temp;
            temp ? res++:res--;
        }
        cout << "Case " << counter << ": " << res << endl;
        counter++;
    }

    //system("notepad.exe out.txt");
    return 0;
}
