/*
Date:		2021/12/15
Number: 	#299 
Purpose:	¤õ¨®¥æ´«³fª«¡Abubble sort
*/

/* bubble sort: ­Ç­Ç¤¬´« 

	4 3 2 1
	3 4 2 1
	3 4 1 2  
	3 1 4 2 
	1 3 4 2
	1 3 2 4 
	1 2 3 4 
*/
#include <iostream>
using namespace std;

int main(){

	int n; //testcase
	cin >> n;
	
	
	while(n--){
		
		int a[50] = {0};
		int swap = 0;
		int l;
		
		cin >> l;
		for(int i = 0 ; i < l ; i++){
			cin >> a[i]; 			
		}
		
		for(int i = 0 ; i < l ; i++){
			for(int j = 1 ; j < l - i ; j++){
				if(a[j] < a[j-1]){
					int temp = a[j];
					a[j] = a[j-1];
					a[j-1] = temp;
					swap++;
				}
			}
		}
			
		
		cout << "Optimal train swapping takes " << swap << " swaps." << endl; 
	}
	  
	
	return 0;
} 
