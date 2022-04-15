#include <stdio.h>
void function_b();
int main()
{
	int offset;
	char str1[64] , str2[64];
	printf("请输入：文件1，文件2，偏移值。\n");
	scanf("%s%s%d",str1,str2,&offset);
	function_b(str1,str2,offset);
	return 0;
}
