#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int fun(int n)
{
   int counter = 0;
   while(n!=1)
   {
       counter++;
       if(n%2==0)
        n = n/2;
       else
        n = 3*n+1;
   }
   counter++;
   return counter;
}

int main()
{
    int x, y, max, t1, t2;

    while(scanf("%d %d", &t1, &t2)!=EOF)
    {
        if(t1<t2)
        {
            x = t1;
            y = t2;
        }
        else
        {
            x = t2;
            y = t1;
        }
        max = 0;
        for(int i=x;i<=y;i++)
        {
            int temp = fun(i);
            if(max<temp)
                max = temp;
        }

        cout << t1 <<" "<<t2<<" "<<max<<endl;
    }

    return 0;
}
