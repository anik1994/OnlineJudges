#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<string> explode(const string& s, const char& c)
{
	string buff{""};
	vector<string> v;

	for(auto n:s)
	{
		if(n != c) buff+=n; else
		if(n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if(buff != "") v.push_back(buff);

	return v;
}

int main()
{
    string str;
    while(cin >> str)
    {
        vector<string> v{explode(str, ':')};
        stringstream integer1(v[0]);
        stringstream integer2(v[1]);
        int wakeUpHr , wakeUpMin;

        integer1 >> wakeUpHr;
        integer2 >> wakeUpMin;

        int reachedMin = wakeUpMin;
        int reachedHr = wakeUpHr + 1;

        if (reachedHr >= 8)
        {
            if(reachedHr == 9)
                cout << "Atraso maximo: " << reachedMin + 60<< endl;
            else if (reachedHr == 10)
                cout << "Atraso maximo: 120" << endl;
            else
                cout << "Atraso maximo: " << reachedMin << endl;
        }
        else
            cout << "Atraso maximo: 0" << endl;
    }
    return 0;
}

