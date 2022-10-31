/*
Date:		2021/12/10
Number: 	#10055
Purpose:	2^32次方大小的兩數差	 
*/
/*
1. 32位元的輸入用long long 
*/

#include <iostream>
using namespace std;

int main(){
	
	long long int a , b;
	while( cin >> a >> b){
		cout << b-a << endl; 
	}
	
	return 0;
}
