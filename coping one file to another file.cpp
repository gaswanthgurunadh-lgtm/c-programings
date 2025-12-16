#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("palindrome.cpp","r");
	if(fs==NULL)
	{
		printf("file does noy exist");
		exit(0);
	}
	ft=fopen("target.txt","w");
	if(ft==NULL)
	{
		printf("unable to open a file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch !=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file copied succesfully");
	return 0;
}
