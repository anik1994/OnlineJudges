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

    int arr[110][110];
    int n,m, caseCounter=1;

    scanf("%d %d", &n, &m);
    while(n && m)
    {
        printf("Field #%d:\n",caseCounter++);

        memset(arr, 0, sizeof(arr));
        char input[110][110];
        for(int i=0; i<n; i++)
            scanf("%s",&input[i]);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(input[i][j]=='*')
                {

                    arr[i-1][j-1]++;
                    arr[i-1][j]++;
                    arr[i-1][j+1]++;
                    arr[i][j-1]++;
                    arr[i][j+1]++;
                    arr[i+1][j-1]++;
                    arr[i+1][j]++;
                    arr[i+1][j+1]++;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(input[i][j]=='*')
                    printf("*");
                else
                    printf("%d",arr[i][j]);
            }
            printf("\n");
        }

        scanf("%d %d", &n, &m);
        if( n && m)
            printf("\n");
        else
            break;
    }

    //system("notepad.exe out.txt");
    return 0;
}

/*
3 11
*....*...*.
...*...***.
..*...*.*.*
0 0
*/
