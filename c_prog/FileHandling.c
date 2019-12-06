#include<stdio.h>
//
void main()
{
    FILE *fp;
    char ch;
    //fp = fopen("C:\\Users\\Neosphere\\Desktop\\demo.txt","w");
    //fp = fopen("demo.txt","a");
    //fprintf(fp,"This is a Demo Text.");
    //fclose(fp);

    fp = fopen("FileHandling.c","r");
    if(fp == NULL)
    {
        printf("File Not Found! ");
    }
    else
    {
        while(!feof(fp))
        {
            ch = fgetc(fp);
            putchar(ch);
        }
    }
}
//feof(fp) ==> end of file check
// EOF ==> End of File
//a ==> old content + new content
//w ==> new content overwrites old content ==> old delete ==> new insert
//r ==> read ==> file does not exist ==> create gardaina



output:

    Enter a paragraph:
        This is a paragraph
        This is another statement
        kjcjnc
        dclkdcdnc
        sddcsnvdn

        ==> demo.txt

        read ==>
        The file Contents are :

        This is a paragraph
        This is another statement
        kjcjnc
        dclkdcdnc
        sddcsnvdn













