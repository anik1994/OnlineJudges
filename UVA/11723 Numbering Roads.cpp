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
    int R, N;
    int counter = 1;
    while(scanf("%d %d", &R, &N) && R && N)
    {
        R = R-N;
        if(R<1)
            printf("Case %d: 0\n", counter++);
        else
        {
            int i,sum;
            bool isFound = false;
            for(i=1,sum=0; i<=26; i++)
            {
                sum += N;
                if(sum>=R)
                {
                    isFound = true;
                    break;
                }
            }

            if(isFound)
                printf("Case %d: %d\n", counter++, i);
            else
                printf("Case %d: impossible\n", counter++);
        }

    }

    //system("notepad.exe out.txt");
    return 0;
}
