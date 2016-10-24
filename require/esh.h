#define PARAM_PATH (string)args[2]
#define PARAM_KEY (string)args[3]

#define SAY_ESH cout<<"\n\n ESH!\n\n";
#define INVALID_OPT_ERR cout<<endl<<args[1]<<" : invalid option.\nHelp \"esh -h\" .\n"
#define INVALID_KEY_ERR cout<<endl<<"Error: invalid key.\nEnter a secure key (minimum 6 character).\n\nExample:\n\n esh -e \"filename.ext\" \"securekey\"\n"
#define VALIDATE_ARGS if(argc<4||((string)args[3]).length()<6){INVALID_KEY_ERR;return;}
#define CHECK_IF_DOPE_FILE string sub=pt.substr(0,5);if(!sub.compare("dope_")){cout<<"Already Encrypted.\nRun as Administrator.\n";return;}
/**/
void enc(int argc,char* args[]) {
	//????????????
	VALIDATE_ARGS;
	//????????????
	
	Esher esher;
	ELI eli;
	
	PlainText pt = eli.readFile(PARAM_PATH,0);
	CHECK_IF_DOPE_FILE;
	
	CypherText ct ="dope_";
	ct += esher.esh(pt,PARAM_KEY);
	
	cout<<ct<<endl;
	eli.writeFile(PARAM_PATH, ct);
}
/**/
void cne(int argc,char* args[]) {
	//????????????
	VALIDATE_ARGS;
	//????????????
	
	Esher esher;
	ELI eli;
	CypherText cipher = eli.readFile(PARAM_PATH,0);
	
	EshKey key = PARAM_KEY;
	string sub=cipher.substr(0,5);
	cout<<sub<<endl;
	if(!sub.compare("dope_")) {
		loop(5) {
			key = key.substr(1,key.length())+key.substr(key.length()-1,key.length());
		}	
	}
	cout<<key<<endl;
	PlainText pt = esher.hse(cipher, key);
	
	cout<<pt;
}
/**/
