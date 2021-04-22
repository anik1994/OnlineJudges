#include <bits/stdc++.h>
using namespace std;
int digitSize(int number)
{
    int i = 0;
    while(number)
    {
        number /=10;
        i++;
    }
    return i;
}

int main()
{
    int t;
    cin>>t;

    while(t)
    {
        int previous;
        //int arr [t+2][t+2];

        int highest = digitSize(pow(2,((t-1)*2))); // last digit of the 2d array

        for(int row = 0; row<t; row++)
        {
            for(int col = 0; col<t; col++)
            {
                if(col == 0)
                {
                    previous = pow(2,row);
                    cout <<setw(highest) << previous;
                    //printf("%d",previous);
                }
                else
                {
                    previous *= 2;
                    cout <<setw(highest) << previous;
                    //printf("%d",previous);
                }
                if(col != (t-1))
                    cout<<" ";

            }
            cout<<endl;

        }
        cout<<endl;

        cin >> t;
    }

    return 0;
}

