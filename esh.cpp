#include "require/common.h"
#include "require/esher.h"

int main(int argc, char* args[]) {
	
	Esher esher;
	cout << esher.foo(1327);
	
	exit(0);
	
	if(argc==1) { //ESH
		cout <<"\n\n ESH! \n\n";
	} else {
		switch((args[1])[1]) {
			case 'h' : break;
			case 'e' : break;
			case 'l' : break;
			case 'd' : break;
			
			default : cout << endl << args[1] << " : invalid option.\nHelp \"esh -h\" "".\n";
		}
		
	}
	
	return 1;
}
