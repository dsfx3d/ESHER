#define SAY_ESH cout<<"\n\n ESH!\n\n";
#define INVALID_OPT_ERR cout<<endl<<args[1]<<" : invalid option.\nHelp \"esh -h\" .\n"
#define INVALID_KEY_ERR cout<<endl<<"Error: invalid key.\nEnter a secure key (minimum 6 character).\n\nExample:\n\n esh -e \"filename.ext\" \"securekey\"\n"

/**/
void enc(int argc,char* args[]) {
	if(argc<4 || ((string)args[3]).length()<6) {
		INVALID_KEY_ERR;
		return;
	}
	Esher esher;
	ELI eli;
	PlainText pt = eli.readFile((string)args[2]);
	cout<<esher.esh(pt,args[3])<<endl;
}
/**/
void cne(int argc,char* args[]) {
	if(argc<4 || ((string)args[3]).length()<6) {
		INVALID_KEY_ERR;
		return;
	}
	Esher esher;
	cout<<esher.hse(args[2],args[3])<<endl;
}
/**/
