#include<stdio.h>
#include<windows.h>
#include <graphics.h>
#include "math.h"
#include <time.h> 
#define PI 3.14159265
#define M 3
#include<conio.h>
#include<stdlib.h> 
#include<string.h>
#define N 30
#pragma comment(lib,"winmm.lib" )  //��������ͷ�ļ���
#include <mmsystem.h>  //��������ͷ�ļ�



void menu(void);
void sound1(int freq,int t);
void pause(int t);
void xueronghua(void);
void xiaoxingxing(void);
void happybirthday(void);
void display(char *qm);
void quit();


void input(struct student stu[]);     //����
void amend(struct student stu[]);  //�޸�
void remove(struct student stu[]); //ɾ��
void namefind(struct student stu[]);//�����ֲ�ѯ
void numfind(struct student stu[]);//��ѧ�Ų�ѯ
void classfind(struct student stu[]);//���༶��ѯ
void printfsort1(struct student stu[]); //�ܷ�����
void printfsort2(struct student stu[]);//��������
void printfsort3(struct student stu[]);//������
void savefile(struct student stu[]);//������ļ�
void readfile(struct student stu[]);//�����ļ�


void food();
void show();
void move();
void turn();
void check();
void ini();
void start();

int n = 1;
struct student
{	
	int num;
	char name[20];
	int Class;
	char classname1[20]; 
	int score1;
	char classname2[20]; 
	int score2;
	int score;
	
};

int main()
{
	int x = 0;
	// ������СΪ 800 * 600 �Ļ�ͼ����
	initgraph(800, 600);

	// ����ԭ�� (0, 0) Ϊ��Ļ���루Y��Ĭ������Ϊ����
	setorigin(400, 300);

	// ʹ�ð�ɫ��䱳��
	setbkcolor(WHITE);
	cleardevice();


	for (int y = 0; y < 1000; y++)
	{
		while (1)
		{
			if (x >= 210) break;

			x += 30;
			cleardevice();

			// ����
			
			setfillcolor(RGB(7, 190, 234));						// ͷ
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// ��
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -169, 0 + x, -95, 56, 56);			// ����
			fillroundrect(0 + x, -169, 63 + x, -95, 56, 56);			// ����

			setfillcolor(BLACK);
			solidcircle(-16 + x, -116, 6);							// ������
			solidcircle(16 + x, -116, 6);							// ������

			setfillcolor(RGB(201, 62, 0));						// ����
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// ����
			fillcircle(0+x, 10, 14);	// ��

			line(-42 + x, -73, -90 + x, -91);							// ����
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);


			// ������

			line(-96 + x, 32, 0 + x, 81);                          // �ֱ�
			line(-90 + x, 70, -58 + x, 81);

			line(-96 + x, 30, -96 + x, 178);                       // ��

			line(80 + x, 32, 138 + x, 72);
			line(96 + x, 96, 116 + x, 110);

			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// ���ڲ�

			setfillcolor(WHITE);						// ��
			fillcircle(140 + x, 99, 28);

			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// ��
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);

			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + x, 160, BLACK);


			setfillcolor(WHITE);						// ��Ƥ
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// �ð�ɫ���β�������Ķ�Ƥ

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // �ڴ�

			line(-96 + x, 32, 0 + x, 81);                          // �ֱ�
			line(-90 + x, 70, -58 + x, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);


			// ������
			setfillcolor(RGB(169, 38, 0));				// ����
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// ��������
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// �����ϵĶ�
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// �����ϵ���·
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);


			Sleep(400);

			////////////////////////////////////

			cleardevice();
			// ����
			setfillcolor(BLACK);
			fillpie(-110 + x, -210, -50 + x, -140, PI, PI); //���䣨mine��
			fillpie(110 + x, -210, 50 + x, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// ͷ
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// ��
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -180, 0 + x, -100, 56, 56);			// ����
			fillroundrect(0 + x, -180, 63 + x, -100, 56, 56);			// ����

			setfillcolor(BLACK);
			solidcircle(-16 + x, -165, 6);							// ������
			solidcircle(16 + x, -165, 6);							// ������

			setfillcolor(RGB(201, 62, 0));						// ����
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// ����
			arc(-25 + x, -220, 25 + x, -4, PI * 5 / 4, PI * 7 / 4);	// ��

			line(-42 + x, -73, -90 + x, -91);							// ����
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);

			// ������
			line(-80 + x, 32, -138 + x, 72);					// �ֱ�(��)109,52
			line(80 + x, 32, 138 + x, 72);
			line(-96 + x, 96, -116 + x, 110);					// �ֱ�(��)131,103  484+2601  55.54
			line(96 + x, 96, 116 + x, 110);

			line(-96 + x, 85, -96 + x, 178);					// �����
			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// ���ڲ�

			setfillcolor(WHITE);						// ��
			fillcircle(-140 + x, 99, 28);
			fillcircle(140 + x, 99, 28);
			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// ��
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);
			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));				// ���������ɫ
			floodfill(0 + x, 100, BLACK);

			setfillcolor(WHITE);						// ��Ƥ
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// �ð�ɫ���β�������Ķ�Ƥ

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // �ڴ�


			// ������
			setfillcolor(RGB(169, 38, 0));				// ����
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// ��������
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// �����ϵĶ�
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// �����ϵ���·
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);

			setfillcolor(RGB(196,187,27)); 
			fillroundrect(-250 + x, 83, -220 + x, 117, 50, 50);
			fillroundrect(-230 + x, 60, -200 + x, 140, 50, 50);
			fillroundrect(-210 + x, 50, -180 + x, 150, 50, 50);
			fillroundrect(-190 + x, 40, -160 + x, 160, 50, 50);                                            //��㣨mine��
			fillroundrect(-170 + x, 30, -140 + x, 170, 50, 50);
			
			
			Sleep(400);
		}
	}
	///////////////////////////////////////////////////////////////////////////////////

	for ( ; y < 1000; y++)
	{
		while (1)
		{
			if (x >= 210) break;

			x += 30;
			cleardevice();

			// ����

			setfillcolor(RGB(7, 190, 234));						// ͷ
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// ��
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -169, 0 + x, -95, 56, 56);			// ����
			fillroundrect(0 + x, -169, 63 + x, -95, 56, 56);			// ����

			setfillcolor(BLACK);
			solidcircle(-16 + x, -116, 6);							// ������
			solidcircle(16 + x, -116, 6);							// ������

			setfillcolor(RGB(201, 62, 0));						// ����
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// ����
			fillcircle(0 + x, 10, 14);	// ��

			line(-42 + x, -73, -90 + x, -91);							// ����
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);


			// ������

			line(-96 + x, 32, 0 + x, 81);                          // �ֱ�
			line(-90 + x, 70, -58 + x, 81);

			line(-96 + x, 30, -96 + x, 178);                       // ��

			line(80 + x, 32, 138 + x, 72);
			line(96 + x, 96, 116 + x, 110);

			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// ���ڲ�

			setfillcolor(WHITE);						// ��
			fillcircle(140 + x, 99, 28);

			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// ��
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);

			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + x, 160, BLACK);


			setfillcolor(WHITE);						// ��Ƥ
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// �ð�ɫ���β�������Ķ�Ƥ

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // �ڴ�

			line(-96 + x, 32, 0 + x, 81);                          // �ֱ�
			line(-90 + x, 70, -58 + x, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);


			// ������
			setfillcolor(RGB(169, 38, 0));				// ����
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// ��������
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// �����ϵĶ�
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// �����ϵ���·
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);


			Sleep(400);

			////////////////////////////////////

			cleardevice();
			// ����
			setfillcolor(BLACK);
			fillpie(-110 + x, -210, -50 + x, -140, PI, PI); //���䣨mine��
			fillpie(110 + x, -210, 50 + x, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// ͷ
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// ��
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -180, 0 + x, -100, 56, 56);			// ����
			fillroundrect(0 + x, -180, 63 + x, -100, 56, 56);			// ����

			setfillcolor(BLACK);
			solidcircle(-16 + x, -165, 6);							// ������
			solidcircle(16 + x, -165, 6);							// ������

			setfillcolor(RGB(201, 62, 0));						// ����
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// ����
			arc(-25 + x, -220, 25 + x, -4, PI * 5 / 4, PI * 7 / 4);	// ��

			line(-42 + x, -73, -90 + x, -91);							// ����
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);

			// ������
			line(-80 + x, 32, -138 + x, 72);					// �ֱ�(��)109,52
			line(80 + x, 32, 138 + x, 72); 
			line(-96 + x, 96, -116 + x, 110);					// �ֱ�(��)131,103  484+2601  55.54
			line(96 + x, 96, 116 + x, 110);

			line(-96 + x, 85, -96 + x, 178);					// �����
			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// ���ڲ�

			setfillcolor(WHITE);						// ��
			fillcircle(-140 + x, 99, 28);
			fillcircle(140 + x, 99, 28);
			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// ��
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);
			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));				// ���������ɫ
			floodfill(0 + x, 100, BLACK);

			setfillcolor(WHITE);						// ��Ƥ
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// �ð�ɫ���β�������Ķ�Ƥ

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // �ڴ�


			// ������
			setfillcolor(RGB(169, 38, 0));				// ����
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// ��������
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// �����ϵĶ�
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// �����ϵ���·
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);

			setfillcolor(RGB(196, 187, 27));
			fillroundrect(-250 + x, 83, -220 + x, 117, 50, 50);
			fillroundrect(-230 + x, 60, -200 + x, 140, 50, 50);
			fillroundrect(-210 + x, 50, -180 + x, 150, 50, 50);
			fillroundrect(-190 + x, 40, -160 + x, 160, 50, 50);                                            //��㣨mine��
			fillroundrect(-170 + x, 30, -140 + x, 170, 50, 50);


			Sleep(400);
		}
	}
	    //��������
	closegraph();
   system("cls");
   int i,k=0;
   printf("�������ͽ���,loading");
			i=1;
			for(k=0;k<20;k++)
			{
				printf(".");
				Sleep(100);
			}
			system("cls");

				printf("\n\n");
	printf(" \t   # # # # #            # # # # #                 \n");
	printf(" \t #           #        #           #               \n");
	printf(" \t#               #  #               #              \n");
	printf(" \t#                                 #               \n");
	printf(" \t #      ��ӭʹ�ö๦���ۺ�ϵͳ     #                \n");
	printf(" \t  #                             #                 \n");
	printf(" \t    #         2020.6.20       #                   \n");
	printf(" \t      #                     #                     \n");
	printf(" \t        #                 #                       \n");
	printf(" \t          #             #                         \n");
	printf(" \t             #       #                            \n");
	printf(" \t                 #                                \n");
	printf(" \t                                                  \n");

	Sleep(2000);
	system("cls");

{
	while(1)
	{
		system("cls");
		int a;
		struct student stu[N],*p=stu;
		printf("----------------------------------------------------\n");
		
		printf("               ѧ���ɼ�����ϵͳ                     \n");
		
		printf(" ��1�� ����ѧ����Ϣ\n");
		printf(" ��2�� �޸�ѧ����Ϣ\n");
		printf(" ��3�� ɾ��ѧ����Ϣ\n");
		printf(" ��4�� ��������ѯѧ����Ϣ\n");
		printf(" ��5�� ��ѧ�Ų�ѯѧ����Ϣ\n");
		printf(" ��6�� ���༶��ѯѧ����Ϣ\n");
		printf(" ��7�� �鿴ѧ���ܷ�������Ϣ\n");
		printf(" ��8�� �鿴ѧ������������Ϣ\n");
		printf(" ��9�� �鿴ѧ����������Ϣ\n");
		printf(" ��10�� ����ѧ����Ϣ�ļ�\n");
		printf(" ��11�� ����ѧ����Ϣ�ļ�\n");
		printf(" ��12�� �˳�ѧ������ϵͳ����������㲥ϵͳ\n");
		printf(" ��13�� �˳�ѧ������ϵͳ����̰����С��Ϸ\n");
		printf(" ��0�� �˳��๦���ۺ�ϵͳ\n");
		printf("----------------------------------------------------\n");
		
		printf(" ����0��13ѡ��ϵͳ����\n");
		scanf("%d",&a);
		
		switch(a)
		{
		case 0: printf("�ɹ��˳�ѧ���ɼ�����ϵͳ!\n");
			    quit();
		case 1: input(p);
			break;
		case 2: amend(p);
			break;
		case 3: remove(p);
			break;
		case 4: namefind(p);
			break;
		case 5: numfind(p);
			break;
		case 6: classfind(p);
			break;
		case 7: printfsort1(p);
			break;
		case 8: printfsort2(p);
			break;
		case 9: printfsort3(p);
			break;
		case 10: readfile(p);
			break;
		case 11: savefile(p);
			break;
		case 12: printf("		�ɹ��˳�ѧ���ɼ�����ϵͳ!\n");
			     Sleep(1000);
				 menu();
		case 13:printf("		�ɹ��˳�ѧ���ɼ�����ϵͳ!\n");
			    Sleep(1000); 
				start();
			    ini();
			    show();
		default: 		printf(" �����������������\n");system("pause");break;
			
		}
	
	}
	 return 0;
	
}
}

void input(struct student stu[])//OK
{
	printf(" �������ѧ����Ϣ������\n");
	int b,c=0;
	scanf("%d",&c);
	for(int i=1;i<=c;i++)
	{
		
		printf("  ��%d��ѧ�� ����:ѧ�� ���� �༶ �γ�����1 �ɼ�1 �γ�����2 �ɼ�2 \n",i);
		scanf("%d%s%d%s%d%s%d",&stu[n].num,&stu[n].name,&stu[n].Class,&stu[n].classname1,&stu[n].score1,&stu[n].classname2,&stu[n].score2);
		
		stu[n].score=stu[n].score1+stu[n].score2;
		n++;
		
	}
	if(c!=0&&c>0)
		printf("\n��ӳɹ�!\n\n");  
	system("pause");  
	system("cls");
	
	printf(" ����0������ӣ�����1������ӡ�\n");
	scanf("%d",&b);
	switch(b)
	{
	case 0: printf("		������ӳɹ�!\n");
		system("pause");
		break;
	case 1: input(stu); 
		break;
	default: 		printf(" �����������������\n");system("pause");
		break;
	}
	
}
void amend(struct student stu[])  //�޸�
{
	int i,j,o,l,b;  
    char a[20]; 
	printf(" ѡ���޸ķ�ʽ1.ѧ�� 2.����\n");
		scanf("%d",&l);
	switch(l)
	{
	case 1:
	printf("�����޸�ѧ����ѧ��:\n");
	scanf("%d",&b); 
	for(i=0;i<n;i++)  
    {  
        if(b==stu[i].num)  
        {  
            printf("ѧ�ţ�%d\n",stu[i].num);  
            printf("������%s\n",stu[i].name);  
            printf("�༶��%d\n",stu[i].Class);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score2);  
            printf("�ܳɼ���%d\n\n",stu[i].score); 
			o=i;
			break;
			
		}
	}
	if(i==n) 
	{
		printf("���������ѯѧ��������\n");system("pause"); 
		return;
	}
		break;
	case 2:
    printf("�����޸�ѧ��������:\n");  
    scanf("%s",&a);                           //ͨ��������Ҫ�޸���Ϣ��ѧ���ҵ�   
    for(i=0;i<=n;i++)  
    {    
        if(strcmp(a,stu[i].name)==0)  
        {  
            printf("ѧ�ţ�%d\n",stu[i].num);  
            printf("������%s\n",stu[i].name);  
            printf("�༶��%d\n",stu[i].Class);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score2);  
            printf("�ܳɼ���%d\n\n",stu[i].score);  
            o=i;
			break;
        }
	}
		if(i==n)
		{
			printf("���������ѯѧ��������\n");system("pause"); 
			return;
		}
      
	break;
	}
	printf(" ����0��9ѡ���޸ĵ�����\n");
    printf("1.�޸�ѧ��\n2.�޸�����\n3.�޸İ༶\n4.�޸ĳɼ�1\n5.�޸ĳɼ�2\n6.�޸��ܷ�\n��ѡ��");  
    scanf("%d",&j);                                                  //ѡ���޸ĵ���Ϣ  
    switch(j)                                                       
    {  
	case 1:  
		printf("ѧ���޸�Ϊ��");  
		scanf("%d",&stu[o].num);  
		break;  
		
	case 2:  
		printf("�����޸�Ϊ��");  
		scanf("%s",&stu[o].name);  
		break;  
	case 3:  
		printf("�༶�޸�Ϊ��");  
		scanf("%d",&stu[o].Class);  
		break;  
	case 4:  
		printf("�ɼ�1�޸�Ϊ��");  
		scanf("%d",&stu[o].score1);  
		break;  
	case 5:  
		printf("�ɼ��޸�Ϊ��");  
		scanf("%d",&stu[o].score2);  
		break;  
	case 6:  
		printf("�ܷ��޸�Ϊ��");  
		scanf("%d",&stu[o].score);  
		break;  
    }  
    printf("\n�޸ĳɹ�!\n\n");  
    system("pause");  
    system("cls");  
}
void remove(struct student stu[]) //ɾ��OK
{
	
    char a[20];  
    printf("������Ҫɾ��ѧ��������\n");  
    scanf("%s",&a);  
    for(int i=0;i<n;i++)  
        if(strcmp(a,stu[i].name)==0)  
        {  
            while(i<n)  
            {  
                stu[i]=stu[i+1];  
                i++;  
            }  
            n--;  
		}
		printf("\nɾ���ɹ�!\n\n");
		system("pause");  
		system("cls"); 
}
void namefind(struct student stu[]) // ok
{	
    char a[20];  
    printf("������Ҫ��ѯ��������\n");  
    scanf("%s",&a);  
    for(int i=0;i<=n;i++)  
    {  
        if(strcmp(a,stu[i].name)==0)  
        {  
            printf("ѧ�ţ�%d\n",stu[i].num);  
            printf("������%s\n",stu[i].name);  
            printf("�༶��%d\n",stu[i].Class);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score2);  
            printf("�ܳɼ���%d\n\n",stu[i].score);  
            break;
		}
		if(i==n) printf("���������ѯѧ��������\n");
	}
	system("pause");  
    system("cls");  
	
}
void numfind(struct student stu[])
{
	int a;  
    printf("������Ҫ��ѯ��ѧ�ţ�\n");  
    scanf("%d",&a);  
    for(int i=0;i<n;i++)  
    {  
        if(a==stu[i].num)  
        {  
            printf("ѧ�ţ�%d\n",stu[i].num);  
            printf("������%s\n",stu[i].name);  
            printf("�༶��%d\n",stu[i].Class);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s�ĳɼ�%d\n",stu[i].classname1,stu[i].score2);  
            printf("�ܳɼ���%d\n\n",stu[i].score);  
			break;
		}
		if(i==n) printf("���������ѯѧ��������\n");
	}
	system("pause");  
    system("cls");  
}
void classfind(struct student stu[]) //OK
{
	int a,b; 
    printf("������Ҫ��ѯ�İ༶��\n");  
    scanf("%d",&a);  
    for(int i=0;i<n;i++)  
    {  
        if(a==stu[i].Class)  
        {  
            printf("%d.������%s ѧ�ţ�%d\n",i,stu[i].name,stu[i].num);  
			
		}
	}
	printf("����Ҫ�鿴ѧ��ǰ�����\n");
	scanf("%d",&b);  
	if(stu[b].num>0)
	{
		printf("ѧ�ţ�%d\n",stu[b].num);  
		printf("������%s\n",stu[b].name);  
		printf("�༶��%d\n",stu[b].Class);  
		printf("%s�ĳɼ�%d\n",stu[b].classname1,stu[b].score1);  
		printf("%s�ĳɼ�%d\n",stu[b].classname1,stu[b].score2);  
		printf("�ܳɼ���%d\n\n",stu[b].score); 
	}
	else printf("���������ѯѧ��������\n");
	
	system("pause");  
    system("cls"); 
}
void printfsort1(struct student stu[]) //�ܷ�����OK
{
	struct student t;  
    int i,j;  
    printf("	%d ��ѧ���ܷ�����:\n",n-1);  
    for(i=1;i<n;i++)  
    {  
        for(j=i+1;j<n;j++)                 
        {  
			
            if(stu[i].score<=stu[j].score)    
            {  
                t=stu[i];                 
                stu[i]=stu[j];                 
                stu[j]=t;                  
            }  
        }  
    }  
	printf("����\tѧ��\t\t����\t�༶\t�ܷ�\n");  
	for(i=1;i<n;i++)  
	{ 		    
		printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score);
		
	}
    system("pause");  
    system("cls");  
}
void printfsort2(struct student stu[])//��������
{
	struct student t;  
    int i,j,a;  
	printf("ѡ��Ҫ�鿴�Ŀ�Ŀ����:1.%s 2.%s\n",stu[n-1].classname1,stu[n-1].classname2);
	scanf("%d",&a); 
	switch(a)                                                       
    {  
	case 1: 
		printf("	%d ��ѧ������:\n",n-1);  
		for(i=1;i<n;i++)  
		{  
			for(j=i+1;j<n;j++)                 
			{  
				
				if(stu[i].score1<=stu[j].score1)    
				{  
					t=stu[i];                 
					stu[i]=stu[j];                 
					stu[j]=t;                  
				}  
			}  
		}  
		printf("����\tѧ��\t\t����\t�༶\t%s����\n",stu[n-1].classname1);  
		for(i=1;i<n;i++)  
		{ 		    
			printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score1);
			
		} 
		break;
	case 2: 
		printf("	%d ��ѧ������:\n",n);  
		for(i=1;i<n;i++)  
		{  
			for(j=i+1;j<n;j++)                 
			{  
				
				if(stu[i].score2<=stu[j].score2)    
				{  
					t=stu[i];                 
					stu[i]=stu[j];                 
					stu[j]=t;                  
				}  
			}  
		}  
		printf("����\tѧ��\t����\t�༶\t%s����\n",stu[n-1].classname2);  
		for(i=1;i<n;i++)  
		{ 		    
			printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score2);
			
		} break;
	}
	system("pause");  
    system("cls");  
}
void printfsort3(struct student stu[])//������OK
{
	int count1=0,count2=0; 
	float s;
	int i,j,a;  
	printf("ѡ��Ҫ�鿴��������:1.�༶ 2.�꼶\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("������Ҫ�鿴�İ༶:\n");
		scanf("%d",&j);
		printf("\t%d������ѧ������:\n",j);
		printf("\tѧ��\t\t����\t�༶\t�ܷ�\n"); 
		for(i=1;i<n;i++)  
		{  
			if(stu[i].Class==j) count2++;
		
			if(stu[i].score>=180&&stu[i].Class==j)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		} 
		if(count2==0) 
			printf("û�дﵽ�����ѧ��\n");
		else
		{
		s=(float)count1/count2;
		printf("%d��������Ϊ:%f\n\n",j,s);
		}
		count1=count2=0;
		printf("\t%d�಻����ѧ������:\n",j);
		printf("\tѧ��\t\t����\t�༶\t�ܷ�\n"); 
		for(i=1;i<n;i++)  
		{  
			if(stu[i].Class==j) count2++;
		
			if(stu[i].score<120&&stu[i].Class==j)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		} 
		if(count2==0) printf("û�в������ѧ��\n");
		else
		{
		s=(float)count1/count2;
		printf("%d�಻������Ϊ:%f\n",j,s);
		}



		break;
	case 2:
		printf("\t�꼶����ѧ������:\n");
		printf("\tѧ��\t\t����\t�༶\t�ܷ�\n"); 
		for(i=1;i<n;i++)  
		{  
			
			if(stu[i].score>=180)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		}  
		if(count1==0) printf("û�дﵽ�����ѧ��\n");
		s=(float)count1/(n-1);
		printf("�꼶������Ϊ:%f\n\n",s);
		count1=count2=0;
		printf("\t�꼶������ѧ������:\n");
		printf("\tѧ��\t\t����\t�༶\t�ܷ�\n"); 
		for(i=1;i<n;i++)  
		{  
			if(stu[i].score<120)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		} 
		if(count1==0) printf("û�в������ѧ��\n");
		else
		{
		s=(float)count1/(n-1);
		printf("�꼶��������Ϊ:%f\n",s);
		}

		break;
	}
	
    system("pause");  
    system("cls");
}

void readfile(struct student stu[])
{
	int i =1,j=n;
	char file[200];
	
	FILE *fp;
	printf("������Ҫ������ļ�λ�ú��ļ���:\n");
	scanf("%s",&file);
	
	//char file[200]="C:\\Users\\23607\\Desktop\\c.txt";
	
	if((fp=fopen(file,"r"))==NULL) 
	{
		printf("�����������ļ��޷���\n");
		system("pause"); return;
	}
	
	while(!feof(fp))                     //��ȡһ�����ݺ�ָ��ָ����һ�����ݣ������ж��Ƿ�ָ�����һ��   
    {   
        fscanf(fp,"%d%s%d%s%d%s%d",&stu[n].num,&stu[n].name,&stu[n].Class,&stu[n].classname1,&stu[n].score1,&stu[n].classname2,&stu[n].score2);
		
		n++;
    } 
	n--;

	printf("����ѧ���ѵ���!\n");
	for(i=j;i<n;i++)
	{
		
		printf("ѧ�ţ�%d\t",stu[i].num);  
		printf("������%s\t",stu[i].name);  
		printf("�༶��%d\t",stu[i].Class);  
		printf("%s��",stu[i].classname1);
		printf("�ɼ�:%d\t",stu[i].score1);  
		printf("%s��",stu[i].classname2);
		printf("�ɼ�:%d\t",stu[i].score2);
		stu[i].score=stu[i].score1+stu[i].score2;
		printf("�ܳɼ�:%d\t",stu[i].score);
		printf("\n");
	}
	
	
	fclose(fp);
	system("pause");  
	system("cls");
}

void savefile(struct student stu[])
{
	int i =1;
	char file[200];
	
	FILE *fp;
	printf("������Ҫ������ļ�λ�ú��ļ���:\n");
	scanf("%s",&file);
	
	//char file[200]="C:\Users\23607\Desktop\c.txt";
	
	if((fp=fopen(file,"w"))==NULL) 
	{
		printf("�����������ļ��޷���\n");	system("pause"); return;
	}
	
	//	for (i=1;i<n;i++) fwrite(&stu[i],sizeof(struct student),sizeof(struct student),fp);    
	
	for (i=1;i<n;i++)                     
    {   
        fprintf(fp,"%d %s %d %s %d %s %d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].classname1,stu[i].score1,stu[i].classname2,stu[i].score2);

		
    } 
	
	printf("����ѧ���ѱ��浽λ��Ϊ%s���ļ�!\n",file);
	for(i=1;i<n;i++)
	{
		
		printf("ѧ�ţ�%d\t",stu[i].num);  
		printf("������%s\t",stu[i].name);  
		printf("�༶��%d\t",stu[i].Class);  
		printf("%s��",stu[i].classname1);
		printf("�ɼ�:%d\t",stu[i].score1);  
		printf("%s��",stu[i].classname2);
		printf("�ɼ�:%d\t",stu[i].score2);
		stu[i].score=stu[i].score1+stu[i].score2;
		printf("�ܳɼ�:%d\t",stu[i].score);
		printf("\n");
	}
	
	
	fclose(fp);
	system("pause");  
	system("cls");
}

/////////////////////////////////////////////////////////////////////////////////////////////////
int s=1,t;
void menu(void)
{
    int sel;
    do{
        system("cls");
       int i,k=0;
       printf("�����㲥ϵͳ��ʼ����,loading");
			i=1;
			for(k=0;k<20;k++)
			{
				printf(".");
				Sleep(100);
			}
			system("cls");
        printf("\n\t\t********��ӭ��������㲥ϵͳ********\n\n");
        printf("\t\t\t1.ѩ�޻�\n");
        printf("\t\t\t2.С����\n");
        printf("\t\t\t3.HAPPY BIRTHDAY\n");
        printf("\t\t\t4.�˳������㲥ϵͳ����̰����С��Ϸ\n");
        printf("\t\t\t0.�˳��๦���ۺ�ϵͳ\n");
        printf("\n\n\t\t************************************");
        printf("\n��ѡ��(0��4)\n");
        scanf("%d",&sel);
        switch(sel)
		{
            case 1:xueronghua();break;
            case 2:xiaoxingxing();break;
            case 3:happybirthday();break;
            case 4:Sleep(1000); ini();show();
			case 0:printf("     �ɹ��˳������㲥ϵͳ!\n");quit();
        }
    }while(1);
}

void xueronghua(void)   /*ѩ�޻�����*/
{
     char *jp="iddgwwwqqgfffddddfghhhggg ddgwwwqqgfffddgghjqqqqqwpggjhgddgqqq hhqwwqjjjgggddgwwwqqgfffddgghjqqqqqq";
     s=2;
     t=4*s;
     //gotoxy(40,20);
     printf("\t\t\n�����͸�����ѩ�޻�");
     printf("\n\t\t\tѩ�޻�,ѩ�޻����峿ӭ���ҿ��š�");
     printf("\n\t\t\tС���ף�����������ҿ��ֵ�ҡ�Ρ�");
     printf("\n\t\t\t��ѩ��Ļ�����Ը��ҷ�����Զ����������");
     printf("\n\t\t\tѩ�޻���ѩ�޻�����Զף���Ҽ��硣\n");
     display(jp);

     printf("ѩ�޻��������");
     printf("��������������˵�");
     getch();
     menu();
}

void xiaoxingxing(void)    /*С��������*/
{
     char *jp="oaagghhggffddssaaggffddssggffddssaagghhggffddssaaaagghhggffddssaaggffddssggffddssaagghhggffddssaa";
     s=2;
     t=4*s;
     //gotoxy(40,20);
     cprintf("�����͸�����С����");
     printf("\n\t\t\tһ��һ�������������춼��С���ǣ�");
     printf("\n\t\t\t������շŹ���������ǧ��С�۾���");
     printf("\n\t\t\t̫����������������ѻ�ؼ�һȺȺ��");
     printf("\n\t\t\t����գ��С�۾�������˸˸��������\n");
     display(jp);

     cprintf("С�����������");
     cprintf("��������������˵�");
     getch();
     menu();
}

void happybirthday(void)  /*���տ�������*/
{
     char*jp="ippppbbnnbbaammmmbbnnbbssaaaabbggddaammmhfddaassaaappp";
     s=1;
     t=4*s;
    // gotoxy(40,20);
     cprintf("�����͸�����HAPPY BIRTHDAY");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU.\n");
     display(jp);

     cprintf("HAPPY BIRTHDAY�������");
     cprintf("��������������˵�");
     getch();
     menu();
}


void display(char *qm)  /*���๦��*/
{
    int i,freq;
    while(*qm++!='\0')
	{
          i=1;
          switch(*qm)
		  {
                case 'k':  t=1*s; i=0; break;
                case 'l':  t=2*s; i=0; break;
                case 'i':  t=4*s; i=0; break;
                case 'o':  t=6*s; i=0; break;
                case 'p':  pause(t);  i=0; break;
                case 'a':  freq=523; break;
                case 's':  freq=587; break;
                case 'd':  freq=659; break;
                case 'f':  freq=698; break;
                case 'g':  freq=784; break;
                case 'h':  freq=880; break;
                case 'j':  freq=988; break;
                case 'z':  freq=262; break;
                case 'x':  freq=294; break;
                case 'c':  freq=330; break;
                case 'v':  freq=349; break;
                case 'b':  freq=392; break;
                case 'n':  freq=440; break;
                case 'm':  freq=494; break;
                case 'q':   freq=1047; break;
                case 'w':  freq=1175; break;
                case 'e':   freq=1319; break;
                case 'r':   freq=1397; break;
                case 't':   freq=2568; break;
                case 'y':   freq=1760; break;
                case 'u':   freq=1976; break;
                default:   i=0; break;
            }
            if(i)
                sound1(freq,t);
			
    }
}

void sound1(int freq,int t)  /*��������*/
{
     int n;
     Beep(freq,500);
     n=t+clock();
     while(n>clock());
     Beep(0,0);
}

void pause(int t)      /*��ͣ����*/
{
    int n;
    n=t+clock();
    while(n>clock())
    Beep(0,0);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////

int  dy[4] = { 0, 1, 0, -1 };
int  dx[4] = { -1, 0, 1, 0 };
int sum = 5;  //���ܳ���
int over = 0; 
int speed; 
char map[17][17];

struct snake 
{
    int x, y;  //�������� 
    int dir;  //����ֻ����ͷ�ķ��������õģ� 
} A[100];
void start()
{
	system("cls");
 int a,k;
	   printf("��Դ������,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
                Sleep(50);
			}
	   printf("\n��ͼ������,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
                Sleep(50);
			}
       printf("\n��Ϸ��ʼ����,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
				Sleep(100);
			}
      
			system("cls");
}
void ini() 
{  //��ʼ������
       system("cls");
      
        printf("\n\t\t********��ӭ����̰����С��Ϸ********\n");
		printf("\n\t\t*             ��Ϸ�淨             *\n");
	    printf("\n\t\t*     'W''S''A''D'������������     *\n");
		printf("\n\t\t*          ��Խ���ܵ�Խ��~~~       *\n");
		printf("\n\t\t************************************\n");
        printf("\n\t\t���������ʼ\n");
    char ch = _getch();
    system("cls");
    speed =500;
    over = 0;
    sum = 5;
    int i, j;
    for (i = 0; i < 100; i++) 
	{  //��ʼ����ͷ�����������
        A[i].dir = 0;
        A[i].x = 0;
        A[i].y = 0;
    }
    A[0].x = 1; A[0].y = 1;  //��ͼ���Ͻ�����һ������Ϊ5����
    A[1].x = 1; A[1].y = 2;
    A[2].x = 1; A[2].y = 3;
    A[3].x = 1; A[3].y = 4;
    A[4].x = 1; A[4].y = 5; A[4].dir = 1;
    srand(time(0));
    for (i = 0; i < 17; i++) {  //���õ�ͼ
        for (j = 0; j < 17; j++) 
		{
            map[i][j] = '*';
        }
    }
    for (i = 1; i < 16; i++)
	{
        for (j = 1; j < 16; j++)
		{
            map[i][j] = ' ';
        }
    }
    //map[6][5] = '*'; map[6][6] = '*'; map[6][7] = '*';
    //map[7][5] = '*'; map[7][7] = '*';
    map[A[4].x][A[4].y] = 'H';  //������ͷ
    for (i = 0; i < sum - 1; i++) 
	{  //��������
        map[A[i].x][A[i].y] = 'X';
    }
    food();
}


void show() {  //��ʾ���� 
    int i, j, x, y;
    for (i = 0; i < 17; i++) 
	{  //��ʾ����
        for (j = 0; j < 17; j++)
		{
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
    while (1) 
	{
        Sleep(speed);  //����ˢ���ٶ�
        turn();
        move();
        if (over)
		{  //��������������Խ��еĲ��� 
            while (1)
			{
                char ch = _getch();
                if (ch == 113)
				{  //���롮q������ 
                    quit();
                }
                else if (ch == 114) 
				{  //���롮r�����¿�ʼ 
                    ini();
                    break;
                }
            }
        }
        system("cls");  //���� 
        for (i = 0; i < 17; i++) 
		{  //������ʾ����
            for (j = 0; j < 17; j++) 
			{
                printf("%c", map[i][j]);
            }
            printf("\n");
        }
    }
}

void food() {  //����ʳ��
    int x, y;
    while (1) 
	{
        x = (int)(15 * rand() / (RAND_MAX + 1.0));  //�������һ��ʳ������
        y = (int)(15 * rand() / (RAND_MAX + 1.0));
        if (map[x][y] == ' ') 
		{  //����ǿո����ڸô�����ʳ��
            map[x][y] = 'O';
            break;
        }
    }
}


void move() {  //���ƶ�
    int i, x, y;
    int t = sum;  //t��¼��ǰ���ܳ��� 
    check();  //�ƶ�ǰ��鰴��ǰ�����ƶ�һ��������
    if (t == sum) {  //û�гԵ�ƻ��
        for (i = 0; i < sum - 1; i++) {
            if (i == 0) {  //��β���괦��ɿո񣬰���β������ǰһ����������� 
                map[A[i].x][A[i].y] = ' ';
                A[i].x = A[i + 1].x;
                A[i].y = A[i + 1].y;
            }
            else {  //ÿ���������궼��Ϊ��ǰһ�����������
                A[i].x = A[i + 1].x;
                A[i].y = A[i + 1].y;
            }
            map[A[i].x][A[i].y] = 'X';  //�ѵ�ͼ���������괦���ַ����óɡ�X��
        }
        A[sum - 1].x = A[sum - 1].x + dx[A[sum - 1].dir];  //��ͷ����ǰ�����ƶ�һ�� 
        A[sum - 1].y = A[sum - 1].y + dy[A[sum - 1].dir];
        map[A[sum - 1].x][A[sum - 1].y] = 'H';  //�ѵ�ͼ����ͷ���괦���ַ����óɡ�H��
    }
    else {  //�Ե�ƻ����sum���1��
        map[A[sum - 2].x][A[sum - 2].y] = 'X';  //�ѵ�ͼ��ԭ��ͷ���괦���ַ����óɡ�X��
        A[sum - 1].x = A[sum - 2].x + dx[A[sum - 2].dir];  //����ͷ��������ԭ��ͷ�ص�ǰ�����ƶ�һ�������� 
        A[sum - 1].y = A[sum - 2].y + dy[A[sum - 2].dir];
        A[sum - 1].dir = A[sum - 2].dir;  //����ͷ����Ϊԭ��ͷ�ķ���
        map[A[sum - 1].x][A[sum - 1].y] = 'H';  //�ѵ�ͼ����ͷ���괦���ַ����óɡ�H��
        food();
    }
   
}

void check() {  //����Ƿ��������߳Ե�ʳ��
    int x, y, i, j;
    x = A[sum - 1].x + dx[A[sum - 1].dir];  //��¼����ǰ�����ƶ�һ�����ͷ������ 
    y = A[sum - 1].y + dy[A[sum - 1].dir];
    if (map[x][y] == '*' || map[x][y] == 'X') {  //�����ͼ�ϸ����괦�ַ�Ϊ��*����X�������� 
        if (x != A[0].x || y != A[0].y) 
		{  //��β���� 
            map[8][4] = 'G'; map[8][5] = 'A'; map[8][6] = 'M'; map[8][7] = 'E';  //�����GAME OVER�� 
            map[8][9] = 'O'; map[8][10] = 'V'; map[8][11] = 'E'; map[8][12] = 'R';
            map[8][8] = ' ';
            system("cls");
            for (i = 0; i < 17; i++) {
                for (j = 0; j < 17; j++) {
                    printf("%c", map[i][j]);
                }
                printf("\n");
            }
            printf("Input 'r' to restart\nInput 'q' to quit\n");
            over = 1;
        }
    }
    else if (map[x][y] == 'O') 
	{  //�Ե�ƻ�� 
        sum++;  //�����ܳ���1 
        speed = ((600 - sum * 20)>100) ? (600 - sum * 20) : 100; //�ٶȼӿ� 
    }
}

void turn() {  //ת��
    if (_kbhit())
	{
        char dir = _getch();  //��ȡ����ļ� 
        switch (dir) 
		{  //�ı䷽�� 
        case 119: A[sum - 1].dir = (A[sum - 1].dir == 2)?2:0; break;
        case 100: A[sum - 1].dir = (A[sum - 1].dir == 3)?3:1; break;
        case 115: A[sum - 1].dir = (A[sum - 1].dir == 0)?0:2; break;
        case 97: A[sum - 1].dir = (A[sum - 1].dir == 1)?1:3; break;
        }
    }
}

void quit()
{
//	int i;
	system("cls");
	printf("\n\n");
	printf(" \t####################################\n");
	printf(" \t#                                  #\n");
	printf(" \t#          ллʹ��,�ټ�!!!        #\n");
	printf(" \t#                                  #\n");
	printf(" \t####################################\n");
	Sleep(1000);
	exit(0);
}