/*
Date:		2021/12/20 
Number: 	#10415 
Purpose:    �έp�j��saxphone�C�@�ӫ���n���U������ 
*/
/*
1.�إߤ@�ӤG���}�C�N��C�ӭ�������n���Τ��� 1:�� 0:����
2.�إߤ@�Ӱ}�C�x�s���Ŭd�ߪ�:
   code['c'] = 0 , code['d'] = 1 ....

3.�n�O��state�A�o���n�����B���ӨS�� �~�i�H�O��
  �Y�o���S�����]�n��state��^0 
*/ 
#include <iostream>
#include <string.h> 
using namespace std;

int finger[14][11] = 
{
	{0,0,1,1,1,0,0,1,1,1,1}, //c
	{0,0,1,1,1,0,0,1,1,1,0}, //d
	{0,0,1,1,1,0,0,1,1,0,0}, //e
	{0,0,1,1,1,0,0,1,0,0,0}, //f
	{0,0,1,1,1,0,0,0,0,0,0}, //g
	{0,0,1,1,0,0,0,0,0,0,0}, //a
	{0,0,1,0,0,0,0,0,0,0,0}, //b
	{0,0,0,1,0,0,0,0,0,0,0}, //C
	{0,1,1,1,1,0,0,1,1,1,0}, //D
	{0,1,1,1,1,0,0,1,1,0,0}, //E
	{0,1,1,1,1,0,0,1,0,0,0}, //F
	{0,1,1,1,1,0,0,0,0,0,0}, //G
	{0,1,1,1,0,0,0,0,0,0,0}, //A
	{0,1,1,0,0,0,0,0,0,0,0}, //B
}; 



int main(){
	
	int n;
	
	int code[127];
	
	code['c'] = 0 , code['d'] = 1 , code['e'] = 2 , code['f'] = 3;
	code['g'] = 4 , code['a'] = 5 , code['b'] = 6 , code['C'] = 7;
	code['D'] = 8 , code['E'] = 9 , code['F'] = 10 , code['G'] = 11;
	code['A'] = 12 , code['B'] = 13;
	
	
	while(cin >> n){
		cin.get();
		
		while(n--){
			
			int count[11] = {0,0,0,0,0,0,0,0,0,0,0};
			int state[11] = {0,0,0,0,0,0,0,0,0,0,0}; //0�N��S���U�h 
			
			char song[201];
			gets(song);
			
			int codeNum;
			for(int i = 0 ; i < strlen(song) ; i++){
				codeNum = code[song[i]];
				for(int j = 1 ; j < 11 ; j++){
					
					//�o���n������ �B ���ӬO�S�������A 
					if(finger[codeNum][j]==1 && state[j]==0){
						count[j]++;
						state[j] = 1;
					} 
					
					//�o���S���n����
					if(finger[codeNum][j]==0) state[j] = 0; 
				} 
			}
			
			
			/*output*/
			for(int i = 1 ; i < 11 ; i++){
				cout << count[i] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
} 
