#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n, current, previous;
    while(cin >> n)
    {
        vector<bool> v(n,false);

        for(int i=0; i<n; i++)
        {
            cin >> current;
            if(i == 0)
                previous = current;
            else
            {
                v[abs(previous-current)] = true;
                previous = current;
            }
        }
        bool isJolly = true;
        for(int i=1;i<v.size();i++)
        {
            if(!v[i])
            {
                isJolly = false;
                break;
            }
        }

        isJolly ? cout << "Jolly" << endl : cout << "Not jolly" << endl ;

        v.clear();
    }
    //system("notepad.exe out.txt");
    return 0;
}
