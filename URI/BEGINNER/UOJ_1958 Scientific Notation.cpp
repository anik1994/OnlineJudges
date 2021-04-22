#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double number;
    cin >> number;

    if(!signbit(number)) cout<<"+";  // for possitive zero and neg zeros
    cout << setprecision(4)<< scientific << uppercase << number<<endl;

    return 0;
}
