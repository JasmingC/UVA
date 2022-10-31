/*
Date:		2021/12/15
Number: 	#10062 
Purpose:	輸入一串字元，紀錄字元數目，並將其ASCll碼顯示出來。
*/
/*
注意同時升序和降序的迴圈寫法
不需要用sort寫得很複雜!
先決定的條件放在外層迴圈
後決定的條件放在內層迴圈 
*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char input[1001];
	
	while(gets(input))
	{
		int record[128]={0};
		
		for(int i = 0 ; i < strlen(input) ; i++)
			record[ input[i] ]++;
			
		for(int i = 1 ; i <= 1001 ; i++){//數目大小先決定先後，此題是由小排到大
			for(int k = 127 ; k >= 32 ; k--){//數目一樣時字元大小決定先後 ，此題是由大排到小
				if(record[k] == i) cout << k << " " << i << endl;
			}
		} 
		cout << endl;
	}

	return 0;
} 
