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

    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>9)
        {
            vector<int> vct;
            int i=9;
            while(x!=1 && i!=1)
            {
                if(x%i==0)
                {
                    vct.pb(i);
                    x /= i;
                }
                else
                    i--;
            }
            if(x==1)
            {
                sort(vct.begin(),vct.end());
                for(int i=0; i<vct.size(); i++)
                {
                    cout<<vct[i];
                }
                cout<<endl;
            }
            else
                cout<<-1<<endl;
            vct.clear();
        }
        else
        {
            cout<<x<<endl;
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
