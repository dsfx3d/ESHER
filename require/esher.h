#ifndef ESHER_dsfx3d
#define ESHER_dsfx3d

#include "esher_def.h"

/**/
SecretKey Esher::parseKey(EshKey key) {
	SecretKey _k=0;
	
	Digit k;
	int d=1000,r=10;
	
	loop(4) {
		k = (key/d);
		if(i>0) k%=10;
		//cout << "i: "<<i<<" k: "<<k<<endl;
		if(k<5)k=10-k;
		//cout << "i: "<<i<<" k: "<<k<<endl;
		_k+=k*d;
		//cout << "i: "<<i<<" _k: "<<_k<<endl;
		d/=10;
	}
	return _k;
}
/**/
CyChar Esher::_esh(char c, EshKey key) {
	SecretKey _key = parseKey(key);
	
}/**/

#endif
