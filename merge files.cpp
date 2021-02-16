#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *sourcefile1;
    FILE *sourcefile2;
    FILE *destfile;
    char sourcepath1[100];
    char sourcepath2[100];
    char destpath[100];

    char ch;


    printf("Enter first source file: ");
    scanf("%s", &sourcepath1);
    printf("Enter second source file: ");
    scanf("%s", &sourcepath2);
    printf("Enter destination file: ");
    scanf("%s", &destpath);

    sourcefile1=fopen(sourcepath1, "r");
    sourcefile2=fopen(sourcepath2,"r");
    destfile=fopen(destpath,"w");

    if(sourcefile1 == NULL|| sourcefile2 == NULL|| destfile == NULL)
     {
	    printf("File does not exist");
	    exit(0);
     }
 
 while((ch = fgetc(sourcefile1)) != EOF)
 fputc(ch,destfile);
 while((ch = fgetc(sourcefile2)) != EOF)
 fputc(ch,destfile);
 
 printf("files merged successfully");

fclose(sourcefile1);
fclose(sourcefile2);
fclose(destfile);

return 0;
}
