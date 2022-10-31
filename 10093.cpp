/*
Date:		2021/12/16
Number: 	#10093 
Purpose:	肈ヘ倒﹚ N 秈 (2 <= N <= 62) 计 RR 玂靡砆 (N-1) 俱埃
			―才矗某程 N
			讽 N = 62 ノㄓボ62秈才 0..9, A..Z, a..z
			
			->  N 秈计狦琌(N-1)计玥┮Τ计㎝ゲ(N-1)计
			   ex. 块"233"讽 N = 5 2+3+3 = 8  (5-1) 计
			       ┮(233)5┏ 琌4计 
*/
/*
1. 狦N秈计abc琌 (N-1) 计玥 (a + b + c) 琌(N-1) 计
2. 猔種代戈穦Τ钩 〃 +A〃 ┪ 〃 -5464〔 硂妓Τフ┪タ璽腹﹃
3. ノstring弄穦Τダ 
*/
#include <iostream>
using namespace std;

int main(){
	
	int sum, mx, temp;
	string s;
	while(getline(cin, s)){
		sum = 0;
		mx = 1;
		int i;
		for(i = 0; i < s.size() ; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				temp = s[i] - '0';
			}
			if(s[i] >= 'A' && s[i] <= 'Z'){
				temp = s[i] - 'A' + 10;
			}
			if(s[i] >= 'a' && s[i] <= 'z'){
				temp = s[i] - 'a' + 36;
			}
			
			sum += temp;
			
			//т计い程 
			if(mx < temp) mx = temp;
			
		}
		
		int base;
		//秈程ぶ璶ゑ程计1 
		for( base = mx+1 ; base <= 62 ; base++){
			if( sum % (base-1) == 0 ){
				break;
			} 
		}
		if(base > 62)
			cout << "such number is impossible!" << endl;
		else cout << base << endl;	
	}
	
	return 0;
}
