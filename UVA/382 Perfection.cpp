#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int divisorSum(int x)
{
    int sum;
    if(x==1)
        sum = 0;
    else
        sum = 1;
    for(int i= 2;i*i<=x ;i++)
    {
        if(x%i==0)
        {
            if(i != (x/i))
            {
                sum += i;
                sum += x/i;
            }
            else
                sum += i;
        }
    }
    return sum;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    printf("PERFECTION OUTPUT\n");
    while(cin >> t, t)
    {
        if(t>=1 && t<10)
            printf("    %d ",t);
        else if(t>=10 && t<100)
            printf("   %d ",t);
        else if(t>=100 && t<1000)
            printf("  %d ",t);
        else if(t>=1000 && t<10000)
            printf(" %d ",t);
        else
            printf("%d ",t);

        int temp = divisorSum(t);

        if(t==temp)
            printf(" PERFECT\n");
        else if(t>temp)
            printf(" DEFICIENT\n");
        else
            printf(" ABUNDANT\n");

    }
    printf("END OF OUTPUT\n");
    //system("notepad.exe out.txt");
    return 0;
}
