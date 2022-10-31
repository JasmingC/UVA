/*
Date:		2021/12/16 
Number: 	#10038 
Purpose:	兩相鄰數字差構成一序列 
*/
/*
注意sort的用法:不能寫成 sort(dif[1],dif[n]); 
*/ 
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int dataset;
	int num[3001];
	int dif[3001];
	
	cin >> dataset;
	int i = 0;
	
	while(dataset--){
		cin >> num[i];
		
		if(i>=1){
			dif[i] = abs(num[i] - num[i-1]);
		}
		i++;	
	}
	
/*	for(int j = 1 ; j < i ; j++){
		cout << dif[j] << " ";
	}
	cout << endl;*/
	
	
	sort(dif+1,dif+i);
	
/*	for(int j = 1 ; j < i ; j++){
		cout << dif[j] << " ";
	}
	cout << endl;*/
	
	for(int j = 1 ; j < i ; j++){
		if(j != dif[j] ){
			cout << "Not jolly" << endl;
			break;
		}
		if(j == i-1){
			cout << "Jolly" << endl;
		}
	}
	
	
	return 0;
}


