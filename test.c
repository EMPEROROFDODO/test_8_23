#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//

//打印1-100中的奇数
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//return 0;

//ctrl+D 快速粘贴
//ctrl+L 快速删除
//int main()
//{
//	char m = 0;
//	scanf("%s",& m);
//	switch (m)
//	{
//			break;
//
//
//	}
//	return 0;
//}

//ctrl+c getchar 读取结束
int main()
{
	int ch = 0;

	while ((ch = getchar())!= EOF)
	{
		putchar(ch);
	}


	return 0;
}