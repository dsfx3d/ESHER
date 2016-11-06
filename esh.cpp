#include "require/common.h"
#include "require/typedef.h"
#include "require/eli.h"
#include "require/esher.h"
#include "require/esh.h"

int main(int argc, char* args[]) {
	if(argc==1) { //ESH
		SAY_ESH;
	} else {
		switch((args[1])[1]) {
			case 'h' : break;
			case 'e' : enc(argc,args);break;
			case 'l' : login(argc,args);break;
			case 'd' : cne(argc,args);break;
		
			default : INVALID_OPT_ERR;		
		}
	}
	return 1;
}
