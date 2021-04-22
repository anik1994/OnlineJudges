#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

char giveMirror(char x)
{
    switch (x)
    {
    case 'A':
        return 'A';
    case 'E':
        return '3';
    case 'H':
        return 'H';
    case 'I':
        return 'I';
    case 'J':
        return 'L';
    case 'L':
        return 'J';
    case 'M':
        return 'M';
    case 'O':
        return 'O';
    case 'S':
        return '2';
    case 'T':
        return 'T';
    case 'U':
        return 'U';
    case 'V':
        return 'V';
    case 'W':
        return 'W';
    case 'X':
        return 'X';
    case 'Y':
        return 'Y';
    case 'Z':
        return '5';
    case '1':
        return '1';
    case '2':
        return 'S';
    case '3':
        return 'E';
    case '5':
        return 'Z';
    case '8':
        return '8';
    default:
        return ' ';
    }

}
char giveMirrorPali(char x)
{
    switch (x)
    {
    case 'A':
        return 'A';
    case 'H':
        return 'H';
    case 'I':
        return 'I';
    case 'M':
        return 'M';
    case 'O':
        return 'O';
    case 'T':
        return 'T';
    case 'U':
        return 'U';
    case 'V':
        return 'V';
    case 'W':
        return 'W';
    case 'X':
        return 'X';
    case 'Y':
        return 'Y';
    case '1':
        return '1';
    case '8':
        return '8';
    default:
        return ' ';
    }

}
bool isMirrorPali(string str)
{
    int len = str.length();
    for(int i=0,j=len-1; i<=len/2; i++,j--)
    {
        if(giveMirrorPali(str[i])!=str[j])
            return false;
    }
    return true;
}

bool isMirror(string str)
{
    int len = str.length();
    for(int i=0,j=len-1; i<=len/2; i++,j--)
    {
        if(giveMirror(str[i])!=str[j])
            return false;
    }
    return true;
}

bool isPali(string str)
{
    int len = str.length();
    for(int i=0,j=len-1; i<len/2; i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }
    return true;
}
int main()
{
    string str;

    while(getline(cin, str))
    {
        if(isMirrorPali(str))
            cout << str << " -- is a mirrored palindrome." << endl;
        else if(isMirror(str))
            cout << str << " -- is a mirrored string." << endl;
        else if(isPali(str))
            cout << str << " -- is a regular palindrome." << endl;
        else
            cout << str << " -- is not a palindrome." << endl;
        cout << endl;
    }
    return 0;
}
