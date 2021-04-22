#include <bits/stdc++.h>
using namespace std;
string romanLetter(int x)
{
    switch(x)
    {
    case 1000:
        return "M";
        break;
    case 900:
        return "CM";
        break;
    case 500:
        return "D";
        break;
    case 400:
        return "CD";
        break;
    case 100:
        return "C";
        break;
    case 90:
        return "XC";
        break;
    case 50:
        return "L";
        break;
    case 40:
        return "XL";
        break;
    case 10:
        return "X";
        break;
    case 9:
        return "IX";
        break;
    case 5:
        return "V";
        break;
    case 4:
        return "IV";
        break;
    case 1:
        return "I";
        break;
    }
}

int main()
{
    int numbers[] = { 1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1 } ;

    int pages;
    cin >> pages;

    for(int i = 0; i<13; i++)
    {
        while( pages >= numbers[i] )
        {
            cout<<romanLetter(numbers[i]);
            pages -= numbers[i];
        }
    }
    cout<<endl;

    return 0;
}


