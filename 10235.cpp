/*
Date:		2021/12/16 
Number: 	#10235 
Purpose:	耞计の琌借计 
*/

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int isPrime(string s){
	int n = 0;
	int i; //10计 
	int j; //玒计 
	
	for(i = s.length()-1 , j = 0  ; i >= 0 , j < s.length()  ; i-- , j++){
		//cout << "i=" << i << endl;
		//cout << "s[j]=" << (int)s[j]-48 << endl;
	
		n += (s[j]-48) * pow(10,i);
	//	cout << "n=" << n << endl;	
	//	cout << "pow(10,i)= " << pow(10,i) << endl;
	//	cout << endl;
	}
	cout << "isprime:" << n << endl;
	
	for(i = 2 ; i < n ; i++){
		//ぃ琌借计 
		if(n % i == 0) return 0; 
	}
	if(i==n) return 1;
}

int isPrime_reverse(string s){
	//cout << "---reverse---" << endl; 
	int n = 0;
	int i;
	for(i = s.length()-1  ; i >= 0 ; i--){
		//cout << "i=" << i << endl;
		//cout << "s[i]=" << (int)s[i]-48 << endl;
		n += (s[i]-48) * pow(10,i);
		//cout << "n=" << n << endl;	
		//cout << "pow(10,i)= " << pow(10,i) << endl;
	}
	cout << "reverse:" << n << endl;
	for(i = 2 ; i < n ; i++){
		//ぃ琌借计 
		if(n % i == 0) return 0; 
	}
	if(i==n) return 1;	
	
	
}


int main(){
	
	string s;
	
	while(cin >> s){
		
		if(isPrime(s)){
			if(isPrime_reverse(s))
				cout << s << " is emirp." << endl;
			else cout << s << " is prime." << endl;
		}
		else cout << s << " is not prime." << endl;
	}
	
	
}
