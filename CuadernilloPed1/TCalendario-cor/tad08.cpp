#include <iostream>
using namespace std;
#include "tcalendario.h"


int main(){
	TCalendario cal1(31, 12, 2000, (char*) "Fecha correcta");
	TCalendario r;

	for(int i = 1; i <= 40; i++){
		r = cal1 + i;
		cout << r << endl;
	}
	



	cout << "==========================" << endl;
	TCalendario cal2depollo(1, 1, 2000, (char*) "pepe");
	for(int i = 1; i <= 65; i++){
		r = cal2depollo - i;		
		cout << r << endl;
	}

	return 0;
}
