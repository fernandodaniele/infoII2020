#include <iostream>
#include <string>

using std::cout;
using std::endl;
using namespace std;

void replace (string str, char find, char replaceVrb);

int main (){
	replace("Yo los conozco, son ocho los moros",'o','e');
	return 0;
}

void replace (string str, char find, char replaceVrb){
	int pos = 0;
	pos = str.find(find);
	while(pos != -1) {
		string str1 = str.substr(0, pos);  //desde 0 hasta pos
		string str2 = str.substr((pos+1), str.size()); //lenght
		str = str1 + replaceVrb + str2;
		pos = str.find(find);
	}
	cout << str << endl;	
}
