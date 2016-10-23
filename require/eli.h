#ifndef ELI_dsfx3d
#define ELI_dsfx3d

#include "eli_def.h"

/**/
std::string ELI::readFile(FilePath path) {
	std::ifstream t(&(path[0]));
	std::string str;

	if(!t.is_open()) {
		FILE_ACCESS_ERR;
		return str;
	}

	t.seekg(0, std::ios::end);   
	str.reserve(t.tellg());
	t.seekg(0, std::ios::beg);

	str.assign((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
	return str;
}
/**/

#endif
