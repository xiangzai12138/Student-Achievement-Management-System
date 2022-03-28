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
	printf(" \t #      ��ӭʹ��ѧ������ϵͳ     #                \n");
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
    printf("��ע�������˺�:\n");
	 scanf("%s", &username);
		printf("��ע����������:\n");
while ((temp = _getch()) != 13)
    {
        pwd[k++] = temp;
        putchar('*');
    }
    pwd[k] = '\0';
    printf("\n");
    system("pause");
    system("cls");
    printf("���¼:\n");
    for (i= 1; i<= 3; i++)
    {
        printf("�����������ʺ�:");
        scanf("%s", uusername);
        printf("��������������:");
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
            printf("\n��¼�ɹ�!!\nloading");
			i=1;
			for(k=0;k<20;k++){
				printf(".");
				Sleep(100);
			}
			system("cls");
			printf("��ӭ�������װ���%s",username);
			Sleep(500);
			getch();
			system("cls");
			homepage();
			break;
		}else printf("\n�û�����������Ч ����������\n");
		continue;
	}
	if(i==0)
			printf("\n�����������3�� ���˳�����\n");
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
	printf(" \t#         1.��ʾ�ɼ�              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         2.¼��ɼ�              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         3.ɾ����Ϣ              #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         4.����                  #\n");
	printf(" \t#                                 #\n");
	printf(" \t#         0.�˳�                  #\n");
	printf(" \t#                                 #\n");
	printf(" \t###################################\n");
	while((n!='1')&&(n!='2')&&(n!='3')&&(n!='4')&&(n!='5')&&(n!='0')){
		printf("\n��ѡ��:");
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
				printf("��¼����\n");
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
			printf("\nѡ�����\n");
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
			printf("\t\tδ����\n\n");
			break;
		case 1:
			printf("\t\t��ѧ������:\n\n");
			break;
		case 2:
			printf("\t\t���ɼ�1����:\n\n");
			break;
		case 3:
			printf("\t\t���ɼ�2����:\n\n");
			break;
		case 4:
			printf("\t\t���ɼ�3����:\n\n");
			break;
		case 5:
			printf("\t\t��ƽ���ɼ�����:\n\n");
	}
	printf("\tѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\tƽ���ɼ�\n");
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
		printf("ѧ��:\n");
		scanf("%d",&stu[count].num);
		numcheck=1;
		if(stu[count].num<0){
			printf("��Ҫ֪�������Ҫ������ȷ����!\n�ٴ�����:\n");
			numcheck=0;
		}
		for(i=0;i<count;i++){
			if(stu[count].num==stu[i].num){
				numcheck=0;
				printf("ѧ���ظ�������Ҫ֪��ѧ����Ψһ���ٴ�����:\n");
			}
		}
	}while(!numcheck);
	printf("����:\n");
	fflush(stdin);
	gets(stu[count].name);
	s=0;
	fflush(stdin);
	for(i=0;i<M;i++){
		printf("��%d�ſγɼ�:\n",i+1);
		scanf("%d",&stu[count].score[i]);
		s+=stu[count].score[i];
	}
	stu[count].avg=s/M;
	count++;
	printf("�Ƿ��������(y/n):\n");
	do{
		fflush(stdin);
		c=getchar();
		if(c=='y'||c=='Y'){
			if(count<10)	input();
			else {
				printf("��¼����\n");
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
				printf("��������'�Ƿ�'�ţ���������:\n");
		}
	}while((c!='y')&&(c!='n')&&(c!='Y')&&(c!='N'));
}


void del()
{
	int i,j,del_num,match=0;
	char c;
	system("cls");
	printf("������Ҫɾ����ѧ��ѧ��:\n");
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
	if(!match) printf("û��Ҫ�ҵ�ѧ����.\n");
	printf("�Ƿ����ɾ��?(y/n)");
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
		}else printf("�޷�ʶ���־��\n");
	}while((c!='y')&&(c!='n'));
}


void sort()
{
	int i,j;
	int choice;
	struct student temp;
	system("cls");
	printf("\t\t��ѡ��������:\n");
	printf("\t1.��ѧ������\n");
	printf("\t2.���ɼ�1����\n");
	printf("\t3.���ɼ�2����\n");
	printf("\t4.���ɼ�3����\n");
	printf("\t5.��ƽ���ɼ�����\n");
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
	printf("\n..\t���Ժ�.....");
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
	printf(" \t#        	ллʹ��           #\n");
	printf(" \t#                                  #\n");
	printf(" \t####################################\n\n");
	exit(0);
}