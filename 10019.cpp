/*
Date:		2021/12/20
Number: 	#10019
Purpose:	算出一個數字的2進位和轉成16進位再轉2進位分別有幾個1 
*/
/*
16進位轉2進位可以藉由建表查詢有幾個1 
0 0000 0
1 0001 1
2 0010 1
3 0011 2
4 0100 1 
5 0101 2
6 0110 2
7 0111 3
8 1000 1
9 1001 2
A 1010 2
B 1011 3
C 1100 2
D 1101 3
E 1110 1
F 1111 4
*/
#include <iostream>
using namespace std;

int main(){
	
	int hex[16] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,1,4};
	int n;
	cin >> n;
	while(n--){
		
		int num;
		cin >> num;
		
		int temp1, temp2;
		temp1 = temp2 = num;
		int b1 = 0,b2 = 0;
		
		while(temp1!=0){
			b1 += temp1%2;
			temp1 /= 2;
		}
		
		while(temp2!=0){
			b2 += hex[temp2%10];
			temp2 /= 10;
		}
		
		cout << b1 << " " << b2 << endl;
		
	} 
	
	return 0;
}
