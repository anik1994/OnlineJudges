#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t)
    {
        int direction [t+1], previousCol[t+1];

        //initialize 1st col
        for(int i = 1; i<=t; i++)
        {
            printf("%3d",i);
            if(i != t)
                cout<<" ";
            previousCol[i] = i;
            if(i == 1)
                direction[i] = 1;
            else
                direction[i] = -1;
        }
        cout<<endl;

        //for next cols
        for(int row = 2; row<=t; row++)
        {
            for(int col = 1; col<=t; col++)
            {
                previousCol[col] = previousCol[col]+direction[col];
                printf("%3d",previousCol[col]);
                if(col != t)
                    cout<<" ";
                if(previousCol[col] == 1)
                    direction[col] = 1;
                else if (previousCol[col] == t)
                    direction[col] = -1;
            }
            cout<<endl;
        }
        cout<<endl;
        cin >> t;
    }

    return 0;
}

