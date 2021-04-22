#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t, temp;
    string str;
    vector<int>x,y;

    cin >> t;
    getchar();
    while(t--)
    {
        getline(cin,str);

        temp = str[0]-'0';
        x.pb(temp*2);
        temp = str[1]-'0';
        y.pb(temp);
        temp = str[2]-'0';
        x.pb(temp*2);
        temp = str[3]-'0';
        y.pb(temp);

        temp = str[5]-'0';
        x.pb(temp*2);
        temp = str[6]-'0';
        y.pb(temp);
        temp = str[7]-'0';
        x.pb(temp*2);
        temp = str[8]-'0';
        y.pb(temp);

        temp = str[10]-'0';
        x.pb(temp*2);
        temp = str[11]-'0';
        y.pb(temp);
        temp = str[12]-'0';
        x.pb(temp*2);
        temp = str[13]-'0';
        y.pb(temp);

        temp = str[15]-'0';
        x.pb(temp*2);
        temp = str[16]-'0';
        y.pb(temp);
        temp = str[17]-'0';
        x.pb(temp*2);
        temp = str[18]-'0';
        y.pb(temp);

        int sum = 0;

        for(int i=0; i<x.size(); i++)
        {
            if(x[i]>9)
                {
                    sum += x[i]%10;
                    x[i] = x[i]/10;
                    sum += x[i];
                }
            else
            {
                sum += x[i];
            }
        }
        x.clear();
        for(int i=0; i<y.size();i++)
        {
            sum += y[i];
        }
        y.clear();

        if(sum%10 == 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;

    }
    return 0;
}
