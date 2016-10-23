#ifndef ELI_def_dsfx3d
#define ELI_def_dsfx3d

#include "common.h"

#define FILE_ACCESS_ERR cout<<"\nUnable to open file.\nCheck if file exists and is accessible.\nTry running as Administrator.\nHelp \"esh -h\".\n\n Esh!\n"

typedef string FilePath;

class ELI {
	public:
		/*
		Read File by filepath
		PARAM: path to file
		PRE  : path must be valid
		POST : reads the file and returns content in string*/
		std::string readFile(FilePath);
};
#endif
