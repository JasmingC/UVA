/*
Date:		2021/12/18 
Number: 	#10170 
Purpose:	一團有N個人會住N天，下一團會比上一團多一人，求某天的入住人數 
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
