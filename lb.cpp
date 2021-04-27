#include<iostream.h>

signed short int aaaS,bbbS,cccS,dddS;
int znam,rez;
long int shisl;
//(86/b-19+a)/(a*3/d-1) (7*d/4-1)/(1+32/c+d)
extern "C"
{
void Lab3S(void);
}

void F_C(void)
{
	shisl = (7*dddS/4-1);
	znam = (1+32/cccS+dddS);
	rez = shisl/znam;
	cout <<"\n\nC++: \n";
	cout <<"chisl= " << shisl << endl;
	cout <<"znam= " << znam << endl;
	cout <<"rez= " << rez << endl;
}

void F_ASM(void)
{
	Lab3S();

	cout <<"\n\ASM: \n";
	cout <<"chisl= " << shisl << endl;
	cout <<"znam= " << znam << endl;
	cout <<"rea= " << rez << endl;
}

int main(void)
{
	cout <<"Input aaaS: \n";
	cin >> aaaS;
	cout <<"Input bbbS: \n";
	cin >> bbbS;
	cout <<"Input dddS: \n";
	cin >> dddS;

	F_C();
	shisl = 0 ; znam = 0 ; rez = 0 ;
	F_ASM();

	return 0;
}



