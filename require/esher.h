#ifndef ESHER_dsfx3d
#define ESHER_dsfx3d

#include "esher_def.h"

/**/
CypherText Esher::esh(PlainText text, EshKey key) {
	bool swapFlag=false;
	int _ks= key.length();
	
	loop(text.length()) {
		if(_ks<0) _ks = key.length();
		text[i]+=getInt(key[--_ks]);
	}
	return text;
}
/**/
PlainText Esher::hse(CypherText text, EshKey key) {
	bool swapFlag=false;
	int _ks= key.length();
	
	loop(text.length()) {
		if(_ks<0) _ks = key.length();
		
		text[i]-=getInt(key[--_ks]);
	}
	return text;
}
/**/

#endif
