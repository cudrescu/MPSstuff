#include<stdio.h>

// intoarce versiunea up-ului: 4 sau 6
int verify(char* ip) {
	
}

int main(int argc, char ** argv) {
	
	//verificare ca inputul e corect	
	if(argc < 2){
		printf("Usagae: ./verify IPv4/IPv6\n");
		return 0;	
	}

	//verificare si afisare rezultat
	int version = verify(argv[1]);
	if(version == 4)
		printf("This is a valid IPv4");
	if(version == 6)
		printf("This is a valid IPv6");
	if(version == -1)
		printf("You stupid fuck, this is an invalid IPv4/IPv6\n");
	
	
	return 0;	
}
