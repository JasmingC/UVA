/*
Date:		2021/12/10
Number: 	#10035
Purpose:	計算兩數字相加的進位次數 
*/

#include <iostream>
using namespace std;

int main(){
	
	int op1 , op2;
	int carry;
	
	while(1){
		
		carry = 0;
		
		cin >> op1;
		cin >> op2;
		if(op1 == 0 && op2 == 0) break;
		
		while(1){
			
			int temp_c = 0;
			
			if( op1 % 10 + op2 % 10 + temp_c >= 10 ){
				++carry;
			}
			op1 /=10;
			op2 /=10;
			
			if( op1 == 0 && op2 == 0) break;
		}
	
	if(carry == 0)
		cout << "No carry operation." << endl;
	else if(carry == 1)
		cout << "1 carry operation." << endl;
	else cout << carry << " carry operations." << endl;
	
	}
	
	return 0;
}

