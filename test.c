/* ����֣�ÿ�γ��Ųɹ�һ�ο��֣����ļ�����1ֻ��ÿ���޹�3ֻ��
�򵽶�2ֻ���򲻵���1ֻ�����ż���ԭ�п��10ֻ������10��֮�󣬼�������12ֻ��
�������ж��ٴγ����򵽿��ֵġ�
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
	printf("�����򵽿��ֵĴ�����:%d�Ρ�", j);
	system("pause");
	return 0;
}

//˼·��  ���㻨����ͬʱ����õ���
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
//for (i = 0; i <= 10; i++)//iΪ�򵽵Ĵ���
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
//	printf("�򵽿��ֵĴ����� %d ��\n", i);
//	system("pause");
//	return 0;
//}




