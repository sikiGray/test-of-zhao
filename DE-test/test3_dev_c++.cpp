#include<stdio.h>
#include<string.h>
int main()
{
	float yuwen,shuxue,yingyu;
	float avg=0,sum=0;
	
	char stuname[20],c[3];
	

	
	printf("\t--------========ѧ���ɼ�����========--------\n");
	do{
		printf("\n ������ѧ��������");
		scanf("%s",&stuname);
		printf("���ĳɼ���");
		scanf("%f",&yuwen);
		printf("��ѧ�ɼ���");
		scanf("%f",&shuxue);
		printf("Ӣ��ɼ���");
		scanf("%f",&yingyu);
		
		sum=yuwen+shuxue+yingyu;
		avg=sum/3;
		printf("ѧ��������%s\t�ܷ֣�%4.2f\tƽ���֣�%4.2f",stuname,sum,avg);
		printf("\n\n�Ƿ�������룿������yes��no�Իس���������\n");
		scanf("%s",c);
		 
	}while(strcmp(c,"yes")==0);
	
	return 0;
	
 } 
