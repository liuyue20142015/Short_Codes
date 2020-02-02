/* 买口罩：每次出门采购一次口罩，消耗家里库存1只，每次限购3只。
买到多2只，买不到少1只。老张家里原有库存10只，出门10次之后，家里现有12只。
请问他有多少次出门买到口罩的。
*/
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int s1 = 10;
	int s2 = 12;
	int i = 0;
	int j = 0;

	for (i = 1; i <= 10; i++)
	{
		s1 -= 1;
	}

	for (j = 1; j < 10; j++)
	{
		if (j * 3 == s2)
			break;
	}
	printf("出门买到口罩的次数是:%d次。", j);
	system("pause");
	return 0;
}

//思路二  计算花销的同时计算得到数
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int s1 = 0;
//	int s2 = 12;
//	int i = 0;
//	int j = 0;
//
//for (i = 0; i <= 10; i++)//i为买到的次数
//{
//		s1 = 10;
//		s1 = s1 + i * 2;
//		j = 10 - i;
//		s1 = s1 - j * 1;
//		if (s1 == s2 )
//			
//			break;
//	
//}
//	printf("买到口罩的次数是 %d 次\n", i);
//	system("pause");
//	return 0;
//}




