/*
Date:		2021/12/18 
Number: 	#10170 
Purpose:	�@�Φ�N�ӤH�|��N�ѡA�U�@�η|��W�@�Φh�@�H�A�D�Y�Ѫ��J��H�� 
*/

#include <iostream>
using namespace std;
int main(){
	long long int n,d;
	long long int sum;
	while(cin >> n >> d){
		sum = 0;
		while(sum < d){	
			sum += n;
			n++;
		}
		cout << n-1 << endl;
	}
	return 0;
} 
