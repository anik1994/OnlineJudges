#include <bits/stdc++.h>
using namespace std;
string romanLetter(int x)
{
    switch(x)
    {
    case 0:
        return "M";
        break;
    case 1:
        return "CM";
        break;
    case 2:
        return "D";
        break;
    case 3:
        return "CD";
        break;
    case 4:
        return "C";
        break;
    case 5:
        return "XC";
        break;
    case 6:
        return "L";
        break;
    case 7:
        return "XL";
        break;
    case 8:
        return "X";
        break;
    case 9:
        return "IX";
        break;
    case 10:
        return "V";
        break;
    case 11:
        return "IV";
        break;
    case 12:
        return "I";
        break;
    }
}

int main()
{
    int numbers[] = { 1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1 } ;
    int romanNum[13] = { 0 };

    int pages;
    cin >> pages;

    for(int i = 0; i<13; i++)
    {
        while( pages >= numbers[i] )
        {
            romanNum[i]++;
            pages -= numbers[i];
        }
    }

    for(int i = 0; i<13; i++)
    {
        if(romanNum[i] > 0)
        {
            while(romanNum[i]--)
                cout<<romanLetter(i);
        }
    }
    cout<<endl;

    return 0;
}

