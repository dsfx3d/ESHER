#ifndef ESHER_DEF_dsfx3d
#define ESHER_DEF_dsfx3d

#include "typedef.h" 
#include "common.h"
<<<<<<< HEAD

=======
 
>>>>>>> 6d5426a1ba5ba418e70f6bf346f7237d0f6b91a3
class Esher {
 	public:
 		//public function for strng encryption
 		//PARAM: PlainText , EshKey 
 		//PRE  : EshKey must be 6 digit numeric or alphanumeric.
 		//POST : returns cyphered string
 		CypherText esh(PlainText, EshKey);
 		
 		//public function for cipher decryption
 		//PARAM: CypherText , EshKey 
 		//PRE  : EshKey must be 6 digit numeric or alphanumeric.
 		//POST : returns decyphered string
		PlainText hse(CypherText, EshKey);
};

#endif
