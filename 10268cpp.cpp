/*
Date:		2021/12/18 
Number: 	#10268 
Purpose:	微分計算 
*/
/*
1. 可以用 if ( getchar() == '\n' ) 檢查是否讀到行末 
*/ 

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int x;
	int n;
	int coe[500000];
	int i, j;
	
	while(cin >> x){
		
		for(n = 0 ; ; n++){
			cin >> coe[n];
			if(getchar()=='\n') break;	
		}
		
		int ans = 0;
		
		for(i = 0, j = n ; i < n ; i++, j--){
			ans += coe[i] * j * pow(x,j-1);
		}
	
		cout << ans << endl;
		
	}
	
	return 0;
} 
