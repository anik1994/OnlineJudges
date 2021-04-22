#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    while(scanf("%d",&t) && t>=0)
    {
        ll male = 0, female = 1, previousFemale, previousMale;

        for(int i=1;i<=t;i++)
        {
            previousFemale = female;
            previousMale = male;

            male += previousFemale;
            female = ++previousMale;
        }

        printf("%lld %lld\n", male, male+female);
    }

    //system("notepad.exe out.txt");
    return 0;
}
