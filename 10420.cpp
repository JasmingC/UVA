/*
Date:		2021/12/15
Number: 	#10420
Purpose:	使用者輸入字串，找出重複的字串和次數 
*/
/*
map的用法 
1. include <map>
2. map<first, second> : first是key ,每個key只會出現一次
						second是value
   利用first紀錄國家名稱，second紀錄出現次數

3.::iterator 迭代器，容器的指標 
*/ 
#include <iostream>
#include <map>

using namespace std;

int main(){
	 
	map<string, int> count;
	map<string, int>::iterator iter; 
	string country;
	char others[76] = {0};
	
	int n;
	cin >> n;
	cin.get();

	while(n--){
		cin >> country;
		/*important!!!!!!!*/ 
		count[country]++;
		/*-----------------*/ 
		cin.getline(others,76);
	}
	
		/*important!!!!!!!*/ 
	for(iter = count.begin(); iter!=count.end() ; iter++){
		cout << iter->first << " ";
		cout << iter->second << endl;
	}
	
	return 0;
}
