/*
Date:		2021/12/18 
Number: 	#10931 
Purpose:	十進位轉二進位，並計算bit為1的數量 
*/
#include <iostream>
//#include <cstring>

using namespace std;

int main(){
	
	int n;
	
	
	while(cin >> n){
		if(n==0) break;
		
		string rev;
		int d = 0;
		
		while(n>0){
		//	cout << "-----while loop-----" << endl;
		//	cout << "n = " << n << endl;
			
			if(n%2){
			//	cout << "n%2=1" << endl;
				rev[d] = '1'; 
			//	cout << "rev[" << d << "] = " << rev[d] << endl;
			}		
			else{
			//	cout << "n%2=0" << endl;
				rev[d] = '0';
			//	cout << "rev[" << d << "] = " << rev[d] << endl;	
			}
			
			n = n / 2;
			d++;
			//cout << "d = " << d << endl;
		}
	//	cout << "-----------" << endl;
		
	/*	cout << "rev = ";
		for(int i = 0 ; i < d; i++){
			cout << rev[i];
		} 
		cout << endl;
	*/	
		int count = 0;
		for(int i = 0 ; i < d; i++){
			if(rev[i]=='1') count++;
		} 
		
		cout << "The parity of ";
		for(int i = d-1 ; i>=0 ; i--){
			cout << rev[i];
		}
		cout << " is " << count << " (mod 2)." << endl;
	
		
	}
	
	
	return 0;
}
