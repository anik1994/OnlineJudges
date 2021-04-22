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

    ll a, l;
    ll counter = 1;
    while(scanf("%lld %lld", &a, &l) && a>=0 && l>=0)
    {
       printf("Case %lld: A = %lld, limit = %lld, number of terms = ",counter,a,l);
       ll terms = 0;
       while(a!=1 && a<=l)
       {
           //cout<<a<<endl;
           if(a%2==0)
           {
               a=a/2;
           }
           else
           {
               a=((3*a)+1);
           }
           //cout<<a<<endl;
           terms++;
           if(a==1)
            terms++;
       }
       printf("%lld\n", terms);
       counter++;
    }

    //system("notepad.exe out.txt");
    return 0;
}
