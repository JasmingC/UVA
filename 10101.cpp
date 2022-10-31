/*
Date:		2021/12/20
Number: 	#10101 
Purpose:	單位換算 
*/
/*
由後往前拆七位一組，並且組跟組之間要有kuti 
ex 4589745,8973958 = 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
'kuti' (1,0000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100)
*/
#include <iostream>
#include <iomanip>
using namespace std;

void bangla(long long int num){
	
	if(num >= 10000000){
		//超過七位數先處理前段的 
		bangla(num / 10000000);
		cout << " kuti";
		num %= 10000000;
	}
	if(num>=100000){
		
		bangla(num/100000);
		cout << " lakh";
		num%=100000;
		
	}
	if(num>=1000){
		
		bangla(num/1000);
		cout << " hajar";
		num%=1000;
		
	}
	if(num>=100){
		
		bangla(num/100);
		cout << " shata";
		num%=100;
		
	}
	
	if(num) cout << " "<<num;
}

int main(){
	
	
	long long int num;
	long long int caseNum = 0;
	
	while(cin>>num){
		
		caseNum++;
		cout << setw(4) << caseNum << ". ";
		
		if(num==0){
			cout << " 0" << endl;
		}
		else{
			bangla(num);
			cout << endl;	
		}
		
	}
	return 0;
} 
