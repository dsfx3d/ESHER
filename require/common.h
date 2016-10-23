#ifndef COMMON_dsfx3d
#define COMMON_dsfx3d

#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <fstream>
#include <streambuf>
using namespace std;

#define loop(m) for(int i=0; i<m; i++)
#define loop2(i,m) for(int i=0; i<m; i++)
#define loop3(i,m,n) for(int i=m; i<=n; i++)


/*
	convert char number to int
	PARAM: numberal char
	PRE  :
	POST : returns converted int
*/
int getInt(char c) {
	int i = c - '0';
	
	if(i>10) return i/10;
	if(i<0) return (i*i)/10;
	return i;
}

#endif
