/*
Date:		2021/12/20
Number: 	#12019
Purpose:	��X2011�~���Y��Y�鬰�P���X 
*/
/*
1. �p��P���X����k������X��~����1�Ѭ��P���X
	ex. 2011/1/1���P�����A�h�N base�]��5
	�]�� 1(��1��) + 5 = 6 
	����u�n��O���~���ĴX�ѴN�i�H���D�P���X
	
2.  (�O���~���ĴX�� + base) % 7 = �P�� (�Y�l��=0���P����) 
*/ 

#include <iostream>
using namespace std;

int main(){
	
	string weekday[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int monthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int base = 5;
	
	int n;
	cin >> n;
	while(n--){
		
		int month, day;
		int totalDay = 0;
		
		cin >> month >> day;
		
		for(int i = 1 ; i < month ; i++){
			totalDay += monthDays[i];
		}
		totalDay += day;
		
		cout << weekday[ (totalDay + base)%7 ] << endl;
		
	}
	
	
	return 0;
} 
