#include     <stdio.h>
void function_b(char *filename1,char *filename2,char s[])
{
        int ret;
        int n=0,i=0,t=0;
        FILE *fp2=fopen(filename2,"rb");
        FILE *fp1=fopen(filename1,"rb+");
        char ch;
        long sum=0;
  for(i=2;s[i];i++)
  {
            if(s[i]<='9')
                    t=s[i]-'0';
            else
                    t=s[i]-'A'+10;
            sum=sum*16+t;
    }

        fseek(fp1,sum,SEEK_SET);
        while((ch=fgetc(fp2))!=EOF)
                n++;
        fseek(fp2,0,SEEK_SET);
        for(i=0;i<n;i++)
        {
                ch=fgetc(fp2);
                fputc(ch,fp1);
               ret=ftell(fp2);
               printf("已经拷贝第%d字节\n",ret);
        }
        fclose(fp1);
        fclose(fp2);
        printf("b.c执行完成\n");
}
