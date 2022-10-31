/*
Date:		2021/12/7
Number: 	#10008
Purpose:	輸入字串，統計每一個字母的個數 
*/

/*
1. 輸入字串的方法:	gets(char*) 可以讀空白 
2. 吃到空白符號:	cin.get()   洗掉 
3. 注意統計字母的方法 宣告 count[127] 
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	int n; //#data
	cin >> n;

	
	char str[1000];
	char buf[10];
	char c;
	int max = 0;
	int count[127]={0}; //ascii 127個  
	cin.get();
	
	for(int i = 0 ; i < n ; i++){
		
		
		gets(str);
		
		
		for(int j = 0 ; j < strlen(str) ; j++){
			c = str[j];
			//把小寫轉大寫 
			if(c >= 'a' && c <= 'z') c -= 32 ;
			
			//統計每個字母次數 
			if(c >= 'A' && c <= 'Z') count[c]++;
		}
	
	
		//找出出現最多次的字母 
		for(c ='A';c <= 'Z'; c++){
			if(count[c] > max)
			max = count[c];
		}
		
	}
	
	//要從最多開始輸出(第一層迴圈)
	//如果一樣就照字母順序(第二層迴圈) 
	for(int i = max ; i > 0 ; i--){
		for(c = 'A' ; c <= 'Z' ; c++){
			if(count[c]==i) cout << c << " " << i << endl;
		}
	}
	
	
	return 0;
}

