/*
Date:		2021/12/18 
Number: 	#10242 
Purpose:	������|��ΤT�Ӯy�СA�D�X�ĥ|�� 
*/
/*
1. ����|��ι﨤�y�Ьۥ[�|�۵�
2.  setprecision �����X���
	fixed ����T�w��X��� 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	double x0,x1,x2,x3,y0,y1,y2,y3;
	double x4,y4;
	double x,y;
	
	while(cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		
		//x0,y0�O���ƪ��I 
		if((x0==x1&&y0==y1) || (x0==x2&&y0==y2) || (x0==x3&&y0==y3)){
			x4 =  x1 + x2 + x3 - 2*x0;
			y4 =  y1 + y2 + y3 - 2*y0;
		}
		//x1,y1�O���ƪ��I 
		else if((x1==x2&&y1==y2) || (x1==x3&&y1==y3)){
			x4 = x0 + x2 + x3 - 2*x1;
			y4 = y0 + y2 + y3 - 2*y1;
		}
		//x2,y2�O���ƪ��I 
		else if(x2==x3&&y2==y3){
			x4 = x0 + x1 + x3 - 2*x2;
			y4 = y0 + y1 + y3 - 2*y2;
		}
		
		cout << fixed << setprecision(3) << x4 << " " << y4 << endl;
	} 
	
	
	
	return 0;
} 
