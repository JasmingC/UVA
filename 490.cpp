/*
Date:		2021/12/15
Number: 	#490 
Purpose:	輸入字串，字串順時針旋轉 
*/

/*
注意迴圈的迭代變化 
*/ 

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char s[101][101] = {" "};
	int i = 0;
	
	int length[105] = {0}; //紀錄每一個字串長度 
	int max_length = 0;
	
	
	while(gets(s[i])){  
		length[i] = strlen(s[i]);
		//cout << "length = " << length << endl;	
		if(max_length < length[i]) max_length = length[i];
		i++;	
	}

 
/*	s[2][0] s[1][0] s[0][0] 
	s[2][1] s[1][1] s[0][1]
	s[2][2] s[1][2] s[0][2]
	s[2][3] s[1][3] s[0][3]
	s[2][4] s[1][4] s[0][4]
	s[2][5] s[1][5] s[0][5]
*/
 
//	cout << "i = " << i << endl; 
	
	for(int j = 0 ; j < max_length ; j++){
		for(int k = 0 ; k < i ; k++){
			cout << s[i - 1 - k][j];
		}	
		cout << endl;
	}
	
	return 0;
}

