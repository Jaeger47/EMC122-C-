//https://github.com/Jaeger47/EMC122-CplusPlus/edit/main/looping.cpp
#include <iostream>

using namespace std;

int main(){
		
		int var1 = 0;
		int var2 = 0;
		
		//using while statement
		while (var1 < 3) {
			cout << var1 << ". Looping with while statement" << endl;
			++var1;
		};
		
		//using do while statement
		do {
			cout << var2 << ". Looping with do while statement" << endl;
			++var2;
		}
		while (var2 < 3);
		
		//using for statement
		for(int var3 = 0; var3 < 3; ++var3) {
		    cout << var3 << ". Looping with for statement" << endl;
		}
		return 0;
}
