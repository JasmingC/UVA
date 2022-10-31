/*
Date:		2021/12/20
Number: 	#948
Purpose:	把數字改以費式數列的基底表示 
*/
/*
1. 1 2 3 5 8 13 21 ...
	由大而小轉換
2. 要有一個狀態符紀錄，以判斷0到底需不需要輸出 
*/ 
#include <iostream>
using namespace std;
int main(){
	
	int f[40];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2 ; i < 40 ; i++){
		f[i] = f[i-1] + f[i-2];
	}
	
	int n;
	cin >> n;
	while(n--){
		int state = 0;
		int num;
		cin >> num;
		cout << num << " = ";
		for(int i = 39 ; i >= 2 ; i-- ){
			if(num>=f[i]){
				cout << "1";
				num -= f[i];
				state = 1;
			}
			else{
				if(state==1) cout << "0";
			}
		}
		cout << " (fib)" << endl;
		
		
	}
	return 0;
} 
