#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,cas=1;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        map<char,int> m;

        int len = str.size();

        for(int i=0;i<len;i++)
            m[str[i]]++;
//        map<char,int>::iterator it;
//        for(it=m.begin();it!=m.end();it++)
//            cout<<it->first<<"\t"<<it->second<<endl;

        cout<<"Case "<<cas<<": ";
        bool isEmpty = true;

        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            //cout<<it->first<<"\t"<<it->second<<endl;
            if(isPrime(it->second))
            {
                cout<<it->first;
                isEmpty = false;
            }
        }
        if(isEmpty)
            cout<<"empty";

        cout<<endl;
        cas++;
    }

    //system("notepad.exe out.txt");
    return 0;
}
