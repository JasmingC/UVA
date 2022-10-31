/*
Date:		2021/12/7
Number: 	#10929
Purpose:	耞琌11计计Τ程Τ1000计 
*/

/*
1.计计ぃノint矪瞶ノstring 
2.ノabs()璶include<algorithm> 
3.计ascii code: 0 = '48' 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int func(string num){
	int even = 0, odd = 0;
	int diff = 0;
		
	for(int i = 0 ; i < num.length() ; i++){
			if(i%2==0){
			//	cout << "i = " << i << endl;
			//	cout << "num[i] = " << num[i] << endl;
				even += num[i]-48; 
			//	cout << "even = " << even << endl; 
				
			}
			else odd += num[i]-48;
	}
		//cout << "even = " << even << endl;
		//cout << "odd = " << odd << endl;
		diff = abs(even-odd);
		if( diff % 11 == 0) return 1;
		else return 0; 
}

int main(){
	
	string num;
	while(getline(cin,num)){
		if(num == "0") break;
		
		if( func(num) )
			cout << num << " is a multiple of 11." << endl;
		else cout << num << " is not a multiple of 11." << endl; 		 
		
		
	}
	
	return 0;
} 
