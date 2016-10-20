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
};
