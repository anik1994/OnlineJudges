#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t)
    {
        for(int row = 1; row<=t; row++)
        {
            for(int col = 1; col<=t; col++)
            {
                /*int up = (row - 1);
                int down = (t - row);
                int left = (col - 1);
                int right = (t - col);*/
                int arr[] = {(row - 1), (t - row), (col - 1), (t - col)};
                sort(arr, arr+4);
                printf("%3d",arr[0]+1);
                if(col != t)
                    cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cin >> t;
    }

    return 0;
}
