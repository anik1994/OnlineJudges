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
        int len = str.size();
        sort(str.begin(),str.end());

        cout<<"Case "<<cas<<": ";
        bool isEmpty = true;

        char prev = str[0];
        int counter = 1;
        for(int i=1;i<len;i++)
        {
            //cout<<"Current letter: "<<prev<<"\tcount: "<<counter<<endl;
            if(prev==str[i])
            {
                counter++;
            }
            else
            {
                if(isPrime(counter))
                {
                    cout<<prev;
                    isEmpty=false;
                }
                prev = str[i];
                counter = 1;
            }
        }
        //cout<<"Current letter: "<<prev<<"\tcount: "<<counter<<endl;
        if(counter && isPrime(counter))
        {
            cout<<prev;
            isEmpty=false;
        }

        if(isEmpty)
            cout<<"empty";

        cout<<endl;
        cas++;
    }

    //system("notepad.exe out.txt");
    return 0;
}
