#define PARAM_PATH (string)args[2]
#define PARAM_KEY (string)args[3]
#define PARAM_NEW_PATH (string)args[5]

#define SAY_ESH cout<<"\n\n ESH!\n\n";
#define INVALID_OPT_ERR cout<<endl<<args[1]<<" : invalid option.\nHelp \"esh -h\" .\n"
#define INVALID_KEY_ERR cout<<endl<<"Error: invalid key.\nEnter a secure key (minimum 6 character).\n\nExample:\n\n esh -e \"filename.ext\" \"securekey\"\n"
#define VALIDATE_ARGS if(argc<4||((string)args[3]).length()<6){INVALID_KEY_ERR;return;}
#define CHECK_IF_DOPE_FILE(pt,m) string sub=pt.substr(0,5);if(!sub.compare("dope_")){cout<<"Already Encrypted.\nRun as Administrator.\n";return;}
/**/
void enc(int argc,char* args[]) {
	//????????????
	VALIDATE_ARGS;
	//????????????
	
	Esher esher;
	ELI eli;
	CypherText ct ="dope_";
	PlainText pt = eli.readFile(PARAM_PATH,0);
	
	CHECK_IF_DOPE_FILE(pt, "Already Encrypted.\nRun as Administrator.\n");
	
	ct += esher.esh(pt,PARAM_KEY);
	eli.writeFile(PARAM_PATH, ct);
	cout<<ct<<endl;
}
/**/
void cne(int argc,char* args[]) {
	//????????????
	VALIDATE_ARGS;
	//????????????
	
	Esher esher;
	ELI eli;
	PlainText pt;
	CypherText cipher = eli.readFile(PARAM_PATH,0);

	pt = esher.hse(cipher.substr(5,cipher.length()-5), PARAM_KEY);
	cout<<pt<<endl;	

	if(argc>4) {
		if(((string)args[4])[1]=='o') {
			if(PARAM_PATH!=PARAM_NEW_PATH) eli.writeFile(PARAM_NEW_PATH,pt);
		}
	}
}
/**/
