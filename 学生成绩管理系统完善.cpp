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
#pragma comment(lib,"winmm.lib" )  //导入声音头文件库
#include <mmsystem.h>  //导入声音头文件



void menu(void);
void sound1(int freq,int t);
void pause(int t);
void xueronghua(void);
void xiaoxingxing(void);
void happybirthday(void);
void display(char *qm);
void quit();


void input(struct student stu[]);     //输入
void amend(struct student stu[]);  //修改
void remove(struct student stu[]); //删除
void namefind(struct student stu[]);//按名字查询
void numfind(struct student stu[]);//按学号查询
void classfind(struct student stu[]);//按班级查询
void printfsort1(struct student stu[]); //总分排名
void printfsort2(struct student stu[]);//单科排名
void printfsort3(struct student stu[]);//优秀率
void savefile(struct student stu[]);//保存成文件
void readfile(struct student stu[]);//导入文件


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
	// 创建大小为 800 * 600 的绘图窗口
	initgraph(800, 600);

	// 设置原点 (0, 0) 为屏幕中央（Y轴默认向下为正）
	setorigin(400, 300);

	// 使用白色填充背景
	setbkcolor(WHITE);
	cleardevice();


	for (int y = 0; y < 1000; y++)
	{
		while (1)
		{
			if (x >= 210) break;

			x += 30;
			cleardevice();

			// 画脸
			
			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -169, 0 + x, -95, 56, 56);			// 右眼
			fillroundrect(0 + x, -169, 63 + x, -95, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + x, -116, 6);							// 右眼球
			solidcircle(16 + x, -116, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// 人中
			fillcircle(0+x, 10, 14);	// 嘴

			line(-42 + x, -73, -90 + x, -91);							// 胡子
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);


			// 画身体

			line(-96 + x, 32, 0 + x, 81);                          // 手臂
			line(-90 + x, 70, -58 + x, 81);

			line(-96 + x, 30, -96 + x, 178);                       // 腿

			line(80 + x, 32, 138 + x, 72);
			line(96 + x, 96, 116 + x, 110);

			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(140 + x, 99, 28);

			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// 脚
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);

			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + x, 160, BLACK);


			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // 口袋

			line(-96 + x, 32, 0 + x, 81);                          // 手臂
			line(-90 + x, 70, -58 + x, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);


			Sleep(400);

			////////////////////////////////////

			cleardevice();
			// 画脸
			setfillcolor(BLACK);
			fillpie(-110 + x, -210, -50 + x, -140, PI, PI); //耳朵（mine）
			fillpie(110 + x, -210, 50 + x, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -180, 0 + x, -100, 56, 56);			// 右眼
			fillroundrect(0 + x, -180, 63 + x, -100, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + x, -165, 6);							// 右眼球
			solidcircle(16 + x, -165, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// 人中
			arc(-25 + x, -220, 25 + x, -4, PI * 5 / 4, PI * 7 / 4);	// 嘴

			line(-42 + x, -73, -90 + x, -91);							// 胡子
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);

			// 画身体
			line(-80 + x, 32, -138 + x, 72);					// 手臂(上)109,52
			line(80 + x, 32, 138 + x, 72);
			line(-96 + x, 96, -116 + x, 110);					// 手臂(下)131,103  484+2601  55.54
			line(96 + x, 96, 116 + x, 110);

			line(-96 + x, 85, -96 + x, 178);					// 腿外侧
			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(-140 + x, 99, 28);
			fillcircle(140 + x, 99, 28);
			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// 脚
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);
			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));				// 身体填充蓝色
			floodfill(0 + x, 100, BLACK);

			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // 口袋


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);

			setfillcolor(RGB(196,187,27)); 
			fillroundrect(-250 + x, 83, -220 + x, 117, 50, 50);
			fillroundrect(-230 + x, 60, -200 + x, 140, 50, 50);
			fillroundrect(-210 + x, 50, -180 + x, 150, 50, 50);
			fillroundrect(-190 + x, 40, -160 + x, 160, 50, 50);                                            //便便（mine）
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

			// 画脸

			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -169, 0 + x, -95, 56, 56);			// 右眼
			fillroundrect(0 + x, -169, 63 + x, -95, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + x, -116, 6);							// 右眼球
			solidcircle(16 + x, -116, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// 人中
			fillcircle(0 + x, 10, 14);	// 嘴

			line(-42 + x, -73, -90 + x, -91);							// 胡子
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);


			// 画身体

			line(-96 + x, 32, 0 + x, 81);                          // 手臂
			line(-90 + x, 70, -58 + x, 81);

			line(-96 + x, 30, -96 + x, 178);                       // 腿

			line(80 + x, 32, 138 + x, 72);
			line(96 + x, 96, 116 + x, 110);

			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(140 + x, 99, 28);

			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// 脚
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);

			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 150, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-94 + x, 160, BLACK);


			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // 口袋

			line(-96 + x, 32, 0 + x, 81);                          // 手臂
			line(-90 + x, 70, -58 + x, 81);
			setfillcolor(RGB(7, 190, 234));
			floodfill(-30 + x, 80, BLACK);


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);


			Sleep(400);

			////////////////////////////////////

			cleardevice();
			// 画脸
			setfillcolor(BLACK);
			fillpie(-110 + x, -210, -50 + x, -140, PI, PI); //耳朵（mine）
			fillpie(110 + x, -210, 50 + x, -140, PI, PI);


			setfillcolor(RGB(7, 190, 234));						// 头
			setlinecolor(BLACK);
			fillroundrect(-135 + x, -206, 135 + x, 54, 248, 248);

			setfillcolor(WHITE);								// 脸
			fillellipse(-115 + x, -144, 115 + x, 46);

			fillroundrect(-63 + x, -180, 0 + x, -100, 56, 56);			// 右眼
			fillroundrect(0 + x, -180, 63 + x, -100, 56, 56);			// 左眼

			setfillcolor(BLACK);
			solidcircle(-16 + x, -165, 6);							// 右眼球
			solidcircle(16 + x, -165, 6);							// 左眼球

			setfillcolor(RGB(201, 62, 0));						// 鼻子
			fillcircle(0 + x, -92, 15);

			line(0 + x, -77, 0 + x, -4);								// 人中
			arc(-25 + x, -220, 25 + x, -4, PI * 5 / 4, PI * 7 / 4);	// 嘴

			line(-42 + x, -73, -90 + x, -91);							// 胡子
			line(42 + x, -73, 90 + x, -91);
			line(-41 + x, -65, -92 + x, -65);
			line(41 + x, -65, 92 + x, -65);
			line(-42 + x, -57, -90 + x, -39);
			line(42 + x, -57, 90 + x, -39);

			// 画身体
			line(-80 + x, 32, -138 + x, 72);					// 手臂(上)109,52
			line(80 + x, 32, 138 + x, 72); 
			line(-96 + x, 96, -116 + x, 110);					// 手臂(下)131,103  484+2601  55.54
			line(96 + x, 96, 116 + x, 110);

			line(-96 + x, 85, -96 + x, 178);					// 腿外侧
			line(96 + x, 85, 96 + x, 178);
			arc(-10 + x, 168, 10 + x, 188, 0, PI);				// 腿内侧

			setfillcolor(WHITE);						// 手
			fillcircle(-140 + x, 99, 28);
			fillcircle(140 + x, 99, 28);
			fillroundrect(-2 + x, 178, -112 + x, 205, 24, 24);	// 脚
			fillroundrect(2 + x, 178, 112 + x, 205, 24, 24);
			line(-96 + x, 30, 96 + x, 30);

			setfillcolor(RGB(7, 190, 234));				// 身体填充蓝色
			floodfill(0 + x, 100, BLACK);

			setfillcolor(WHITE);						// 肚皮
			fillcircle(0 + x, 81, 75);
			solidrectangle(-60 + x, 4, 60 + x, 24);				// 用白色矩形擦掉多余的肚皮

			pie(-58 + x, 23, 58 + x, 139, PI, 0);			    // 口袋


			// 画铃铛
			setfillcolor(RGB(169, 38, 0));				// 绳子
			fillroundrect(-100 + x, 23, 100 + x, 42, 12, 12);

			setfillcolor(RGB(245, 237, 38));			// 铃铛外形
			fillcircle(0 + x, 49, 19);

			setfillcolor(BLACK);						// 铃铛上的洞
			solidellipse(-4 + x, 50, 4 + x, 57);
			setlinestyle(PS_SOLID, 3);
			line(0 + x, 57, 0 + x, 68);

			setlinestyle(PS_SOLID, 1);					// 铃铛上的纹路
			line(-16 + x, 40, 16 + x, 40);
			line(-18 + x, 44, 18 + x, 44);

			setfillcolor(RGB(196, 187, 27));
			fillroundrect(-250 + x, 83, -220 + x, 117, 50, 50);
			fillroundrect(-230 + x, 60, -200 + x, 140, 50, 50);
			fillroundrect(-210 + x, 50, -180 + x, 150, 50, 50);
			fillroundrect(-190 + x, 40, -160 + x, 160, 50, 50);                                            //便便（mine）
			fillroundrect(-170 + x, 30, -140 + x, 170, 50, 50);


			Sleep(400);
		}
	}
	    //动画结束
	closegraph();
   system("cls");
   int i,k=0;
   printf("动画欣赏结束,loading");
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
	printf(" \t #      欢迎使用多功能综合系统     #                \n");
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
		
		printf("               学生成绩管理系统                     \n");
		
		printf(" 【1】 输入学生信息\n");
		printf(" 【2】 修改学生信息\n");
		printf(" 【3】 删除学生信息\n");
		printf(" 【4】 按姓名查询学生信息\n");
		printf(" 【5】 按学号查询学生信息\n");
		printf(" 【6】 按班级查询学生信息\n");
		printf(" 【7】 查看学生总分排名信息\n");
		printf(" 【8】 查看学生单科排名信息\n");
		printf(" 【9】 查看学生优秀率信息\n");
		printf(" 【10】 导入学生信息文件\n");
		printf(" 【11】 保存学生信息文件\n");
		printf(" 【12】 退出学生管理系统，进入歌曲点播系统\n");
		printf(" 【13】 退出学生管理系统，打开贪吃蛇小游戏\n");
		printf(" 【0】 退出多功能综合系统\n");
		printf("----------------------------------------------------\n");
		
		printf(" 输入0到13选择系统功能\n");
		scanf("%d",&a);
		
		switch(a)
		{
		case 0: printf("成功退出学生成绩管理系统!\n");
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
		case 12: printf("		成功退出学生成绩管理系统!\n");
			     Sleep(1000);
				 menu();
		case 13:printf("		成功退出学生成绩管理系统!\n");
			    Sleep(1000); 
				start();
			    ini();
			    show();
		default: 		printf(" 输入错误，请重新输入\n");system("pause");break;
			
		}
	
	}
	 return 0;
	
}
}

void input(struct student stu[])//OK
{
	printf(" 输入添加学生信息的人数\n");
	int b,c=0;
	scanf("%d",&c);
	for(int i=1;i<=c;i++)
	{
		
		printf("  第%d个学生 输入:学号 名字 班级 课程名字1 成绩1 课程名字2 成绩2 \n",i);
		scanf("%d%s%d%s%d%s%d",&stu[n].num,&stu[n].name,&stu[n].Class,&stu[n].classname1,&stu[n].score1,&stu[n].classname2,&stu[n].score2);
		
		stu[n].score=stu[n].score1+stu[n].score2;
		n++;
		
	}
	if(c!=0&&c>0)
		printf("\n添加成功!\n\n");  
	system("pause");  
	system("cls");
	
	printf(" 输入0结束添加，输入1继续添加。\n");
	scanf("%d",&b);
	switch(b)
	{
	case 0: printf("		结束添加成功!\n");
		system("pause");
		break;
	case 1: input(stu); 
		break;
	default: 		printf(" 输入错误，请重新输入\n");system("pause");
		break;
	}
	
}
void amend(struct student stu[])  //修改
{
	int i,j,o,l,b;  
    char a[20]; 
	printf(" 选择修改方式1.学号 2.姓名\n");
		scanf("%d",&l);
	switch(l)
	{
	case 1:
	printf("输入修改学生的学号:\n");
	scanf("%d",&b); 
	for(i=0;i<n;i++)  
    {  
        if(b==stu[i].num)  
        {  
            printf("学号：%d\n",stu[i].num);  
            printf("姓名：%s\n",stu[i].name);  
            printf("班级：%d\n",stu[i].Class);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score2);  
            printf("总成绩：%d\n\n",stu[i].score); 
			o=i;
			break;
			
		}
	}
	if(i==n) 
	{
		printf("输入错误或查询学生不存在\n");system("pause"); 
		return;
	}
		break;
	case 2:
    printf("输入修改学生的名字:\n");  
    scanf("%s",&a);                           //通过输入需要修改信息的学号找到   
    for(i=0;i<=n;i++)  
    {    
        if(strcmp(a,stu[i].name)==0)  
        {  
            printf("学号：%d\n",stu[i].num);  
            printf("姓名：%s\n",stu[i].name);  
            printf("班级：%d\n",stu[i].Class);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score2);  
            printf("总成绩：%d\n\n",stu[i].score);  
            o=i;
			break;
        }
	}
		if(i==n)
		{
			printf("输入错误或查询学生不存在\n");system("pause"); 
			return;
		}
      
	break;
	}
	printf(" 输入0到9选择修改的内容\n");
    printf("1.修改学号\n2.修改姓名\n3.修改班级\n4.修改成绩1\n5.修改成绩2\n6.修改总分\n请选择：");  
    scanf("%d",&j);                                                  //选择修改的信息  
    switch(j)                                                       
    {  
	case 1:  
		printf("学号修改为：");  
		scanf("%d",&stu[o].num);  
		break;  
		
	case 2:  
		printf("姓名修改为：");  
		scanf("%s",&stu[o].name);  
		break;  
	case 3:  
		printf("班级修改为：");  
		scanf("%d",&stu[o].Class);  
		break;  
	case 4:  
		printf("成绩1修改为：");  
		scanf("%d",&stu[o].score1);  
		break;  
	case 5:  
		printf("成绩修改为：");  
		scanf("%d",&stu[o].score2);  
		break;  
	case 6:  
		printf("总分修改为：");  
		scanf("%d",&stu[o].score);  
		break;  
    }  
    printf("\n修改成功!\n\n");  
    system("pause");  
    system("cls");  
}
void remove(struct student stu[]) //删除OK
{
	
    char a[20];  
    printf("请输入要删除学生的姓名\n");  
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
		printf("\n删除成功!\n\n");
		system("pause");  
		system("cls"); 
}
void namefind(struct student stu[]) // ok
{	
    char a[20];  
    printf("输入需要查询的姓名：\n");  
    scanf("%s",&a);  
    for(int i=0;i<=n;i++)  
    {  
        if(strcmp(a,stu[i].name)==0)  
        {  
            printf("学号：%d\n",stu[i].num);  
            printf("姓名：%s\n",stu[i].name);  
            printf("班级：%d\n",stu[i].Class);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score2);  
            printf("总成绩：%d\n\n",stu[i].score);  
            break;
		}
		if(i==n) printf("输入错误或查询学生不存在\n");
	}
	system("pause");  
    system("cls");  
	
}
void numfind(struct student stu[])
{
	int a;  
    printf("输入需要查询的学号：\n");  
    scanf("%d",&a);  
    for(int i=0;i<n;i++)  
    {  
        if(a==stu[i].num)  
        {  
            printf("学号：%d\n",stu[i].num);  
            printf("姓名：%s\n",stu[i].name);  
            printf("班级：%d\n",stu[i].Class);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score1);  
            printf("%s的成绩%d\n",stu[i].classname1,stu[i].score2);  
            printf("总成绩：%d\n\n",stu[i].score);  
			break;
		}
		if(i==n) printf("输入错误或查询学生不存在\n");
	}
	system("pause");  
    system("cls");  
}
void classfind(struct student stu[]) //OK
{
	int a,b; 
    printf("输入需要查询的班级：\n");  
    scanf("%d",&a);  
    for(int i=0;i<n;i++)  
    {  
        if(a==stu[i].Class)  
        {  
            printf("%d.姓名：%s 学号：%d\n",i,stu[i].name,stu[i].num);  
			
		}
	}
	printf("输入要查看学生前的序号\n");
	scanf("%d",&b);  
	if(stu[b].num>0)
	{
		printf("学号：%d\n",stu[b].num);  
		printf("姓名：%s\n",stu[b].name);  
		printf("班级：%d\n",stu[b].Class);  
		printf("%s的成绩%d\n",stu[b].classname1,stu[b].score1);  
		printf("%s的成绩%d\n",stu[b].classname1,stu[b].score2);  
		printf("总成绩：%d\n\n",stu[b].score); 
	}
	else printf("输入错误或查询学生不存在\n");
	
	system("pause");  
    system("cls"); 
}
void printfsort1(struct student stu[]) //总分排名OK
{
	struct student t;  
    int i,j;  
    printf("	%d 个学生总分排名:\n",n-1);  
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
	printf("排名\t学号\t\t名字\t班级\t总分\n");  
	for(i=1;i<n;i++)  
	{ 		    
		printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score);
		
	}
    system("pause");  
    system("cls");  
}
void printfsort2(struct student stu[])//单科排名
{
	struct student t;  
    int i,j,a;  
	printf("选择要查看的科目排名:1.%s 2.%s\n",stu[n-1].classname1,stu[n-1].classname2);
	scanf("%d",&a); 
	switch(a)                                                       
    {  
	case 1: 
		printf("	%d 个学生排名:\n",n-1);  
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
		printf("排名\t学号\t\t名字\t班级\t%s分数\n",stu[n-1].classname1);  
		for(i=1;i<n;i++)  
		{ 		    
			printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score1);
			
		} 
		break;
	case 2: 
		printf("	%d 个学生排名:\n",n);  
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
		printf("排名\t学号\t名字\t班级\t%s分数\n",stu[n-1].classname2);  
		for(i=1;i<n;i++)  
		{ 		    
			printf(" %d\t%d\t%s\t%d\t%d\n",i,stu[i].num,stu[i].name,stu[i].Class,stu[i].score2);
			
		} break;
	}
	system("pause");  
    system("cls");  
}
void printfsort3(struct student stu[])//优秀率OK
{
	int count1=0,count2=0; 
	float s;
	int i,j,a;  
	printf("选择要查看的优秀率:1.班级 2.年级\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("输入需要查看的班级:\n");
		scanf("%d",&j);
		printf("\t%d班优秀学生名单:\n",j);
		printf("\t学号\t\t名字\t班级\t总分\n"); 
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
			printf("没有达到优秀的学生\n");
		else
		{
		s=(float)count1/count2;
		printf("%d班优秀率为:%f\n\n",j,s);
		}
		count1=count2=0;
		printf("\t%d班不及格学生名单:\n",j);
		printf("\t学号\t\t名字\t班级\t总分\n"); 
		for(i=1;i<n;i++)  
		{  
			if(stu[i].Class==j) count2++;
		
			if(stu[i].score<120&&stu[i].Class==j)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		} 
		if(count2==0) printf("没有不及格的学生\n");
		else
		{
		s=(float)count1/count2;
		printf("%d班不及格率为:%f\n",j,s);
		}



		break;
	case 2:
		printf("\t年级优秀学生名单:\n");
		printf("\t学号\t\t名字\t班级\t总分\n"); 
		for(i=1;i<n;i++)  
		{  
			
			if(stu[i].score>=180)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		}  
		if(count1==0) printf("没有达到优秀的学生\n");
		s=(float)count1/(n-1);
		printf("年级优秀率为:%f\n\n",s);
		count1=count2=0;
		printf("\t年级不及格学生名单:\n");
		printf("\t学号\t\t名字\t班级\t总分\n"); 
		for(i=1;i<n;i++)  
		{  
			if(stu[i].score<120)    
			{  
				printf("\t%d\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].score); 
				count1++;
			}  
			
		} 
		if(count1==0) printf("没有不及格的学生\n");
		else
		{
		s=(float)count1/(n-1);
		printf("年级不及格率为:%f\n",s);
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
	printf("输入需要导入的文件位置和文件名:\n");
	scanf("%s",&file);
	
	//char file[200]="C:\\Users\\23607\\Desktop\\c.txt";
	
	if((fp=fopen(file,"r"))==NULL) 
	{
		printf("输入错误或者文件无法打开\n");
		system("pause"); return;
	}
	
	while(!feof(fp))                     //读取一组数据后指针指向下一组数据，并且判断是否指向最后一行   
    {   
        fscanf(fp,"%d%s%d%s%d%s%d",&stu[n].num,&stu[n].name,&stu[n].Class,&stu[n].classname1,&stu[n].score1,&stu[n].classname2,&stu[n].score2);
		
		n++;
    } 
	n--;

	printf("以下学生已导入!\n");
	for(i=j;i<n;i++)
	{
		
		printf("学号：%d\t",stu[i].num);  
		printf("姓名：%s\t",stu[i].name);  
		printf("班级：%d\t",stu[i].Class);  
		printf("%s的",stu[i].classname1);
		printf("成绩:%d\t",stu[i].score1);  
		printf("%s的",stu[i].classname2);
		printf("成绩:%d\t",stu[i].score2);
		stu[i].score=stu[i].score1+stu[i].score2;
		printf("总成绩:%d\t",stu[i].score);
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
	printf("输入需要保存的文件位置和文件名:\n");
	scanf("%s",&file);
	
	//char file[200]="C:\Users\23607\Desktop\c.txt";
	
	if((fp=fopen(file,"w"))==NULL) 
	{
		printf("输入错误或者文件无法打开\n");	system("pause"); return;
	}
	
	//	for (i=1;i<n;i++) fwrite(&stu[i],sizeof(struct student),sizeof(struct student),fp);    
	
	for (i=1;i<n;i++)                     
    {   
        fprintf(fp,"%d %s %d %s %d %s %d\n",stu[i].num,stu[i].name,stu[i].Class,stu[i].classname1,stu[i].score1,stu[i].classname2,stu[i].score2);

		
    } 
	
	printf("以下学生已保存到位置为%s的文件!\n",file);
	for(i=1;i<n;i++)
	{
		
		printf("学号：%d\t",stu[i].num);  
		printf("姓名：%s\t",stu[i].name);  
		printf("班级：%d\t",stu[i].Class);  
		printf("%s的",stu[i].classname1);
		printf("成绩:%d\t",stu[i].score1);  
		printf("%s的",stu[i].classname2);
		printf("成绩:%d\t",stu[i].score2);
		stu[i].score=stu[i].score1+stu[i].score2;
		printf("总成绩:%d\t",stu[i].score);
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
       printf("歌曲点播系统初始化中,loading");
			i=1;
			for(k=0;k<20;k++)
			{
				printf(".");
				Sleep(100);
			}
			system("cls");
        printf("\n\t\t********欢迎进入歌曲点播系统********\n\n");
        printf("\t\t\t1.雪绒花\n");
        printf("\t\t\t2.小星星\n");
        printf("\t\t\t3.HAPPY BIRTHDAY\n");
        printf("\t\t\t4.退出歌曲点播系统，打开贪吃蛇小游戏\n");
        printf("\t\t\t0.退出多功能综合系统\n");
        printf("\n\n\t\t************************************");
        printf("\n请选择(0－4)\n");
        scanf("%d",&sel);
        switch(sel)
		{
            case 1:xueronghua();break;
            case 2:xiaoxingxing();break;
            case 3:happybirthday();break;
            case 4:Sleep(1000); ini();show();
			case 0:printf("     成功退出歌曲点播系统!\n");quit();
        }
    }while(1);
}

void xueronghua(void)   /*雪绒花曲谱*/
{
     char *jp="iddgwwwqqgfffddddfghhhggg ddgwwwqqgfffddgghjqqqqqwpggjhgddgqqq hhqwwqjjjgggddgwwwqqgfffddgghjqqqqqq";
     s=2;
     t=4*s;
     //gotoxy(40,20);
     printf("\t\t\n请欣赏歌曲：雪绒花");
     printf("\n\t\t\t雪绒花,雪绒花，清晨迎着我开放。");
     printf("\n\t\t\t小而白，洁而亮，向我快乐的摇晃。");
     printf("\n\t\t\t白雪般的花儿，愿你芬芳，永远开花生长。");
     printf("\n\t\t\t雪绒花，雪绒花，永远祝福我家乡。\n");
     display(jp);

     printf("雪绒花欣赏完毕");
     printf("按任意键返回主菜单");
     getch();
     menu();
}

void xiaoxingxing(void)    /*小星星曲谱*/
{
     char *jp="oaagghhggffddssaaggffddssggffddssaagghhggffddssaaaagghhggffddssaaggffddssggffddssaagghhggffddssaa";
     s=2;
     t=4*s;
     //gotoxy(40,20);
     cprintf("请欣赏歌曲：小星星");
     printf("\n\t\t\t一闪一闪亮晶晶，满天都是小星星，");
     printf("\n\t\t\t挂在天空放光明，好象千万小眼睛。");
     printf("\n\t\t\t太阳慢慢向西沉，乌鸦回家一群群，");
     printf("\n\t\t\t星星眨着小眼睛，闪闪烁烁到天明。\n");
     display(jp);

     cprintf("小星星欣赏完毕");
     cprintf("按任意键返回主菜单");
     getch();
     menu();
}

void happybirthday(void)  /*生日快乐曲谱*/
{
     char*jp="ippppbbnnbbaammmmbbnnbbssaaaabbggddaammmhfddaassaaappp";
     s=1;
     t=4*s;
    // gotoxy(40,20);
     cprintf("请欣赏歌曲：HAPPY BIRTHDAY");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU,");
     printf("\n\t\t\tHAAPY BIRTHDAY TO YOU.\n");
     display(jp);

     cprintf("HAPPY BIRTHDAY欣赏完毕");
     cprintf("按任意键返回主菜单");
     getch();
     menu();
}


void display(char *qm)  /*演奏功能*/
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

void sound1(int freq,int t)  /*发声函数*/
{
     int n;
     Beep(freq,500);
     n=t+clock();
     while(n>clock());
     Beep(0,0);
}

void pause(int t)      /*暂停函数*/
{
    int n;
    n=t+clock();
    while(n>clock())
    Beep(0,0);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////

int  dy[4] = { 0, 1, 0, -1 };
int  dx[4] = { -1, 0, 1, 0 };
int sum = 5;  //蛇总长度
int over = 0; 
int speed; 
char map[17][17];

struct snake 
{
    int x, y;  //身体坐标 
    int dir;  //方向（只有蛇头的方向是有用的） 
} A[100];
void start()
{
	system("cls");
 int a,k;
	   printf("资源编译中,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
                Sleep(50);
			}
	   printf("\n地图加载中,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
                Sleep(50);
			}
       printf("\n游戏初始化中,loading");
			a=1;k=0;
			for(k=0;k<20;k++)
			{
				printf(".");
				Sleep(100);
			}
      
			system("cls");
}
void ini() 
{  //初始化界面
       system("cls");
      
        printf("\n\t\t********欢迎进入贪吃蛇小游戏********\n");
		printf("\n\t\t*             游戏玩法             *\n");
	    printf("\n\t\t*     'W''S''A''D'控制上下左右     *\n");
		printf("\n\t\t*          蛇越长跑得越快~~~       *\n");
		printf("\n\t\t************************************\n");
        printf("\n\t\t按任意键开始\n");
    char ch = _getch();
    system("cls");
    speed =500;
    over = 0;
    sum = 5;
    int i, j;
    for (i = 0; i < 100; i++) 
	{  //初始化蛇头和蛇身的数据
        A[i].dir = 0;
        A[i].x = 0;
        A[i].y = 0;
    }
    A[0].x = 1; A[0].y = 1;  //地图左上角设置一条长度为5的蛇
    A[1].x = 1; A[1].y = 2;
    A[2].x = 1; A[2].y = 3;
    A[3].x = 1; A[3].y = 4;
    A[4].x = 1; A[4].y = 5; A[4].dir = 1;
    srand(time(0));
    for (i = 0; i < 17; i++) {  //设置地图
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
    map[A[4].x][A[4].y] = 'H';  //设置蛇头
    for (i = 0; i < sum - 1; i++) 
	{  //设置蛇身
        map[A[i].x][A[i].y] = 'X';
    }
    food();
}


void show() {  //显示界面 
    int i, j, x, y;
    for (i = 0; i < 17; i++) 
	{  //显示界面
        for (j = 0; j < 17; j++)
		{
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
    while (1) 
	{
        Sleep(speed);  //界面刷新速度
        turn();
        move();
        if (over)
		{  //设置蛇死掉后可以进行的操作 
            while (1)
			{
                char ch = _getch();
                if (ch == 113)
				{  //输入‘q’结束 
                    quit();
                }
                else if (ch == 114) 
				{  //输入‘r’重新开始 
                    ini();
                    break;
                }
            }
        }
        system("cls");  //清屏 
        for (i = 0; i < 17; i++) 
		{  //重新显示界面
            for (j = 0; j < 17; j++) 
			{
                printf("%c", map[i][j]);
            }
            printf("\n");
        }
    }
}

void food() {  //生成食物
    int x, y;
    while (1) 
	{
        x = (int)(15 * rand() / (RAND_MAX + 1.0));  //随机产生一组食物坐标
        y = (int)(15 * rand() / (RAND_MAX + 1.0));
        if (map[x][y] == ' ') 
		{  //如果是空格则在该处生成食物
            map[x][y] = 'O';
            break;
        }
    }
}


void move() {  //蛇移动
    int i, x, y;
    int t = sum;  //t记录当前蛇总长度 
    check();  //移动前检查按当前方向移动一步后的情况
    if (t == sum) {  //没有吃到苹果
        for (i = 0; i < sum - 1; i++) {
            if (i == 0) {  //蛇尾坐标处变成空格，把蛇尾坐标变成前一个蛇身的坐标 
                map[A[i].x][A[i].y] = ' ';
                A[i].x = A[i + 1].x;
                A[i].y = A[i + 1].y;
            }
            else {  //每个蛇身坐标都变为它前一个蛇身的坐标
                A[i].x = A[i + 1].x;
                A[i].y = A[i + 1].y;
            }
            map[A[i].x][A[i].y] = 'X';  //把地图上蛇身坐标处的字符设置成‘X’
        }
        A[sum - 1].x = A[sum - 1].x + dx[A[sum - 1].dir];  //蛇头按当前方向移动一格 
        A[sum - 1].y = A[sum - 1].y + dy[A[sum - 1].dir];
        map[A[sum - 1].x][A[sum - 1].y] = 'H';  //把地图上蛇头坐标处的字符设置成‘H’
    }
    else {  //吃到苹果（sum会加1）
        map[A[sum - 2].x][A[sum - 2].y] = 'X';  //把地图上原蛇头坐标处的字符设置成‘X’
        A[sum - 1].x = A[sum - 2].x + dx[A[sum - 2].dir];  //新蛇头的坐标是原蛇头沿当前方向移动一格后的坐标 
        A[sum - 1].y = A[sum - 2].y + dy[A[sum - 2].dir];
        A[sum - 1].dir = A[sum - 2].dir;  //新蛇头方向为原蛇头的方向
        map[A[sum - 1].x][A[sum - 1].y] = 'H';  //把地图上蛇头坐标处的字符设置成‘H’
        food();
    }
   
}

void check() {  //检查是否死亡或者吃到食物
    int x, y, i, j;
    x = A[sum - 1].x + dx[A[sum - 1].dir];  //记录按当前方向移动一格后蛇头的坐标 
    y = A[sum - 1].y + dy[A[sum - 1].dir];
    if (map[x][y] == '*' || map[x][y] == 'X') {  //如果地图上该坐标处字符为‘*’或‘X’就死亡 
        if (x != A[0].x || y != A[0].y) 
		{  //蛇尾除外 
            map[8][4] = 'G'; map[8][5] = 'A'; map[8][6] = 'M'; map[8][7] = 'E';  //输出“GAME OVER” 
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
	{  //吃到苹果 
        sum++;  //蛇身总长加1 
        speed = ((600 - sum * 20)>100) ? (600 - sum * 20) : 100; //速度加快 
    }
}

void turn() {  //转弯
    if (_kbhit())
	{
        char dir = _getch();  //读取输入的键 
        switch (dir) 
		{  //改变方向 
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
	printf(" \t#          谢谢使用,再见!!!        #\n");
	printf(" \t#                                  #\n");
	printf(" \t####################################\n");
	Sleep(1000);
	exit(0);
}