#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back


struct hotel
{
    int cost;
    int maxCapacity;
};

bool cmp (hotel a, hotel b)
{
    return a.cost < b.cost;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n, b, h, w;

    while(scanf("%d %d %d %d", &n, &b, &h, &w)!=EOF)
    {
        hotel temp;
        vector<hotel> ho;
        while(h--)
        {
            scanf("%d", &temp.cost);
            int maxCap = -1;
            for(int i=0; i<w; i++)
            {
                scanf("%d", &temp.maxCapacity);
                if(temp.maxCapacity>maxCap)
                    maxCap = temp.maxCapacity;
            }
            temp.maxCapacity = maxCap;
            ho.pb(temp);
        }
        sort(ho.begin(),ho.end(),cmp);
        for(int i=0; i<ho.size(); i++)
        {
            if(ho[i].cost*n<=b)
            {
                if(ho[i].maxCapacity>=n)
                {
                    printf("%d\n",(ho[i].cost*n));
                    break;
                }
            }
            else
            {
                printf("stay home\n");
                break;
            }
        }
    }
    //system("notepad.exe out.txt");
    return 0;
}
