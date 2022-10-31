/*
Date:		2021/12/18 
Number: 	#10783 
Purpose:	ºârange[a,b]©_¼Æ©M 
*/

#include <iostream>
using namespace std;

int main(){
	
	int dataset;
	cin >> dataset;
	
	int n = 1;
	while(dataset--){
		
		
		int a,b;
		int sum = 0;
		
		cin >> a;
		cin >> b;
		
		for(int i = a ; i <= b ; i++){
			if(i%2)
				sum += i;
		}
		
		cout << "Case " << n << ": " << sum << endl;
		n++;
	}
	
	return 0;
} 
