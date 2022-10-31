/*
Date:		2021/12/15
Number: 	#11332
Purpose:	各位數字相加，直到為0-9的數字(生命靈數算法) ，注意有遞迴式 
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
