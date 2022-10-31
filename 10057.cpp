/*
Date:		2021/12/20 
Number: 	#10057
Purpose:  �n�� (|X1 - A| + |X2 - A| + . . . + |Xn - A|) ���ȳ̤p�AA �O (X1�AX2�A�K�AXn) �������
*/

/*
1. output: ����� ���󤤦���`�� ��������Ʊ���� 
2. �n�䤤��ƫe�n���Ƨ� 
*/ 

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	
	while(cin >> n){
		
		int s[100000];
		int min, max;
		int count = 0;
		int possible;
		
		for(int i = 0 ; i < n ; i++){
			cin >> s[i];
		}	
		
		sort(s,s+n);
		
		if(n%2==1){
			
			min = max = s[n/2];
			
		}else{
			min = s[n/2 - 1];
			max = s[n/2];
		}
		
		for(int i = 0 ; i < n ; i++){
			if(s[i]==min || s[i]==max) count++;
		}
		
		possible = max - min + 1;
		
		cout << min << " " << count << " "<< possible << endl;
			
	}
	return 0;
}
