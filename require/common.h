#ifndef COMMON_dsfx3d
#define COMMON_dsfx3d

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <streambuf>
#include <time.h>
#include <sys/types.h>	//DIRECTORY
#include <sys/stat.h>	//DIRECTORY
using namespace std;

#define loop(m) for(int i=0; i<m; i++)
#define loop2(i,m) for(int i=0; i<m; i++)
#define loop3(i,m,n) for(int i=m; i<=n; i++)


/*
	convert char number to int
	PARAM: numberal char
	PRE  :
	POST : returns converted int */
int getInt(char c) {
	int i = c - '0';
	if(i<0) return (i*i)/10;
	return i;
}

bool isDir(FilePath pathname) {
	struct stat info;
	
	if( stat( pathname, &info ) != 0 ) {
    	printf( "cannot access %s\n", pathname );
    } else if( info.st_mode & S_IFDIR ) {
    	printf( "%s is a directory\n", pathname );
    	return true;
    } else {
    	printf( "%s is no directory\n", pathname );
    }
    return false;
}

#endif
