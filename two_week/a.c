#include <stdio.h>
void function_b();
int main()
{
	int offset;
	char str1[64] , str2[64],s[64];
	printf("请输入：文件1，文件2，偏移值。\n");
	scanf("%s%s%s",str1,str2,s);
	function_b(str1,str2,s);
	return 0;
}
