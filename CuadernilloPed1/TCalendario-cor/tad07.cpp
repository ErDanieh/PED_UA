#include <iostream>
using namespace std;
#include "tcalendario.h"


int main(){
	TCalendario cal1(28, 02, 2000, (char*) "Fecha correcta");
	TCalendario r;

	for(int i = 1; i <= 34; i++){
		r = cal1 + i;
		cout << r << endl;
	}
	cout << "==========================" << endl;
	for(int i = 1; i <= 65; i++){
		r = cal1 - i;		
		cout << r << endl;
	}

	return 0;
}
