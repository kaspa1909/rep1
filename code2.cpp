#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) 
{
	if(argc!=2) {
		cout<<"Podaj dokladnie 1 argument"<<endl;
	}			
	else{
		unsigned int code=argv[1][0]*argv[1][0];
		for(int i=0; i<strlen(argv[1]); i++){
			code+=argv[1][i];
		}
		float value=code / 12.f;
		cout<<argv[1]<<endl;
		cout<<code<<endl;
		cout<<value<<endl;
	}
	return 0;
}
