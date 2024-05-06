#include <iostream>
#include <algorithm>
using namespace std;

const double ZER=1e-6;
double n;
int q;
int i_part;
double d_part;
string ans;

int main(){
	cin >> n >> q;
	i_part = n;
	d_part = n-i_part;
	// 整数部分 
	do{
		int w=i_part%q;
		if(w>9) ans += w-10+'A';
		else ans += w+'0';
		i_part/=q;
	}while(i_part);
	reverse(ans.begin(),ans.end());
	// 小数部分
	if(d_part>ZER) ans+='.';
	while(d_part>ZER){
		int w=d_part*q;
		if(w>9) ans += w-10+'A';
		else ans += w+'0';
		d_part*=q;
		d_part-=w;
	}
	cout << ans << endl;
}
/*
10.125
1010.001

*/

