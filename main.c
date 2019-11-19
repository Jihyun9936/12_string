#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Lab02
int main(int argc, char *argv[]) {
	int i = 0;
	char str[4];
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0';
	
	printf("%s\n", str);
	
	while(str[i] != NULL){
		printf("%c", str[i]);
		i++;
	}
	
	printf("\n");
	return 0;
}*/

/*Lab03
main(){
	char src[] = "The worst things to eat before you sleep.";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copied string : %s\n", dst);
}*/

/*Lab04*/
main(){
	char str[30] = "happy C programming";
	
	printf("length of the string (%s) : %d", str, strlen(str));
}
