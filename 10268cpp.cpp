/*
Date:		2021/12/18 
Number: 	#10268 
Purpose:	�L���p�� 
*/
/*
1. �i�H�� if ( getchar() == '\n' ) �ˬd�O�_Ū��楽 
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
