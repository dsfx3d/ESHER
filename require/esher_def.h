#ifndef ESHER_dsfx3d
#define ESHER_dsfx3d

#include "common.h"

typedef int EshKey; 		// 4 digit integeral key 
typedef int SecretKey; 		// 4 digit integeral key
typedef int Digit; 			// digits of a key
typedef char CyChar;		// cyphered char
typedef string PlainText;	//PlainText
typedef string CypherText;	//CypherText

class Esher {
	private:
		//private function for parsing eshkey 
		//PARAM: EshKey
		//PRE  : EshKey must be valid
		//POST : returns a secret key for encryption
		SecretKey parseKey(EshKey);
	protected: 
		//protected function for single char encryption
		//PARAM: char, EshKey
		//PRE  : param1 must be alphanumerc in nature
		//POST : returns cyphered char
		CyChar _esh(char,EshKey);
	public:
		//public function for strng encryption
		//PARAM: PlainText , EshKey 
		//PRE  : EshKey must be 4 digit numeral
		//POST : returns cyphered string
		CypherText esh(PlainText, EshKey);
		
		SecretKey foo(EshKey k) {
			return parseKey(k);
		}
};


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
