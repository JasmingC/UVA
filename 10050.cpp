/*
Date:		2021/12/20
Number: 	#10050
Purpose:	�}�u�Ѽ� 
*/
/*
1. 
	 1 2 3 4 5 6 7 
	��@�G�T�|���� 

	(days%7)...0 -> �P����
	        ...1 -> �P����
			...2 -> �P���@
			...3 -> �P���G
			 
2.  �P������P�����}�u���p��
	�Y����ӬF�ҦP�ɽ}�u�u�p�@�� 
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
