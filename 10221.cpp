/*
Date:		2021/12/20
Number: 	#10221 
Purpose:	�p�⩷���M���� 
*/
/*
1. 1��(deg) = 60��(min) 
2. arc(����) = a * �b�| 
3. chord(����) = 2 * �b�| * sin(a/2)  
4. ang * pi / 180
5. �n��T��pi �i�H��  M_PI �A���n#define _USE_MATH_DEFINES �B#include<math.h> 
*/
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	
	double s;
	double ang;
	string q;
	while(cin >> s >> ang >> q){
		
		double arc , chord;
		//�������� 
		if(q=="min") ang = ang/60; 
		
		//���פj��180�׭n�ഫ 
		if(ang > 180) ang = 360-ang;
		
		//�����ഫ
		ang = ang * M_PI / 180.0;
		 
		//����
		arc = ang * (s+6440.0);
		
		//���� 
		chord = 2.0 * (s+6440.0) * sin(ang/2.0);
		
		cout << fixed << setprecision(6) << arc << " " << chord << endl;
	}
	
	return 0;
}

