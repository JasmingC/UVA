/*
Date:		2021/12/15
Number: 	#11332
Purpose:	�U��Ʀr�ۥ[�A���쬰0-9���Ʀr(�ͩR�F�ƺ�k) �A�`�N�����j�� 
*/

#include <iostream>
#include <string>

using namespace std;

int func(int n){
	
	int sum = 0;
	
	while(n > 0){
		sum += n % 10;	
		n /= 10;	
	} 

	if(sum < 10)
		return sum;
	else 
		return func(sum);
}


int main(){
	
	
	int n;
	
	while(true){
		cin >> n;
		if(n == 0) break;
		
		cout << func(n) << endl;
		
	}
	
	return 0;
}
