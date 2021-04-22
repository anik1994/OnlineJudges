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

    int n,m;
    int arr[10005];

    while(scanf("%d", &n)!=EOF)
    {
        memset(arr, 0, sizeof(arr));

        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        scanf("%d", &m);

        sort(arr,arr+n);

        vector<pair<int,int>> vct;

        int dis = 1000000;

        for(int i=0; i<n-1; i++)
        {
            if(binary_search(arr+i+1,arr+n,m-arr[i]))
            {
                vct.pb(make_pair(arr[i],m-arr[i]));
                if(abs(arr[i]-(m-arr[i]))<dis)
                    dis = abs(arr[i]-(m-arr[i]));
            }
        }
        for(int i=0; i<vct.size(); i++)
        {
            if(abs(vct[i].first-vct[i].second)== dis)
            {
                printf("Peter should buy books whose prices are %d and %d.\n",vct[i].first, vct[i].second);
                printf("\n");
                break;
            }
        }
        vct.clear();
    }
    //system("notepad.exe out.txt");
    return 0;
}
