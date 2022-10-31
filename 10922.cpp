/*
Date:		2021/12/18 
Number: 	#10922 
Purpose:	���@�ӥ����N�A�P�_�L�O���O9�����ơA�p�G�O9�������ٻݭn�P�_���� 9-degree
*/
/*
1. �`�N�j���{�������j���ĪG 
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string s;
	
	
	while(cin >> s){
		
		if(s=="0") break;
		
		int n = 0;
		int degree = 1;
		int sum;
		
		for(int i = 0 ; i < s.length() ; i++){	
			n += s[i]-48;
		}
		
		while(n>9){

			degree++;
			sum = 0;
			
			while(n>0){
				sum += n%10;
				n /= 10;
				
			}
			
			n = sum;
		}
		
		
	if(n==9)
		cout << s << " is a multiple of 9 and has 9-degree " << degree <<"." << endl;
	else cout << s << " is not a multiple of 9." << endl;
		
	}	
	return 0;
} 
