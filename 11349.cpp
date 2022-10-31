/*
Date:		2021/12/18 
Number: 	#10193
Purpose:	判斷矩陣是否對稱 
*/
/*
有對稱:
		5 1 3
		2 0 2
		3 1 5  
*/

#include <iostream>
using namespace std;

int main(){
	
	char c1,c2;
	int n;
	long long matrix[101][101];
	bool sym = true;
	
	int test;
	cin >> test;
	for(int i = 1 ; i <= test ; i++){
		cout << "Test #" << i << ": ";
		cout << endl;
		
		cin >> c1 >> c2 >> n;
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ;k++){
				cin >> matrix[j][k];
			}
		}
		
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ;k++){
				if(matrix[j][k]!=matrix[n-1-j][n-1-k]){
					sym = false;
					break;
				}
			}
		}
		
		if(sym) cout << "Symmetric." << endl;
		else cout << "Non-symmetric." << endl; 
	} 
	
	return 0;
} 
