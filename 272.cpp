/*
Date:		2021/12/20 
Number: 	#272
Purpose:	��Ĥ@�� " ���� ``�A�ĤG�� " ���� '' 
*/
/*
1.�n�@�Ӧr���@�Ӧr���B�z���� getchar() �M putchar()  include<string.h>
2.�n�Τ@���ܼƬ����@�լA���A�I��Ĥ@�ӬA���� 0->1 �A�ĤG�ӬA���A�ܦ^0 
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
