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

    int n;
    scanf("%d", &n);

    int counter = 1;

    while(n--)
    {
        int st1, sm1, et1, em1, st2, sm2, et2, em2;
        scanf("%d:%d %d:%d",&st1, &sm1, &et1, &em1);
        scanf("%d:%d %d:%d",&st2, &sm2, &et2, &em2);
        //(et2<=st1 && em2<sm1) || (et1<=st2 && em1<sm2)
        if(et2<st1 || et1<st2)
        {
            printf("Case %d: Hits Meeting\n", counter);
        }
        else if(et2==st1)
        {
            if(em2<sm1)
            {
                printf("Case %d: Hits Meeting\n", counter);
            }
            else
            {
                printf("Case %d: Mrs Meeting\n", counter);
            }
        }
        else if(et1==st2)
        {
            if(em1<sm2)
            {
                printf("Case %d: Hits Meeting\n", counter);
            }
            else
            {
                printf("Case %d: Mrs Meeting\n", counter);
            }
        }
        else
            printf("Case %d: Mrs Meeting\n", counter);

        counter++;
    }

    //system("notepad.exe out.txt");
    return 0;
}
