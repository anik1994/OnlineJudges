#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

bool cmp(int x, int y)
{
    return x>y;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int x;
    while(cin >> x)
    {
        int rem, counter, temp;
        vector<int> vct;
        for(int i=0; i<3; i++)
        {
            counter = x, temp=x+i;
            while(temp>2)
            {
                rem = temp/3;
                counter += rem;
                rem += temp%3;
                temp = rem;
            }
            if(temp >= i)
                vct.pb(counter);
        }
        sort(vct.begin(), vct.end(), cmp);
        cout << vct[0] << endl;
    }
    //system( "notepad.exe out.txt");
    return 0;
}
