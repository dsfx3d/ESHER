#ifndef ELI_def_dsfx3d
#define ELI_def_dsfx3d

#include "typedef.h"
#include "common.h"

#define FILE_ACCESS_ERR cout<<"\nUnable to open file.\nCheck if file exists and is accessible.\nTry running as Administrator.\nHelp \"esh -h\".\n\n Esh!\n"



class ELI {
	public:
		/*
		Read Entire File from filepath
		PARAM: path to file
		PRE  : path must be valid
		POST : reads the file and returns content in string*/
		std::string readFile(FilePath,StartOffset);
		std::string readFile(FilePath,StartOffset,EndOffset);
		/*
		Write File at provided path; creates new file if file doesn't exist
		PARAM: data, path to file
		PRE  : must be a valid system path
		POST : write param1 in the file created*/
		void writeFile(FilePath, Data);
		/*
		return location of char after n occurances
		PARAM: filepath, query_char, minimum occurance
		PRE  : path must be valid
		POST : returns the index of recently occured char*/
		int _searchc(FilePath, char, MinimumCharOccurance);
};
#endif
