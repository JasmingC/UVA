/*
Date:		2021/12/7
Number: 	#10041
Purpose:	數字排序後，找出中位數，再計算與數字差之合 
*/


/*
1. include <algorithm> 可以直接用sort排序: sort(開始,結束) 
2. abs():取絕對值 
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n; 			//#test case;
	cin >> n;
	
	int ad[500] = {0};
	
	while(n!=0){
		
		int r;			//#relative
		cin >> r;
		
		for(int i = 0 ; i < r ; i++){
			cin >> ad[i];
		}
			
		n--;
	
	
		sort(ad,ad+r);
		int mid = ad[(int)r/2];
		int sum = 0;
		for(int i = 0 ; i < r ; i++){
			sum += abs(ad[i]-mid);
		}
		
		cout << sum << endl;
	}
	
	
	return 0;
} 
