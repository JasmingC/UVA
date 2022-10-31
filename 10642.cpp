/*
Date:		2021/12/20
Number: 	#10642 
Purpose:	一特殊走法，算起點到終點的步數 
*/
/*
把走的順序寫下來找出規律 

*/ 

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	for(int i = 1 ; i<=n ; i++){
		
		int start_x, start_y;
		int end_x, end_y;
		int line;
		int startCode, endCode;
		
		cin >> start_x >> start_y >> end_x >> end_y;
	//	cout << "start (x,y) = (" << start_x << " , " << start_y << ")" <<  endl;
	//	cout << "end (x,y) = (" << end_x << " , " << end_y << ")" <<  endl;
		
		
		line = start_x + start_y;
	//	cout << "start line:" << line << endl; 
		startCode = line * (line + 1) / 2+ start_x;
	//	cout << "startCode = " << startCode << endl;
		
		line = end_x + end_y;
	//	cout << "end line:" << line << endl; 
		endCode = line * (line + 1) / 2+ end_x; 
	//	cout << "endCode = " << endCode << endl;
		
		cout << "Case " << i << ": " << endCode - startCode << endl;
		
	}
	return 0;
} 
