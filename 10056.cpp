/*
Date:		2021/12/18 
Number: 	#10056
Purpose:	��X�ĴX�쪱�a��Ӫ����v 
*/
/*
����żƤ���: ���� / 1-���� 
*/ 

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	
	int set;
	int player;
	double p,q;
	int win;
	
	
	cin >> set;
	while(set--){
		cin >> player >> p >> win;
		q = 1 - p;
		
		if(p==0) cout << "0.0000" << endl; 
		else{
			cout << fixed << setprecision(4) << pow(q,win-1) * p / (1-pow(q,player)) << endl;
		}
		
	}
	return 0;
}
