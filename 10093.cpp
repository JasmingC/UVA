/*
Date:		2021/12/16
Number: 	#10093 
Purpose:	�D�ص��w�@�� N �i�� (2 <= N <= 62) ���Ʀr R�AR �O�ҥi�H�Q (N-1) �㰣�C
			�D�ŦX��ĳ���̤p N�C
			�� N = 62 �ɡA�ΨӪ��62�i��r�Ŭ� 0..9, A..Z, a..z
			
			-> �@�� N �i��ơA�p�G�O(N-1)�����ơA�h�Ҧ��Ʀr�M����(N-1)������
			   ex. ��J"233"�A�� N = 5 �ɡA2+3+3 = 8 �� (5-1) ������
			       �ҥH(233)�H5���� �]�O4������ 
*/
/*
1. �p�G�@��N�i���ơiabc�j�O (N-1) �����ơA�h (a + b + c) �]�O(N-1) ������
2. �`�N�G����|���� �� +A�� �� �� -5464�� �o�˦��ťթΥ��t�����r��C
3. ��stringŪ�A�]���|���r�� 
*/
#include <iostream>
using namespace std;

int main(){
	
	int sum, mx, temp;
	string s;
	while(getline(cin, s)){
		sum = 0;
		mx = 1;
		int i;
		for(i = 0; i < s.size() ; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				temp = s[i] - '0';
			}
			if(s[i] >= 'A' && s[i] <= 'Z'){
				temp = s[i] - 'A' + 10;
			}
			if(s[i] >= 'a' && s[i] <= 'z'){
				temp = s[i] - 'a' + 36;
			}
			
			sum += temp;
			
			//��X�Ʀr���̤j���r 
			if(mx < temp) mx = temp;
			
		}
		
		int base;
		//�i��̤֭n��̤j�Ʀh1 
		for( base = mx+1 ; base <= 62 ; base++){
			if( sum % (base-1) == 0 ){
				break;
			} 
		}
		if(base > 62)
			cout << "such number is impossible!" << endl;
		else cout << base << endl;	
	}
	
	return 0;
}
