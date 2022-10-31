/*
Date:		2021/12/20
Number: 	#10221 
Purpose:	計算弧長和弦長 
*/
/*
1. 1度(deg) = 60分(min) 
2. arc(弧長) = a * 半徑 
3. chord(弦長) = 2 * 半徑 * sin(a/2)  
4. ang * pi / 180
5. 要精確的pi 可以用  M_PI ，但要#define _USE_MATH_DEFINES 且#include<math.h> 
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
		//分換成度 
		if(q=="min") ang = ang/60; 
		
		//角度大於180度要轉換 
		if(ang > 180) ang = 360-ang;
		
		//角度轉換
		ang = ang * M_PI / 180.0;
		 
		//弧長
		arc = ang * (s+6440.0);
		
		//弦長 
		chord = 2.0 * (s+6440.0) * sin(ang/2.0);
		
		cout << fixed << setprecision(6) << arc << " " << chord << endl;
	}
	
	return 0;
}

