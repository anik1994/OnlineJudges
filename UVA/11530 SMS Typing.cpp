#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++)
    {
        string str;
        getline(cin,str);
        int len = str.length();
        int counter = 0;
        for(int j=0 ; j<len ; j++){
            switch(str[j])
            {
                case 'a':
                    counter++;
                    break;
                case 'b':
                    counter+=2;
                    break;
                case 'c':
                    counter+=3;
                    break;
                case 'd':
                    counter++;
                    break;
                case 'e':
                    counter+=2;
                    break;
                case 'f':
                    counter+=3;
                    break;
                case 'g':
                    counter++;
                    break;
                case 'h':
                    counter+=2;
                    break;
                case 'i':
                    counter+=3;
                    break;
                case 'j':
                    counter++;
                    break;
                case 'k':
                    counter+=2;
                    break;
                case 'l':
                    counter+=3;
                    break;
                case 'm':
                    counter++;
                    break;
                case 'n':
                    counter+=2;
                    break;
                case 'o':
                    counter+=3;
                    break;
                case 'p':
                    counter++;
                    break;
                case 'q':
                    counter+=2;
                    break;
                case 'r':
                    counter+=3;
                    break;
                case 's':
                    counter+=4;
                    break;
                case 't':
                    counter++;
                    break;
                case 'u':
                    counter+=2;
                    break;
                case 'v':
                    counter+=3;
                    break;
                case 'w':
                    counter++;
                    break;
                case 'x':
                    counter+=2;
                    break;
                case 'y':
                    counter+=3;
                    break;
                case 'z':
                    counter+=4;
                    break;
                case ' ':
                    counter++;
                    break;
            }
        }
        cout << "Case #" << i <<": "<<counter <<endl;
    }
    return 0;
}
