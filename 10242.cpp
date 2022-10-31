/*
Date:		2021/12/18 
Number: 	#10242 
Purpose:	給平行四邊形三個座標，求出第四個 
*/
/*
1. 平行四邊形對角座標相加會相等
2.  setprecision 控制輸出位數
	fixed 控制固定輸出位數 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	double x0,x1,x2,x3,y0,y1,y2,y3;
	double x4,y4;
	double x,y;
	
	while(cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		
		//x0,y0是重複的點 
		if((x0==x1&&y0==y1) || (x0==x2&&y0==y2) || (x0==x3&&y0==y3)){
			x4 =  x1 + x2 + x3 - 2*x0;
			y4 =  y1 + y2 + y3 - 2*y0;
		}
		//x1,y1是重複的點 
		else if((x1==x2&&y1==y2) || (x1==x3&&y1==y3)){
			x4 = x0 + x2 + x3 - 2*x1;
			y4 = y0 + y2 + y3 - 2*y1;
		}
		//x2,y2是重複的點 
		else if(x2==x3&&y2==y3){
			x4 = x0 + x1 + x3 - 2*x2;
			y4 = y0 + y1 + y3 - 2*y2;
		}
		
		cout << fixed << setprecision(3) << x4 << " " << y4 << endl;
	} 
	
	
	
	return 0;
} 
