/*
Date:		2021/12/20
Number: 	#10812
Purpose:	����ƪ��M��t�A�D�X�쥻��ơA�n�`�N������� 
*/
/*
�`�N��|�ح������ 
*/ 
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	while(n--){
		
		int sum , diff;
		cin >> sum >> diff;
		
		int score1 , score2;
		score1 = (sum+diff)/2;
		score2 = (sum-diff)/2;
		
		if(sum < diff || sum<0 || diff<0 || (sum+diff)%2==1) cout << "impossible" << endl;
		else cout << score1 << " " << score2 << endl;
		
		
	}
	return 0;
}
