/*
Date:		2021/12/18 
Number: 	#11005 
Purpose:	轉成2~36進制後，計算列印的油墨成本，找出最小值 
*/

#include <iostream>
using namespace std;

int main(){
	
	int set;
	cin >> set;
	
	int ink[36];
	int query;
	int x;
	int temp_set = set;
	int casenum = 1;
	
	int baselist[40];
	int baseCount = 0;
	
	while(temp_set--){
	
	 
		for(int i = 0 ; i < 36 ; i++){
			cin >> ink[i];
		}
		
		cout << "Case " << casenum << ":" << endl;
		cin >> query;
	
		while(query--){
			cin >> x;
			int minCost = 2147483647;
			
			for(int base = 2 ; base <= 36 ; base++ ){
				int totalCost = 0;
				int temp_x = x;
				
				while(temp_x>0){
					totalCost += ink[temp_x%base];
					temp_x /= base;
				}
				
				//cout << "----debug----" << endl;
			//	cout << "base = " << base << endl;
			//	cout << "totalCost = " << totalCost << endl;
				
				if(totalCost < minCost){
				//	cout << "Your cost is min!" << endl;
					minCost = totalCost;
					baselist[0] = base;
					baseCount = 1;
					//cout << "baselist[0] = base = " << base << endl;
				//	cout << "baseCount = " << baseCount << endl;
				}
				else if(totalCost == minCost){
					//cout << "Your cost is equal min!" << endl;
					baselist[baseCount] = base;
					baseCount++;
					//cout << "baselist[baseCount] = baselist[" << baseCount <<"] =" << base << endl;
				
				}
			}
			
			/*output*/
			cout << "Cheapest base(s) for number " << x << ":";
			for(int i = 0 ; i < baseCount; i++){
				cout << " " << baselist[i];
			}
			cout << endl;
		}
		casenum++;
		if(temp_set) cout << endl;
	}
	
	
	
	return 0;
} 
