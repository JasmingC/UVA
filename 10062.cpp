/*
Date:		2021/12/15
Number: 	#10062 
Purpose:	��J�@��r���A�����r���ƥءA�ñN��ASCll�X��ܥX�ӡC
*/
/*
�`�N�P�ɤɧǩM���Ǫ��j��g�k
���ݭn��sort�g�o�ܽ���!
���M�w�������b�~�h�j��
��M�w�������b���h�j�� 
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
			
		for(int i = 1 ; i <= 1001 ; i++){//�ƥؤj�p���M�w����A���D�O�Ѥp�ƨ�j
			for(int k = 127 ; k >= 32 ; k--){//�ƥؤ@�ˮɦr���j�p�M�w���� �A���D�O�Ѥj�ƨ�p
				if(record[k] == i) cout << k << " " << i << endl;
			}
		} 
		cout << endl;
	}

	return 0;
} 
