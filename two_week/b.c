#include     <stdio.h>
void function_b(char *filename1,char *filename2,int offset)
{
        int ret;
        int n=0,i=0;
        FILE *fp2=fopen(filename2,"rb");
        FILE *fp1=fopen(filename1,"rb+");
        char ch;

        fseek(fp1,offset,SEEK_SET);

        while((ch=fgetc(fp2))!=EOF)
                n++;

        fseek(fp2,0,SEEK_SET);
        for(i=0;i<n;i++)
        {
                ch=fgetc(fp2);
                fputc(ch,fp1);
               ret=ftell(fp2);
               printf("%d\n",ret);
        }
        fclose(fp1);
        fclose(fp2);
        printf("b.c执行完成\n");

}
