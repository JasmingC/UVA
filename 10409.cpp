/*
Date:		2021/12/20
Number: 	#10226 
Purpose:	骰子翻轉後的點數 
*/
/*
1. 骰子對面相加為7 
2. top = 1 , north = 2 , west = 3
   bottom = 6 , south = 5 , east = 4; 
*/

#include <iostream>
using namespace std;

int main(){
	
	int top;
	int bottom; 
	int north;
	int south;
	int east;
	int west;

	while(true){
	
		int n;
		cin >> n;
		if(n==0) break;
		
		top = 1;
		bottom = 6;
		north = 2;
		south = 5;
		east = 3;
		west = 4;
		
		while(n--){
			
			string rotate;
			cin >> rotate;
			
			if(rotate=="north"){
				
				north = top;
				top = south;
				
				south = 7 - north;
				bottom = 7 - top;
				
			}else if(rotate=="south"){
				
				south = top;
				top = north;
				
				north = 7 - south;
				bottom = 7 - top;
				
			}else if(rotate=="east"){
				
				east = top;
				top = west;
				
				west = 7 - east;
				bottom = 7 - top;
				
			}else if(rotate=="west"){
				
				west = top;
				top = east;
				
				east = 7 - west;
				bottom = 7 - top;
				
			}
	
			
		}
		cout << top << endl;
	}
	return 0;
} 
