#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[80];
	int a;
	int i=1;
	char b,c[100];
	FILE * fp1 = fopen("export.gpx","r");
	if (fp1==NULL)
	{
		printf ("不能打开文件！");
		exit(1);
		 
	}
	printf("能打开文件！\n");
	/*rewind(fp1);
	fseek(fp1,100l,0);
	fscanf(fp1,)
	printf()*/
	fgets(str,500,fp1); 
	printf("%s",str);
	fclose(fp1);

	return 0 ;
