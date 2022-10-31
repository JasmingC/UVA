/*
Date:		2021/12/18 
Number: 	#11063
Purpose:	輸入數列由小到大，且任意兩數和都不同 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int n;
	int num[101];
	int sum[52];
	int k = 1;
	
	while(cin >> n){
		
		bool is_b2 = true;
		int i,j;
		
		for(i = 0 ; i < n ; i++){
			cin >> num[i];
		}
		
		if(num[0] < 1) is_b2 = false;
		
		for(i = 1 ; i < n && is_b2 == true ; i++){
			if(num[i] <= num[i-1]){
				is_b2 = false;
				break;
			}
		}
		
		int x = 0;
		if(is_b2){
			
			
			for(i = 0 ; i < n ; i++){
				for(j = i ; j < n ; j++){
					sum[x] = num[i] + num[j];
					x++;
				}
			}
			
			sort(sum,sum+x);
		}
		
		for(i = 1 ; i < x && is_b2 == true ; i++){
			if(sum[i-1]==sum[i]){
				is_b2 = false;
				break;
			}
		}
		
		if(is_b2) cout << "Case #" << k << ": It is a B2-Sequence." << endl;
		else cout << "Case #" << k << ": It is not a B2-Sequence." << endl; 
		
		k++;
		cout << endl;
	}
	
	return 0;
}
