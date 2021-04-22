#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int digitSum(int x)
{
    int tem, sum = 0;
    while(x!=0)
    {
        tem = x%10;
        sum += (tem*tem);
        x=x/10;
    }
    return sum;
}

bool isHappy(int x)
{
    int temp=x;
    //cout<<temp<<endl;
    while(true)
    {
        //cout<<temp<<endl;
        temp = digitSum(temp);
        //there is a cycle 42->20->4
        if(temp==1 || temp ==4)
            break;
    }
    if(temp == 1)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int x;
        cin>>x;
        if(isHappy(x))
            cout << "Case #"<<i<<": "<<x<<" is a Happy number." <<endl;
        else
            cout << "Case #"<<i<<": "<<x<<" is an Unhappy number." <<endl;
    }

    return 0;
}
