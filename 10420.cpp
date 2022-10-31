/*
Date:		2021/12/15
Number: 	#10420
Purpose:	�ϥΪ̿�J�r��A��X���ƪ��r��M���� 
*/
/*
map���Ϊk 
1. include <map>
2. map<first, second> : first�Okey ,�C��key�u�|�X�{�@��
						second�Ovalue
   �Q��first������a�W�١Asecond�����X�{����

3.::iterator ���N���A�e�������� 
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
