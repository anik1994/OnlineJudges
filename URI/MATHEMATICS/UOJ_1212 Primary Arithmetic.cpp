//check if your code give valid result for (19234+823) and (99234+823)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    unsigned long long n1, n2, small, big;
    int ls, lb, carry, previousCarry;
    while(true)
    {
        carry = 0;
        previousCarry = 0;
        cin>> n1 >> n2;

        //if the length of the two numbers are not same
        if(n1==0 && n2==0)
            return 0;
        else if (n1>=n2)
        {
            big = n1;
            small = n2;
        }
        else
        {
            big = n2;
            small = n1;
        }
        //printf("Big : %lld\n", big);
        //printf("Small : %lld\n", small);
        while(big !=0)
        {
            ls = small%10;
            lb = big%10;

            if(ls+lb+previousCarry>9)
            {
                previousCarry=1;
                carry++;
                //printf("ls :%d lb:%d carry:1\n",ls,lb);
            }
            else
            {
                //printf("ls :%d lb:%d carry:0\n",ls,lb);
                previousCarry = 0;
            }

            small = small/10;
            big = big/10;
        }

        if (carry==0)
            cout<< "No carry operation." << endl;
        else if (carry == 1)
            cout<< "1 carry operation." << endl;
        else
            cout<< carry << " carry operations." << endl;
    }
    return 0;
}
