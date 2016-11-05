#define PARAM_PATH (string)args[2]
#define PARAM_OPT (string)args[1]
#define PARAM_NEW_PATH (string)args[4]
#define PARAM_KEY (string)args[3]

#define SAY_ESH cout<<"\n\n ESH!\n\n";

#define PRE_CIPHERED_ERR "Already Encrypted.\nRun as Administrator.\n"
#define INVALID_OPT_ERR cout<<endl<<args[1]<<" : invalid option.\nHelp \"esh -h\" .\n"
#define INVALID_KEY_ERR cout<<endl<<"Error: invalid key.\nEnter a secure key (minimum 6 character).\n\nExample:\n\n esh -e \"filename.ext\" \"securekey\"\n"
#define FILE_NOT_DOPED_ERR cout<<endl<<"\nError: The file passed is not doped.\n\nCheck if the file was Encrypted using some other utility.\nCan only process doped files.\n"

#define VALIDATE_ARGS(KEY) if((KEY).length()<6){INVALID_KEY_ERR;return;}
#define IS_DOPE_FILE() if(!sub.compare("dope_"))
#define CHECK_IF_DOPE_FILE(pt,m) string sub=pt.substr(0,5);IS_DOPE_FILE(){cout<<m;return;}

/**/
void enc(int argc,char* args[]) {
	//????????????
	VALIDATE_ARGS(PARAM_KEY);
	//????????????
	
	Esher esher;
	ELI eli;
	CypherText ct ="dope_";
	PlainText pt = eli.readFile(PARAM_PATH,0);
	
	pt += PARAM_KEY;
	
	CHECK_IF_DOPE_FILE(pt, PRE_CIPHERED_ERR);
	
	ct += esher.esh(pt,PARAM_KEY);
	eli.writeFile(PARAM_PATH, ct);
}
/**/
void cne(int argc,char* args[]) {
	int keyindex = 3;
	if(argc>4) keyindex=5;
	string _eshkey = args[keyindex];
	
	//????????????
	VALIDATE_ARGS(_eshkey);
	//????????????
	
	
	Esher esher;
	ELI eli;
	PlainText pt;
	CypherText cipher = eli.readFile(PARAM_PATH,0);
	string sub = cipher.substr(0,5);
	
	IS_DOPE_FILE() { //shouldn't proccess plain files
		//NAICE	
	} else {
		FILE_NOT_DOPED_ERR;
		return;
	}
	
	pt = esher.hse(cipher.substr(5,cipher.length()-_eshkey.length()-5), _eshkey);

	if(((string)(args[3]))[1]=='o' && argc>4 ) { //if flag at argument 3
		eli.writeFile(PARAM_NEW_PATH,pt);
	} else {
		
	}
	
	if((PARAM_OPT).length()<3) { // for -d
		cout<<pt<<endl;	
	} else if((PARAM_OPT)[2]=='o'){ // for -do 
		eli.writeFile(PARAM_PATH,pt);
	}
}
/**/
void login(int argc, char* args[]) {
	
}
