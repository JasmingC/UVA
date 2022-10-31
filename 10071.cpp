/*
Date:		2021/12/15
Number: 	#10071 
Purpose:	easy 
*/

#include <iostream>
using namespace std;

int main(){
	
	int v , t;

	while(cin >> v >> t){
		if(v <= 100 && v >= -100 && t <= 200 && t >= 0){
			cout << v*2*t << endl; 
		}
		
	}	
	
	
	return 0;
} 
