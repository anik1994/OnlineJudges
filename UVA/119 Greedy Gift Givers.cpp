#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int n;

    if(cin>>n)
    {
        while(true)
        {
            string name, donor;
            vector<string> nameList;
            int money[20]= {0}, donationAmount, receiverNo;

            for(int i=0; i<n; i++)
            {
                cin>>name;
                nameList.pb(name);
                //cout<<name<<endl;
            }
            for(int i=0; i<n; i++)
            {
                cin >> donor;
                cin >> donationAmount;
                cin >> receiverNo;

                if(receiverNo == 0)
                    continue;
                donationAmount = donationAmount - donationAmount%receiverNo;
                //cout << donation <<endl;
                for(int j=0; j<nameList.size(); j++)
                {
                    if(donor == nameList[j])
                    {
                        money[j] -= donationAmount;
                    }
                }
                for(int k=0; k<receiverNo; k++)
                {
                    cin >> name;
                    for(int j=0; j<nameList.size(); j++)
                    {
                        if(name == nameList[j])
                        {
                            money[j] += (donationAmount/receiverNo);
                        }
                    }
                }
            }

            for(int j=0; j<nameList.size(); j++)
            {
                cout<< nameList[j] << " " << money[j] << endl;
            }
            if(cin>>n)
                cout<<endl;
            else
                break;
            nameList.clear();
        }
    }
    return 0;
}
