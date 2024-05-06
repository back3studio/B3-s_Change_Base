#include <iostream>
#include <algorithm>
using namespace std;

int n,q;
string ans;

int main(){
	cin >> n >> q;
	do{
		int w=n%q;
		if(w>9) ans += w-10+'A';
		else ans += w+'0';
		n/=q;
	}while(n);
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}

