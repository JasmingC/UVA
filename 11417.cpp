/*
Date:		2021/12/18 
Number: 	#11417 
Purpose:	gcd的算法 
*/

/*
1. gcd 的演算法 : 兩數都不等於0時一直算:
  大的 =  大的 % 小的
  
  跳出迴圈時 return 比較大的 
*/ 
#include <iostream>
using namespace std;

int gcd(int a, int b){
	
	while(a!=0 && b!= 0){
		
		if(a >= b) a =  a % b;
		else if( b > a) b = b % a;
		
	}
	
	if(a >= b){
		return a;
	}
	else return b;
	
}


int main(){
	
	int n;
	int g;
	int i, j;
	while(true){
		cin >> n;
		if(n==0) break;
		g = 0;
		
		for(i = 1 ; i < n ; i++){
			for(j = i+1 ; j <= n ; j++){
				g += gcd(i,j);
			}
		}
		
		cout << g << endl;
	}
	
	return 0;
}
