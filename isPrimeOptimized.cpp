#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
	if(n <= 3) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i < sqrt(n); i+=2){
		if(n % i == 0) return false;
	}
	return true;
	
}

int main(){
	int n;
	cin >> n;
	bool result = checkPrime(n);
	if(result == true){
		cout << "Prime";
	}
	else {
		cout << "Not Prime";
	}
}
