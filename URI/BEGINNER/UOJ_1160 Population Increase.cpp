#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int populationA, populationB;
        double growthRateA, growthRateB;

        cin>>populationA>>populationB>>growthRateA>>growthRateB;
        int i, flage = 1;
        for(i= 1; i <=100; i++)
        {
            populationA = populationA + floor((growthRateA/100.0)*populationA);
            populationB = populationB + floor((growthRateB/100.0)*populationB);

            if(populationA > populationB)
            {
                flage = 0;
                break;
            }
        }
        if(flage)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
            cout<<i<<" anos."<<endl;
    }
    return 0;
}

