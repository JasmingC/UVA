/*
Date:		2021/12/20
Number: 	#118
Purpose:    模擬機器人的旋轉和前進，輸出最後位置和方位，並且若超過邊緣則輸出Lost 
*/
/*
1. 方向 east:0 south:1 west:2 north:3 用char[]紀錄ESWN， index可以代表方向 
2. 旋轉 R(向右轉) : (dir+1)%4
		L(向左轉) : (dir+3)%4 
3. 前進 east:{1,0} south:{0,-1} west:{-1,0} north:{0,1} 設成二維陣列 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){

	int world[51][51] = {0};
	int move[4][2] = {
	  //{x,y}
		{1,0}, 	//E
		{0,-1}, //S
		{-1,0},	//W
		{0,1}	//N
	};
	char dir[5] = "ESWN";
	/*for(int j = 0 ; j < 5 ;j++){
		cout << dir[j] << " ";
	}*/
	
	int m,n;
	cin >> m >> n;
	
	int x, y, new_x, new_y;
	char c;
	string ins;
	int i;
	int face;
	
	while(cin >> x >> y >> c >> ins){
		
		//cout << "x=" << x << endl;
		//	cout << "y=" << y << endl;
		//cout << "c=" << c << endl;
		
		//起始方向 	
		for(i = 0 ; i < 4 ; i++){
			if(dir[i]==c){
				//cout << "dir[" << i << "]==" << c <<endl;
				face = i;
				//cout << "original dir = " << i << endl;
				break;
			}
				
		}
		
		
		for(i = 0 ; i < ins.length() ; i++){
			
			//east:{1,0} south:{0,-1} west:{-1,0} north:{0,1}
			if(ins[i]=='F'){
				
				new_x = x + move[face][0];
				new_y = y + move[face][1];
				
				//有超出範圍 
				if(new_x<0 || new_y<0 || new_x>m || new_y>n){
					if(world[x][y]==0){
						world[x][y]=1;
						cout << x << " " << y << " " << dir[face] << " LOST" << endl;
						break;
					}
				
				}
				//沒有超出範圍 
				else{
					
					x = new_x;
					y = new_y;
				
				}
			}
			else if(ins[i]=='R'){
				face = (face+1)%4;
			}
			else if(ins[i]=='L'){
				face = (face+3)%4;
			}
				
		}
		//沒有LOST，i有跑到最後一道指令 
		if(i==ins.length())	cout << x << " " << y << " " << dir[face] << endl;
	}

	return 0;
}
