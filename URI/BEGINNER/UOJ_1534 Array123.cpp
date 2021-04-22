#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    while((scanf("%d", &t))!=EOF)
    {
        int pos1 = 1;
        int pos2 = t;
        for(int row = 1; row<=t; row++)
        {
            for(int col = 1; col<=t; col++)
            {
                if (pos1 == pos2 && pos2 == col)
                {
                    cout<<2;
                }
                else if (pos2 == col)
                {
                    cout<<2;
                    //pos2--;
                }
                else if (pos1 == col)
                {
                    cout<<1;
                    //pos1++;
                }
                else
                    cout<<3;
            }
            pos1++;
            pos2--;
            cout<<endl;
        }
    }

    return 0;
}
