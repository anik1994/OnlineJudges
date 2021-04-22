//may be the upper bound of the p is less than 10^10
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main() {
	double n, p;

	while(cin >> n >> p){
		cout << fixed << setprecision(0) << pow(p,1.0/n) << endl;
	}

	return 0;
}
