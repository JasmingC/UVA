/*
Date:		2021/12/18 
Number: 	#10190 
Purpose:	連除餘數是否皆為0 
*/

#include <iostream>
using namespace std;

int main(){
	
	int n ,m;
		
	while(cin >> n >> m){
		
		bool boring = false;
		
		int temp_n = n;
		
		while(temp_n!=1){
			
			//cout << "temp_n = " << temp_n << endl; 
			if(temp_n % m != 0){
				//cout << "temp_n % m != 0" << endl;
				boring = true;
				break;
			}
			temp_n = temp_n / m;
		}
		
		if(!boring){
			while(n!=1){
	
				if(n%m == 0){
					cout << n << " ";
					n = n / m;
					if(n==1) cout << "1" << endl;
				}
			}
		}
		else cout << "Boring!" << endl;

		
	}
	
	return 0;
} 
