/*
Date:		2021/12/18 
Number: 	#10783 
Purpose:	��range[a,b]���X�ӥ���� 
*/
/*
1.�� sqrt�}�ڸ���Xsqrt(a)~sqrt(b)���X�Ӽ� #include <math.h>
2.���[��0.1�A��ceil()�B floor()�t�X�B�z�~�t
3.ceil()�Mfloor�n #include<stdio.h> 
4. ex. 36~81 -> 6~9 -> 9-6+1 = 4
	   ceil(36-0.1)~floor(81+0.1)     
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int a,b;
	
	while(1){
		
		cin >> a >> b;
		if(a==0&&b==0)break;
		
		a = ceil(sqrt(a-0.1));
		b = floor(sqrt(b+0.1)); 
		
		cout << b-a+1 << endl;
		
	}
	
	return 0;
} 
