#ifndef ELI_dsfx3d
#define ELI_dsfx3d

#include "eli_def.h"

#define CHK_FILE_ACCESS(m)if(!file.is_open()){FILE_ACCESS_ERR;return m;}

/*
*/
std::string ELI::readThis(FilePath path, StartOffset so, EndOffset eo, ReadMode flag) {
	if(so>eo) readThis(path,eo,so,flag); //to ensure eo>so is true
	
	Data data = readFile(path,0);
	
	switch(flag) {
		case NORMAL: 
			return data.substr(so,eo);
		break;
	}
}
/*
note: open file to read entire content
*/
std::string ELI::readFile(FilePath path, StartOffset offset) {
	int beg=0;
	Data data;
	
	ifstream file(&(path[0]));

	CHK_FILE_ACCESS(data);
	
	file.seekg(0, ios::end);   
	data.reserve(file.tellg());
	file.seekg(beg+offset, ios::beg);

	data.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	file.close();
	
	return data;
}
/**/
void ELI::writeFile(FilePath path, Data data) {
	ofstream file(&(path[0]));
	file<<data;
	file.close();
}
/**/
int ELI::_searchc(FilePath path, char c, MinimumCharOccurance mino) {
	
}
/**/

FileLength ELI::length(FilePath path) {
	ifstream file(&(path[0]));
	file.seekg(0, ios::end);
	return file.tellg();
}
#endif
