#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    while(scanf("%d",&t)!=EOF)
    {
        int pos2 = 1;
        int pos3 = t;

        for(int row = 1; row<=t; row++)
        {
            for(int col = 1; col<=t; col++)
            {
                /*int up = (row - 1);
                int down = (t - row);
                int left = (col - 1);
                int right = (t - col);*/

                int borderLength = floor(t/3.0);

                int arr[] = {(row - 1), (t - row), (col - 1), (t - col)};
                sort(arr, arr+4);

                if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
                {
                    cout<<4;
                }
                else if(arr[0] >= borderLength)
                {
                    cout<<1;
                }
                else if(col == pos2)
                    cout<<2;
                else if (col == pos3)
                    cout<<3;
                else
                    cout<<0;
            }
            pos2++;
            pos3--;
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

