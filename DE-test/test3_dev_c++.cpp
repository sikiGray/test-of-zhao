#include<stdio.h>
#include<string.h>
int main()
{
	float yuwen,shuxue,yingyu;
	float avg=0,sum=0;
	
	char stuname[20],c[3];
	

	
	printf("\t--------========学生成绩管理========--------\n");
	do{
		printf("\n 请输入学生姓名：");
		scanf("%s",&stuname);
		printf("语文成绩：");
		scanf("%f",&yuwen);
		printf("数学成绩：");
		scanf("%f",&shuxue);
		printf("英语成绩：");
		scanf("%f",&yingyu);
		
		sum=yuwen+shuxue+yingyu;
		avg=sum/3;
		printf("学生姓名：%s\t总分：%4.2f\t平均分：%4.2f",stuname,sum,avg);
		printf("\n\n是否继续输入？请输入yes或no以回车键结束。\n");
		scanf("%s",c);
		 
	}while(strcmp(c,"yes")==0);
	
	return 0;
	
 } 
