/*
Date:		2021/12/18 
Number: 	#10193
Purpose:	判斷兩二進位數是否互質 
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int gcd(int a, int b){
	
	while(a!=0 && b!=0){
		if(a>=b){
			a = a%b;
		}
		else b = b%a;
	}
	if(a>=b) return a;
	else return b;
	
}

int main(){
	
	//use 1~30
	char s[31];
	char l[31];
	int numS;
	int numL;
	
	int p;
	cin >> p;
	for(int i = 1 ; i <= p ; i++){
		
		numS = 0;
		numL = 0;
		
		cout << "Pair #" << i << ": ";
		
		
		cin >> s;
		cin >> l;
		
		int j ,k;
		
		for(j = 0 ; j < strlen(s) ;j++){
				k = strlen(s) - 1 - j;	
				numS += (s[k]-48)*pow(2,j);
		}
	//	cout << numS << endl;
		
		
		for(j = 0 ; j < strlen(l) ;j++){
				
				k = strlen(l) - 1 - j;
				numL += (l[k]-48)*pow(2,j);
		}
	//	cout << numL << endl;
		if(gcd(numS,numL)!=1){
			cout << "All you need is love!" << endl;
		}
		else cout << "Love is not all you need!" << endl;
		
	}
	
	
	
	return 0;
}
