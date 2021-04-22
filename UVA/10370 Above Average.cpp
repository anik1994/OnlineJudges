#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int c;
    vector<int> vct;

    cin >> c;
    while(c--)
    {
        int n, temp, sum = 0, counter = 0;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            vct.pb(temp);
            sum += temp;
        }
        double avg = (double)sum/(double)n;
        for(int i=0;i<n;i++)
        {
            if(vct[i]>avg)
            {
                counter++;
            }
        }
        double result = (((double)counter*100.0)/(double)n);
        //cout<<"Avg: " << avg <<"\tCounter: "<< counter <<"\tResult: "<< result<< endl;

        cout << fixed << setprecision(3) << result <<"%"<<endl;
        vct.clear();
    }
    return 0;
}
