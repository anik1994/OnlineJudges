#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

struct node
{
    string st;
    ll minimum;
};
bool cmp(node a, node b)
{
    return a.minimum<b.minimum;
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    string str = "BCG";

    vector<node> vct;
    vector<ll> B,C,G;
    ll a,b,c,d,e,f,g,h,i;

    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i)
    {
        B.pb(a);
        G.pb(b);
        C.pb(c);

        B.pb(d);
        G.pb(e);
        C.pb(f);

        B.pb(g);
        G.pb(h);
        C.pb(i);

        do
        {
            ll sum = 0, index1, index2;
            node temp;
            for(int i=0; i<3; i++)
            {
                index1 = (i+1)%3;
                index2 = (i+2)%3;
                if(str[i]=='B')
                    sum += (B[index1]+B[index2]);
                else if(str[i]=='G')
                    sum += (G[index1]+G[index2]);
                else
                    sum += (C[index1]+C[index2]);
            }
            temp.st = str;
            temp.minimum = sum;
            vct.pb(temp);
        }
        while(next_permutation(str.begin(),str.end()));

        sort(vct.begin(),vct.end(),cmp);

        cout << vct[0].st << " " << vct[0].minimum << endl;

        vct.clear();
        B.clear();
        G.clear();
        C.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}
