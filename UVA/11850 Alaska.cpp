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

    int t;
    int arr[1425];

    while(scanf("%d",&t) && t)
    {
        memset(arr,0,sizeof(arr));
        int temp;
        while(t--)
        {
            scanf("%d",&temp);
            arr[temp]++;
        }
        if(!arr[0])
            printf("IMPOSSIBLE\n");
        else
        {
            int dis;
            bool imPossible = false;
            for(int i=0;i<=1422;i++)
            {
                if(arr[i])
                    dis = 200;
                else
                    dis--;

                if(!dis)
                {
                    imPossible = true;
                    break;
                }
            }
            for(int i=dis+1,j=1422;!imPossible;i--,j--)
            {
                if(arr[j] && i)
                    break;
                if(!i)
                {
                    imPossible = true;
                    break;
                }
            }
            if(!imPossible)
                printf("POSSIBLE\n");
            else
                printf("IMPOSSIBLE\n");
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
