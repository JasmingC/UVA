/*
Date:		2021/12/20
Number: 	#10050
Purpose:	罷工天數 
*/
/*
1. 
	 1 2 3 4 5 6 7 
	日一二三四五六 

	(days%7)...0 -> 星期六
	        ...1 -> 星期日
			...2 -> 星期一
			...3 -> 星期二
			 
2.  星期五跟星期六罷工不計算
	若有兩個政黨同時罷工只計一天 
*/
#include <iostream>
using namespace std; 

int main(){
	
	int test;
	cin >> test;
	
	while(test--){
		
		int i,j;
		
		int days;
		int party;
		int h[101];
		int count = 0;
		int weekday;
		int hartal;
		
		cin >> days >> party;
		for(i = 0 ; i < party ; i++){
			cin >> h[i];
		}
		
		for(i = 1 ; i <= days ; i++){
			weekday = i % 7;
			
			if(weekday>=1 && weekday<=5){
				
				hartal = 0;
				for(j = 0 ; j < party; j++){
					hartal = hartal || (i % h[j]==0);
				}
				count += hartal;
			}
			
		}
		
		
		cout << count << endl;
	}
	
	return 0;
}
