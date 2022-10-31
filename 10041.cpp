/*
Date:		2021/12/7
Number: 	#10041
Purpose:	�Ʀr�Ƨǫ�A��X����ơA�A�p��P�Ʀr�t���X 
*/


/*
1. include <algorithm> �i�H������sort�Ƨ�: sort(�}�l,����) 
2. abs():������� 
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
