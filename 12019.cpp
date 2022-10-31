/*
Date:		2021/12/20
Number: 	#12019
Purpose:	找出2011年的某月某日為星期幾 
*/
/*
1. 計算星期幾的方法為先算出當年的第1天為星期幾
	ex. 2011/1/1為星期六，則將 base設為5
	因為 1(第1天) + 5 = 6 
	往後只要算是今年的第幾天就可以知道星期幾
	
2.  (是今年的第幾天 + base) % 7 = 星期 (若餘數=0為星期天) 
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
