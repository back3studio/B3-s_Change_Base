#include <iostream>
#include <algorithm>
using namespace std;

int p;
string n;

int main(){
	cin >> p >> n;
	long long tmp=1,ans=0;
	reverse(n.begin(),n.end());
	for(int i=0;i<n.size();i++){
		int w;
		if(n[i]>='A'&&n[i]<='Z') w=n[i]-'A'+10;
		else w=n[i]-'0';
		ans += tmp*w;
		tmp*=p;
	}
	cout << ans << endl;
	return 0;
}

