#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    double arr [12][12];

    cin >> ch;
    for(int i = 0; i<12; i++)
        for(int j = 0; j<12; j++)
            cin>>arr[i][j];

    double sum = 0;
    int factor = 1;

    for(int i = 0; i<5; i++)
    {
        for(int j = (0+factor); j<(12-factor); j++)
            sum += arr[i][j];
        factor++;
    }


    if(ch == 'S')
    {
        printf("%.1f\n",sum);
    }
    else
    {
        printf("%.1f\n",sum/30.0);
    }
    return 0;
}

