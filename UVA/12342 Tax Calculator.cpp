#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    cin>>t;

    for (int i=1; i<=t; i++)
    {
        ll salary;
        cin >> salary;

        double tax = 0;

        salary -= 180000;

        if (salary <= 0)
        {
            cout<<"Case "<<i<<": 0"<<endl;
        }
        else
        {
            if(salary <= 300000)
            {
                tax += salary*0.1;
            }
            else
            {
                tax += 300000*0.1;
                salary -= 300000;
                if(salary <= 400000)
                {
                    tax += salary*0.15;
                }
                else
                {
                    tax += 400000*0.15;
                    salary -= 400000;
                    if(salary <= 300000)
                    {
                        tax += salary*0.2;
                    }
                    else
                    {
                        tax += 300000*0.2;
                        salary -= 300000;
                        if(salary > 0)
                        {
                            tax += salary*0.25;
                        }
                    }
                }
            }
            if (ceil(tax)<2000)
            {
                cout<<"Case "<<i<<": 2000"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<(ll)ceil(tax)<<endl;
            }
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
