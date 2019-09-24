#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void emirp(int n,int m){
	
	for(int i = 2; i < n; i++){
		if(n%i==0){
			cout << m << " is  prime." << endl;
			break;
		}
		else if(i==n-1&&n%i!=0){
			
			cout << m << " is emirp." <<endl;
			break;
		}
	}

}
int main() {
	int n,m;
	string temp;
	while(cin >> n){
		m=n;
		for(int i = 2; i < n; i++){
			if(n%i==0){
				cout << n << " is not prime." << endl;
				break;
			}
			else if(i==n-1&&n%i!=0){
				
				temp=to_string(n);
				reverse(temp.begin(),temp.end());
				n=stoi(temp);
				emirp(n,m);
				break;
			}
		}
	}
	// your code goes here
	return 0;
}
