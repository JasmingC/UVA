/*
Date:		2021/12/7
Number: 	#10008
Purpose:	��J�r��A�έp�C�@�Ӧr�����Ӽ� 
*/

/*
1. ��J�r�ꪺ��k:	gets(char*) �i�HŪ�ť� 
2. �Y��ťղŸ�:	cin.get()   �~�� 
3. �`�N�έp�r������k �ŧi count[127] 
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
	int count[127]={0}; //ascii 127��  
	cin.get();
	
	for(int i = 0 ; i < n ; i++){
		
		
		gets(str);
		
		
		for(int j = 0 ; j < strlen(str) ; j++){
			c = str[j];
			//��p�g��j�g 
			if(c >= 'a' && c <= 'z') c -= 32 ;
			
			//�έp�C�Ӧr������ 
			if(c >= 'A' && c <= 'Z') count[c]++;
		}
	
	
		//��X�X�{�̦h�����r�� 
		for(c ='A';c <= 'Z'; c++){
			if(count[c] > max)
			max = count[c];
		}
		
	}
	
	//�n�q�̦h�}�l��X(�Ĥ@�h�j��)
	//�p�G�@�˴N�Ӧr������(�ĤG�h�j��) 
	for(int i = max ; i > 0 ; i--){
		for(c = 'A' ; c <= 'Z' ; c++){
			if(count[c]==i) cout << c << " " << i << endl;
		}
	}
	
	
	return 0;
}

