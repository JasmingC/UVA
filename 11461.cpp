/*
Date:		2021/12/18 
Number: 	#10783 
Purpose:	算range[a,b]有幾個平方數 
*/
/*
1.用 sqrt開根號算出sqrt(a)~sqrt(b)有幾個數 #include <math.h>
2.先加減0.1再用ceil()、 floor()配合處理誤差
3.ceil()和floor要 #include<stdio.h> 
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
