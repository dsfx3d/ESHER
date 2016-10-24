#ifndef ELI_def_dsfx3d
#define ELI_def_dsfx3d

#include "common.h"

#define FILE_ACCESS_ERR cout<<"\nUnable to open file.\nCheck if file exists and is accessible.\nTry running as Administrator.\nHelp \"esh -h\".\n\n Esh!\n"

typedef string FilePath;
typedef string Data;
typedef int LineNumber;
typedef int Offset;

class ELI {
	public:
		/*
		Read File by filepath
		PARAM: path to file
		PRE  : path must be valid
		POST : reads the file and returns content in string*/
		std::string readFile(FilePath,Offset);
		/*
		Write File on path; creates new file if file doesn't exist
		PARAM: data, path to file
		PRE  : must be a valid system path
		POST : write param1 in the file created*/
		void writeFile(FilePath, Data);
};
#endif
