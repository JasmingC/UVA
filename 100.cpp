/*
Date:		2021/12/20
Number: 	#100
Purpose:	算出在某區間內 3n+1演算法 的 length 最大的 
*/
#include <iostream>
using namespace std;

int main(){
	
	int i,j,ii,jj,n,temp_n,max,count;
	
	while(cin >> ii >> jj){
		
		//cout << ii << " "<< jj << endl;
		
		if(ii>jj){
			i = jj;
			j = ii;
		}else{
			i = ii;
			j = jj;
		}
		
		//cout << i << " "<< j << endl;
		
		
		max = -1;
		for(n=i;n<=j;n++){
			
			//cout << "n = " << n << endl;
			temp_n = n;
			count = 0;
			while(temp_n!=1){
				
				if(temp_n%2==1){
					temp_n = 3*temp_n + 1;
				} 
				else temp_n /= 2;
				
				count++;
			}
			count++;
			if(count > max) max = count;
		} 
		cout << ii << " " << jj << " " << max << endl;
		
	}
	
	return 0;
}
