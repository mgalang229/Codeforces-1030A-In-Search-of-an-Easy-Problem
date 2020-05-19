#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], n;
	cin >> n;
	bool ok = false;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 1){
			ok = true;
		}
	}
	if(ok == false){
		cout << "EASY";
	} else{
		cout << "HARD";
	}
	cout << "\n";
	return 0;
}
