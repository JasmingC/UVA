/*
Date:		2021/12/20 
Number: 	#272
Purpose:	把第一個 " 換成 ``，第二個 " 換成 '' 
*/
/*
1.要一個字元一個字元處理的用 getchar() 和 putchar()  include<string.h>
2.要用一個變數紀錄一組括號，碰到第一個括號由 0->1 ，第二個括號再變回0 
  "ABCDE",ABCDEF,AB"DEEFG"
  011111100000000000111111 
*/ 

#include <iostream>
#include <string>
using namespace std;
int main(){
	
	char x;
	int inside = 0;
	
	while((x=getchar()) != EOF){
		
		if(x=='"'){
			
			if(inside==0){
				putchar('`');
				putchar('`');
			}
			else{
				putchar('\'');
				putchar('\'');
			}
			
			inside = (!inside);
		}
		else{
			putchar(x);
		}
		
	}
	return 0;
} 
