/*
Date:		2021/12/20
Number: 	#10226 
Purpose:	計算樹種和百分比 
*/

#include <string>
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	cin.get();
	cin.get();
	
	while(n--){
		map<string, int> record;
		map<string, int>::iterator iter;
		string tree;
		int total = 0;
		while(getline(cin,tree)){
			if(tree=="") break;
			record[tree]++;
			total++;
		}
		
		for(iter = record.begin() ; iter != record.end() ; iter++){
			cout << fixed << setprecision(4);
			cout << iter->first << " " << iter->second*100.0/total << endl;
		}
		
		if(n){
			
			puts("");
		}
	}
	
	return 0;
}
