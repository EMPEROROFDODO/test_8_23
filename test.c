#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//

//��ӡ1-100�е�����
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

//ctrl+D ����ճ��
//ctrl+L ����ɾ��
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

//ctrl+c getchar ��ȡ����
int main()
{
	int ch = 0;

	while ((ch = getchar())!= EOF)
	{
		putchar(ch);
	}


	return 0;
}