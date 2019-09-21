// CPE10473, UVA11332
#include <iostream>
#include <cstring>
using namespace std;
int count,len=0;
int m;
int main() {
	// your code goes here
	char c[11];
	
	while(cin >> c){
		count=0;
		if(c[0]=='0') break;
		for(int i=0;i<strlen(c); i++){
			count+=c[i]-'0';
		}
		while(count>10){ //47  11
			m = count%10;  //7 1
			len=count/10;  //4  1
			count=m+len;
		}
		cout << "c : "<< count << endl;
	}
	return 0;
}
