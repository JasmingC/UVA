/*
Date:		2021/12/18 
Number: 	#11063
Purpose:	輸入某個長方形字元陣列、輸入某個點為中心，求出向外擴展為正方形的最大邊長 
*/
#include <iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		char matrix[101][101] = {'0'};
		
		int m, n ,q;
		int temp_q;
		int r,c;
		int length[21];
		int i,j;
		
		cin >> m >> n >> q;	
		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin >> matrix[i][j];
			}
		}
		
		temp_q = q;
		i = 0;
		while(temp_q--){
			
			cin >> r >> c ;
			
			bool square = 1;
			length[i] = 1;
			for(int offset = 1 ; square == 1 ; offset++){
				for(int top = r - offset ; top <= r + offset && square == 1 ; top++){
					for(int left = c - offset ; left <= c + offset && square == 1 ; left++){
						//cout << "matrix[top][left] = martix[" << top << "][" << left <<"] = "<<  matrix[top][left] << endl;
						if(matrix[top][left] != matrix[r][c]){
							//cout << "not equal!" << endl; 
							square = 0;
						}
					}
				}
				if(square){
					length[i] += 2;
					//cout << "length+2! length[i] = length[" << i << "] = " << length[i] << endl;
				}
				//else{
					//cout << "length[i] = length[" << i << "] = " << length[i] << endl;
				//}
			}
			i++;
		}
		
	
		/*output*/
		cout << m << " "<< n << " " << q << endl;
		for(i = 0 ; i < q ; i++){
			cout << length[i] << endl;
		}
		
	
	}
	return 0; 
} 
