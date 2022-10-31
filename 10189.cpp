/*
Date:		2021/12/20
Number: 	#10189
Purpose:	½ò¦a¹p 
*/

#include <iostream>
using namespace std;

int main(){
	
	int row,col;
	int field = 0;
	
	while(cin>>row>>col){
		
		if(row==0&&col==0)break;
		field++;
		
		cout << "Field #" << field << ":" << endl;
		
		int i , j;
		char input[101][101];
		int board[101][101];
		
		for(i = 0 ; i < row ; i++){
			for(j = 0 ; j < col ; j++){
				board[i][j] = 0;
			}
		}
				
		for(i = 0 ; i < row ; i++){
			for(j = 0 ; j < col ; j++){
				cin >> input[i][j];
			}
		}
		
	/*	cout << "input complete" << endl;
		for(i = 0 ; i < row ; i++){
			for(j = 0 ; j < col ; j++){
				cout << input[i][j];
			}
			cout << endl;
		}
	*/
	
		for(i = 0 ; i < row ; i++){
			for(j = 0 ; j < col ; j++){
				if(input[i][j]=='*'){
					for(int m = i-1 ; m <= i+1 ; m++){
						for(int n = j-1 ; n <= j+1 ; n++){
							board[m][n]++;
						}
					}
					board[i][j] = -1;
				}
			}
		}
		
		for(i = 0 ; i < row ; i++){
			for(j = 0 ; j < col ; j++){
				if(board[i][j]==-1){
					cout << "*";
				}
				else cout << board[i][j];
			}
			cout << endl;
		}
		
		cout << endl;
	}
	return 0;
} 
