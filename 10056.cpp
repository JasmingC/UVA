/*
Date:		2021/12/18 
Number: 	#10056
Purpose:	算出第幾位玩家獲勝的機率 
*/
/*
等比級數公式: 首項 / 1-公比 
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
