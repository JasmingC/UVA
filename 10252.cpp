/*
Date:		2021/12/15
Number: 	#10420
Purpose:	��J��r��A��X�ۦP���r��
*/
/*
1. strlen() �n include <string.h>
2. �`�N��r�����Ϊk �ŧi[127] 
*/ 
#include <iostream>
#include <string.h> 
using namespace std;

int main(){
	
	char a[1000];
	char b[1000];
	

	while(cin >> a){
		
		cin >> b; 
		
		int pos;
		int check[127] = {0}; 
		
		
		for(int i = 0 ; i < strlen(a) ; i++){
			pos = (int)a[i];
			//cout << "a-pos = " << pos << " = " << (char)pos << endl;
			check[pos] = 1;
			
		}
		
		//cout << endl;
		
		for(int i = 0 ; i < strlen(b) ; i++){
			pos = (int)b[i];
		//	cout << "b-pos = " << pos << " = " << (char)pos << endl;
			if(check[pos]==1) check[pos] = 2;
		}
		
		for(char c = 'a' ; c <= 'z' ; c++){
			if(check[c]==2)
			cout << c;
		}
		cout << endl;
		
	}
	
	return 0;
}
