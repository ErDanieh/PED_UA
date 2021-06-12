#include <iostream>
using namespace std;
#include "tcalendario.h"


int main(){
	TCalendario cal1(28, 02, 2000, (char*) "Fecha correcta");

	for(int i = 1; i <= 3; i++){
		cal1++;
		cout << cal1 << endl;
	}

	for(int i = 1; i <= 65; i++){
		cal1--;		
		cout << cal1 << endl;
	}

	return 0;
}
