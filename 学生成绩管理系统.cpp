#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include "math.h"
#define N 10
#define M 3
struct student{
	int num;
	char name[15];
	int score[M];
	float avg;
};
int count;
int sort_type=0;
struct student stu[N];
void quit();
void set_pentagon(int *xr,int *yr,int *r);
void waiting();
void sort();
void del();
void input();
void display();
void homepage();

int  main()
{

	printf("\n\n");
	printf(" \t   # # # # #            # # # # #                 \n");
	printf(" \t #           #        #           #               \n");
	printf(" \t#               #  #               #              \n");
	printf(" \t#                                 #               \n");
	printf(" \t #      欢迎使用学生管理系统     #                \n");
	printf(" \t  #                             #                 \n");
	printf(" \t    #         2020.6.20       #                   \n");
	printf(" \t      #                     #                     \n");
	printf(" \t        #                 #                       \n");
	printf(" \t          #             #                         \n");
	printf(" \t             #       #                            \n");
	printf(" \t                 #                                \n");
	printf(" \t                                                  \n");
		
	int i,k=0;
    int r,xr,yr;
	char username[15],pwd[6],temp,uusername[15],upwd[6];
    printf("请注册您的账号:\n");
	 scanf("%s", &username);
		printf("请注册您的密码:\n");
while ((temp = _getch()) != 13)
    {
        pwd[k++] = temp;
        putchar('*');
    }
    pwd[k] = '\0';
    printf("\n");
    system("pause");
    system("cls");
    printf("请登录:\n");
    for (i= 1; i<= 3; i++)
    {
        printf("请输入您的帐号:");
        scanf("%s", uusername);
        printf("请输入您的密码:");
        k = 0;
        while ((temp = _getch()) != 13)
        {
            upwd[k++] = temp;
            putchar('*');
        }
        upwd[k] = '\0';
        Sleep(1);

        if (strcmp(pwd, upwd) == 0 && strcmp(username, uusername) == 0)
        {
            printf("\n登录成功!!\nloading");
			i=1;
			for(k=0;k<20;k++){
				printf(".");
				Sleep(100);
			}
			system("cls");
			printf("欢迎回来！亲爱的%s",username);
			Sleep(500);
			getch();
			system("cls");
			homepage();
			break;
		}else printf("\n用户名或密码无效 请重新输入\n");
		continue;
	}
	if(i==0)
			printf("\n连续输入错误3次 将退出程序\n");
	Sleep(2000);
	quit();
	return 0;
}

void set_pentagon(int *xr,int *yr,int *r)
{
    FILE *fp;
    char filename[20],ch;
    printf("Input the file's name:");
    gets(filename);
    if((fp=fopen(filename,"w+"))==NULL){
        printf("file open error.\n");
        exit(0);
    }
    printf("Please input the characters to the file:\n");
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
        putchar(ch);
    }
    fclose(fp);
    printf("\nPlease set the xr yr and r for the pentagon you have typed in:\n");
    scanf("%d",xr);
    scanf("%d",yr);
    scanf("%d",r);
}


void homepage()
{
	char n;
	printf("\n\n");
	printf(" \t###################################\n");
	printf(" \t#                                 #\n");
	printf(" \t#         1.显示成绩              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         2.录入成绩              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         3.删除信息              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         4.排序                  #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         0.退出                  #\n");
	printf(" \t#                                 #\n");
	printf(" \t###################################\n");
	while((n!='1')&&(n!='2')&&(n!='3')&&(n!='4')&&(n!='5')&&(n!='0')){
		printf("\n请选择:");
		fflush(stdin);
		scanf("%c",&n);
		switch(n){
		case '1':
			display();
			system("pause");
			break;
		case '2':
			if(count<N)	input();
			else{
				printf("记录已满\n");
				Sleep(2000);
				system("cls");
				homepage();
			}
		case '3':
			del();
			break;
		case '4':
			sort();
			break;
		case '0':
			quit();
			break;
		default:
			printf("\n选项错误\n");
		}
	}
}


void display()
{
	int i,j;
//	char c;
	system("cls");
	switch(sort_type)
	{
		case 0:
			printf("\t\t未排序\n\n");
			break;
		case 1:
			printf("\t\t按学号排序:\n\n");
			break;
		case 2:
			printf("\t\t按成绩1排序:\n\n");
			break;
		case 3:
			printf("\t\t按成绩2排序:\n\n");
			break;
		case 4:
			printf("\t\t按成绩3排序:\n\n");
			break;
		case 5:
			printf("\t\t按平均成绩排序:\n\n");
	}
	printf("\t学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
	for(i=0;i<count;i++){
		printf("\t%d\t%s",stu[i].num,stu[i].name);
		for(j=0;j<M;j++)
				printf("\t%3d",stu[i].score[j]);
		printf("\t%5.2f\n",stu[i].avg);
	}
	system("pause");
	system("cls");
	homepage();
}


void input()
{
	int i,numcheck;
	float s;
	char c;
	system("cls");
	do{
		printf("学号:\n");
		scanf("%d",&stu[count].num);
		numcheck=1;
		if(stu[count].num<0){
			printf("你要知道你必须要输入正确的数!\n再次输入:\n");
			numcheck=0;
		}
		for(i=0;i<count;i++){
			if(stu[count].num==stu[i].num){
				numcheck=0;
				printf("学号重复啦，你要知道学号是唯一，再次输入:\n");
			}
		}
	}while(!numcheck);
	printf("姓名:\n");
	fflush(stdin);
	gets(stu[count].name);
	s=0;
	fflush(stdin);
	for(i=0;i<M;i++){
		printf("第%d门课成绩:\n",i+1);
		scanf("%d",&stu[count].score[i]);
		s+=stu[count].score[i];
	}
	stu[count].avg=s/M;
	count++;
	printf("是否继续输入(y/n):\n");
	do{
		fflush(stdin);
		c=getchar();
		if(c=='y'||c=='Y'){
			if(count<10)	input();
			else {
				printf("记录已满\n");
				Sleep(2000);
				system("cls");
				homepage();
			}
		}
		else if(c=='n'||c=='N'){
			system("cls");
			homepage();
			break;
		}else {
				printf("叫你输入'是否'呐，重新输入:\n");
		}
	}while((c!='y')&&(c!='n')&&(c!='Y')&&(c!='N'));
}


void del()
{
	int i,j,del_num,match=0;
	char c;
	system("cls");
	printf("请输入要删除的学生学号:\n");
	scanf("%d",&del_num);
	waiting();
	for(i=0;i<count;i++)
	{
		if(stu[i].num==del_num)
		{
			match=1;
			for(j=i;j<count;j++)
				stu[j]=stu[j+1];
			count--;
		}
    }
	display();
	if(!match) printf("没有要找的学生号.\n");
	printf("是否继续删除?(y/n)");
	fflush(stdin);
	do{
		c=getchar();
		if(c=='y'||c=='Y'){
			count--;
			del();
		}
		else if(c=='n'||c=='N'){
			system("cls");
			homepage();
			break;
		}else printf("无法识别标志符\n");
	}while((c!='y')&&(c!='n'));
}


void sort()
{
	int i,j;
	int choice;
	struct student temp;
	system("cls");
	printf("\t\t请选择排序功能:\n");
	printf("\t1.按学号排序\n");
	printf("\t2.按成绩1排序\n");
	printf("\t3.按成绩2排序\n");
	printf("\t4.按成绩3排序\n");
	printf("\t5.按平均成绩排序\n");
	fflush(stdin);
	do{
		scanf("%d",&choice);
	}while((choice!=1)&&(choice!=2)&&(choice!=3)&&(choice!=4)&&(choice!=5));
	switch(choice){
		case 1:
			for(i=0;i<count;i++){
				for(j=0;j<count;j++){
					if(stu[i].num>stu[j].num){
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
				}
		
			}
		    sort_type=1;
			break;
		case 2:
			for(i=0;i<count;i++){
				for(j=0;j<count;j++){
					if(stu[i].score[0]>stu[j].score[0]){
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
				}
            
			}
		    sort_type=2;
			break;
		case 3:
			for(i=0;i<count;i++){
				for(j=0;j<count-1;j++){
					if(stu[i].score[1]>stu[j].score[1]){
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
				}
           
			}
		    sort_type=3;
			break;
		case 4:
			for(i=0;i<count;i++){
				for(j=0;j<count;j++){
					if(stu[i].score[2]>stu[j].score[2]){
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
				}
		
			}
		    sort_type=4;
			break;
		case 5:
			for(i=0;i<count;i++){
				for(j=0;j<count;j++){
					if(stu[i].avg>stu[j].avg){
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
				}
			
			}
		    sort_type=5;
			break;
	}
	system("cls");
	waiting();
	display();
	homepage();
}


void waiting()
{
	int i;
	printf("\n..\t请稍侯.....");
	for(i=0;i<25;i++)
	{
		switch(i%4)
		{
		case 1:printf("\b\\");break;
		case 2:printf("\b");break;
		case 3:printf("\b/");break;
		case 0:printf("\b|");break;
		}
	Sleep(1);
	}
	system("cls");
}

void quit()
{
//	int i;
	system("cls");
	printf("\n\n");
	printf(" \t####################################\n");
	printf(" \t#                                  #\n");
	printf(" \t#        	谢谢使用           #\n");
	printf(" \t#                                  #\n");
	printf(" \t####################################\n\n");
	exit(0);
}