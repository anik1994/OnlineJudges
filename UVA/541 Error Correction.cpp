#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int arr[150][150];
    int n;
    while(scanf("%d", &n)==1 && n !=0)
    {
        memset(arr, 0, sizeof(arr));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d", &arr[i][j]);
                arr[i][n] += arr[i][j];
                arr[n][j] += arr[i][j];
            }
        }
        int countRowOdd = 0, countColOdd = 0;
        int x, y;
        for(int i=0; i<n; i++)
        {
            if(arr[i][n]%2!=0)
            {
                countRowOdd++;
                x = i+1;
            }
            if(arr[n][i]%2!=0)
            {
                countColOdd++;
                y = i+1;
            }

        }
        if(!countRowOdd && !countColOdd)
            printf("OK\n");
        else if(countRowOdd == 1 && countColOdd == 1)
            printf("Change bit (%d,%d)\n",x,y);
        else
            printf("Corrupt\n");
    }

    //system("notepad.exe out.txt");
    return 0;
}
