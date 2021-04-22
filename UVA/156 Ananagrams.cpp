#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

struct words
{
    string word;
    string sortedStr;
    bool isAna = true;
};
bool cmpStr(words a, words b)
{
    return a.word < b.word;
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    string arr;
    vector<words> vct;
    while(cin >>arr && arr!="#")
    {
        words temp;
        temp.word = arr;
        temp.sortedStr = arr;
        transform(temp.sortedStr.begin(), temp.sortedStr.end(), temp.sortedStr.begin(), ::tolower);
        sort(temp.sortedStr.begin(),temp.sortedStr.end());
        vct.pb(temp);
    }
    for(int i=0; i<vct.size(); i++)
        for(int j=i+1; j<vct.size();j++)
            if(vct[i].sortedStr == vct[j].sortedStr)
            {
                vct[i].isAna = false;
                vct[j].isAna = false;
            }
    sort(vct.begin(),vct.end(),cmpStr);
    for(int i=0; i<vct.size();i++)
    {
        if(vct[i].isAna)
            cout << vct[i].word << endl;
    }
    //system("notepad.exe out.txt");
    return 0;
}
