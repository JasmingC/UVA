/*
Date:		2021/12/10
Number: 	#10222
Purpose:	字串轉換，替換為鍵盤上左邊兩個的字元 
*/

/*
1. 大寫轉小寫 tolower()
*/


#include <iostream>
#include <string.h>

using namespace std;
 
int main(){
	
	char change[]="`1234567890-=qwertyuiop[]asdfghjkl;'\zxcvbnm,./'"; 
	string input;
	
	getline(cin, input);
	
	for(int i = 0 ; i < input.length() ; i++){
		if(input[i] == ' ') cout << " ";
		else{
			for(int j = 0 ; j < strlen(change) ; j++){
				if( change[j] == tolower(input[i]) ){
					cout << change[j-2];
					break;
				}
			}
		}
	}
	
	return 0;
}
