#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int countEx(int ar[], int n)
{
    int counter = 0;
    bool isEx = false;
    for(int i= 1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                counter++;
                isEx = true;
            }
        }
        if(isEx)
        {
            isEx = false;
        }
        else
            break;
    }
    return counter;
}

int main()
{
    int t, arr[1010];

    while(cin >> t)
    {
        for(int i=0;i<t;i++)
        {
            cin>> arr[i];
        }
        cout<<"Minimum exchange operations : "<<countEx(arr, t)<<endl;
    }


    return 0;
}
