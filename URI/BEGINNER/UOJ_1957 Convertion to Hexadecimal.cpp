#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    stack<int> stk;

    while(x!=0)
    {
        stk.push(x%16);
        x = x/16;
    }
    while(!stk.empty())
    {
        int number = stk.top();
        stk.pop();
        if(number >= 0 && number <=9)
            cout<<number;
        else if(number == 10)
            cout<<"A";
        else if(number == 11)
            cout<<"B";
        else if(number == 12)
            cout<<"C";
        else if(number == 13)
            cout<<"D";
        else if(number == 14)
            cout<<"E";
        else
            cout<<"F";
    }
    cout<<endl;
    return 0;
}