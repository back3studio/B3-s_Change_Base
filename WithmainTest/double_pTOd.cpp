#include <iostream>
#include <algorithm>
using namespace std;

int p;
string n;
string i_part,d_part;
double ans;

int main(){
	cin >> p >> n;
	bool flag=0;
	for(int i=0;i<n.size();i++){
		if(n[i]=='.'){
			flag=1;
			continue;
		}
		if(!flag){
			i_part += n[i]; 
		}
		else{
			d_part += n[i];
		}
	}
	// 整数部分 
	long long tmp=1;
	reverse(i_part.begin(),i_part.end());
	for(int i=0;i<i_part.size();i++){
		int w;
		if(i_part[i]>='A'&&i_part[i]<='Z') w=i_part[i]-'A'+10;
		else w=i_part[i]-'0';
		ans += tmp*w;
		tmp*=p;
	}
	// 小数部分
	double tp=0.5;
	for(int i=0;i<d_part.size();i++){
		int w;
		if(d_part[i]>='A'&&d_part[i]<='Z') w=d_part[i]-'A'+10;
		else w=d_part[i]-'0';
		ans += tp*w;
		tp/=p;
	}
	
	cout << ans << endl;
	return 0;
}

