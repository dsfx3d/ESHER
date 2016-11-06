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

#endif
