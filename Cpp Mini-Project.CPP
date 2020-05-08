#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
#include<alloc.h>

#define DOTCOLOR 14
#define DIGCOLOR 4
int color=DOTCOLOR;

char name[20];
char name1[20];
char name2[20];
int i;
char s[10]={'0','1','2','3','4','5','6','7','8','9'};

int clk1();
void start();
void created_by();
void drawdot();
void digital();
void pro();
void us(char b4[25]);
int game();
void about();

class stud
{
	public:
	int srno;
	char name[20];
	char ph_no[11];

	void get()
	{
		int i=0;
		cout<<"\n             Enter name -> ";
		cin.get(name[i]);



		while(name[i]!='\n')
		{
			i=i+1;
			cin.get(name[i]);
		}
		cin.getline(name,20,'\n');
		fflush(stdin);
		cout<<"     Enter ph_no\t-> \t";
		cin>>ph_no;
		ph_no[10]=NULL;
		fflush(stdin);
	}
	void show()
	{
		cout<<"\n";
		cout<<"             NAME      :"<<"\t"<<name<<"\n";
		cout<<"             Ph_No     :"<<"\t"<<ph_no<<"\n";
	}
};
class INDEX
{
	private:
		int ch;
	public :
		int menu()
		{

			int gdriver = DETECT, gmode;
			initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
			rectangle(60,10,600,400);
			setfillstyle(1,WHITE);
			bar(61,11,599,399);
			setcolor(BLUE);
			outtextxy(200,30," HELP -> PRESS ANY KEY 1 TO 11" );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
			outtextxy(220,50,"    1  - Contacts " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,80,"    2  - Call " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,110,"    3  - Messenger " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,140,"    4  - Notes " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,170,"    5  - Calculator " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,200,"    6  - Calender " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,230,"    7  - Clock " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,260,"    8  - TIC TAC TOE Game " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,290,"    9  - Lock The Phone " );
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
			outtextxy(220,320,"    0 - EXIT " );	
			outtextxy(220,380," Enter the choice ->");
			gotoxy(50,24);

			cin>>ch;
			return ch;
		}
};
class CONTACTS:public INDEX
{
public:
	int cont()
	{
		int gdriver = DETECT, gmode;
		int x,y;
		int midx,midy;
		initgraph(&gdriver, &gmode, "");
		y:

		clearviewport();
		settextstyle(3,0,4);
		settextstyle(7,0,4);
		getch();
		clearviewport();
		g:
		
		stud s;
		char name[20];
		char name1[20];
		int ch;
		clrscr();
		setbkcolor(BLUE);
		setcolor(YELLOW);
		
		z:
		cout<<"\n\n\n\n\n\n\n\n\n";
		initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
		setcolor(BLUE);
		rectangle(60,10,600,400);
		setfillstyle(1,YELLOW);
		bar(61,11,599,399);
		outtextxy(200,30," HELP -> PRESS ANY KEY 1 TO 6 " );
		settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
		outtextxy(220,50,"     1. TO ADD " );
		setcolor(BLUE);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,100,"    2. TO SHOW " );
		setcolor(BLUE);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,150,"    3. TO SEARCH " );
		setcolor(BLUE);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,200,"    4.  TO MODIFY " );
		setcolor(BLUE);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,250,"    5. TO DELETE " );
		setcolor(BLUE);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,300,"    0. GO TO MAIN MENU" );
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
		outtextxy(220,350," Enter the choice ->");
		gotoxy(62,23);
		cin>>ch;
		switch(ch)
		{
			case  1:  
			{
				clrscr();
				fstream f;
				f.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
				char ans;
				s.get();
				f.write((char *)&s,sizeof(s));
				clrscr();
				outtextxy(250,360, "   Do you want to continue(Y/N):- ");
				ans=getche();
				if(ans=='Y' || ans=='y')
				{
					goto z;
				}
				else
				{
					return 1;
				}
				f.close();

			break;
			}
			case  2:  
			{
				clrscr();
				cout<<"\n\n";
				fstream f;
				f.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
				f.seekg(0);
				int ctr=0;
				while(f.read((char *)&s,sizeof(s)) )
				{
					ctr=ctr+1;
					if(ctr==8)
					{
						getchar();
						clrscr();
						ctr=0;
					}
					s.show();
					if(f.eof()==1)
					{
						break;
					}
				}
				f.close();
				char ans;
				outtextxy(250,360, "   Do you want to continue(Y/N):- ");
				ans=getche();
				if(ans=='y'|| ans=='Y')
				{
					goto z;
				}
				else
				{
					return 1;
				}
			break;
			}
			case 3: 
			{
				gotoxy(60,25);
				clearviewport();
				rectangle(10,10,630,470);
				setbkcolor(DARKGRAY);
				textbackground(3);
				textcolor(5);
				clrscr();
				char ans;
				ifstream f;
				stud s;
				char name[20];
				char ph_no[11];
				int ch1;
				f.open("rec",ios::in|ios::binary);
				a1:
				cout<<"\n\n\n 1 - Search by name \n 2 - Search by Number \n\t\tEnter Choice : ";
				cin>>ch1;
				switch(ch1)
				{
					case 1 :
						clrscr();
						cout<<"\nEnter Name : ";
						cin>>name;
						do
						{
							f.read((char *)&s,sizeof(s));
							if(f.eof()==1)
							{
								break;
							}
							if(strcmpi(s.name,name)==0)
							{
								cout<<"\n                 Name     :"<<s.name;
								cout<<"\n                 phone_no    :"<<s.ph_no;
								getchar();
							}
						}while(f);
						f.close();
					break;
					case 2:
						clrscr();
						cout<<"\nEnter Number : ";
						cin>>ph_no;
						ph_no[10]=NULL;
						do
						{
							f.read((char *)&s,sizeof(s));
							if(f.eof()==1)
							{
								break;
							}
							if(strcmpi(s.ph_no,ph_no)==0)
							{
								cout<<"\n                 Name     :"<<s.name;
								cout<<"\n                 phone_no    :"<<s.ph_no;
								getchar();
							}
						}while(f);
						f.close();
					break;
					default:
						goto a1;
				}

				settextstyle(7,0,1);
				outtextxy(250,410,"Do You Want To Continue(Y/N) : ");
				gotoxy(250,450);
				ans=getche();

				if(ans=='Y'||ans=='y')
				{
					goto z;
				}
				else
				{
					return 1;
				}
			break;
			}
			case 4:  
			{
				clrscr();
				char ans;
				fstream f;
				stud s;
				char name[20];
				char ph_no[11];
				f.open("rec",ios::in|ios::binary);
				cout<<"\n\n\n          Enter person name whose record to be changed  :";
				cin>>name;
				do
				{
					f.read((char *)&s,sizeof(s));
					if(f.eof()==1)
					{
						break;
					}
					if(strcmp(s.name,name)==0)
					{
						cout<<"\n                Current Name       :"<<s.name;
						cout<<"\n                Current Phone No   :"<<s.ph_no;
						cout<<"\n                Enter the new name :";
						cin>>name;
						cout<<"\n                Enter new ph_no    :";
						cin>>ph_no;
						ph_no[10]=NULL;
						strcpy(s.name,name);
						strcpy(s.ph_no,ph_no);
						int l=f.tellg();
						f.close();
						f.open("rec",ios::out|ios::binary|ios::ate);
						f.seekg(l-sizeof(s));
						f.write((char *)&s,sizeof(s));
					}
				}while(f);
				f.close();
				outtextxy(290,360, "   Do you want to continue (Y/N):-");
				ans=getche();
				if(ans=='Y'||ans=='y')
				{
					goto z;
				}
			break;
			}
			case 5:  
			{
				clrscr();
				char name[20];
				stud s;
				ifstream fin;
				fstream fout;
				fin.open("rec",ios::in|ios::binary);
				fout.open("va",ios::app|ios::binary);
				cout<<"\n \t\t\t  DELETING :-";
				int i;
				fflush(stdin);
				cout<<"\n\n      Enter the name  :-  ";
				cin.get(name[i]);
				while(name[i]!='\n')
				{
					i=i+1;
					cin.get(name[i]);
				}
				fflush(stdin);
				fflush(stdout);
				cin.getline(name,20,'\n');
				while(fin)
				{
					fin.read((char *)&s,sizeof (s));
					if(strcmp(s.name,name)==0)
					{
						fout.read((char *)&s,sizeof(s));
					}
					else
					{
						if(fin.eof()==1)
						{
							break;
						}
						fout.write((char *)&s,sizeof(s));
					}
				}
				fin.close();
				fout.close();
				system("del rec");
				system("ren va rec");
				cout<<"\n      Enter is get Deleted:-";
				getchar();
				char ans;
				outtextxy(240,340, "   Do you want to continue (Y/N):- ");
				ans=getche();
				if (ans=='y' || ans=='Y')
				{
					goto z;
				}
				else
				{
					return 1;
				}
			}
			case 0:
			{
				clearviewport();
				return 1;
			}
			default:
				goto z;
		}
	}
};
class CALLS:public CONTACTS
{
	public:
		void make()
		{
			int arr[20];
			int gdriver = DETECT, gmode;
			int j=0,a,i=0;
			int cal;
			int ctr;
			char c;
			int sno=1;
			int id=1;
			int x=1;
			clrscr();
			initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
			rectangle(60,10,600,400);
			setfillstyle(1,WHITE);
			bar(61,11,599,399);

			stud s;
			fstream f;
			f.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			//a2.open("con",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			f.seekg(0);
			while(f)
			{
				f.read((char *)&s,sizeof(s));
				ctr=ctr+1;
				if(ctr==6)
				{
					getchar();
					clrscr();
					ctr=0;
				}
				cout<<"\n\t"<<sno;
				s.show();
				s.srno=sno;
				arr[i]=sno;
				//int l=f.tellg();
				//f.seekg(l-sizeof(s));
				//f.write((char *)&s,sizeof(s));
				//f.read((char *)&s,sizeof(s));
				//a2.write((char *)&s,sizeof(s));
				sno++;
				i++;
			}
			cout<<"\n\nEnter Sr No to call ";
			cin>>id;
			cout<<id;
			clrscr();
			//fstream obj;
			//obj.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			f.close();
			ifstream a2("rec");
			i=0;
			cout<<"\n\n\t\t";
			id++;
			while(arr[i]!=id)
			{
				a2.read((char *)&s,sizeof(s));
				if(s.srno==id)
				{
					goto ya;
				}
				i++;
			}
			ya:
			s.show();
			cout<<"\n\n\tPress 1 to make call : ";
			cin>>cal;

			if(cal==1)
			{
				clrscr();
				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,100,"    TRYING TO MAKE CALL   " );
				outtextxy(230,250," ");
				while(x<80)
				{
					gotoxy(x,13);
					cout<<"±";//Alt+177
					delay(100);
					x++;
				}
				clrscr();
				outtextxy(200,100,"    NETWORK ERROR.! CAN NOt MAKE CALL RIGHT NOW   " );
				getchar();

			}
			f.close();
		}

};
class MESSEGES
{
	public:
		void send()
		{
			char a;
			int arr[10];
			int gdriver = DETECT, gmode;
			int j=0,i=0;
			int msg;
			int ctr;
			char c;
			int sno=1;
			int id=1;
			int x=1;
			clrscr();
			initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
			rectangle(60,10,600,400);
			setfillstyle(1,WHITE);
			bar(61,11,599,399);

			stud s;
			fstream f;
			f.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			//a2.open("con",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			f.seekg(0);
			while(f)
			{
				f.read((char *)&s,sizeof(s));
				ctr=ctr+1;
				if(ctr==6)
				{
					getchar();
					clrscr();
					ctr=0;
				}
				cout<<"\n\t"<<sno;
				s.show();
				s.srno=sno;
				arr[i]=sno;
				//int l=f.tellg();
				//f.seekg(l-sizeof(s));
				//f.write((char *)&s,sizeof(s));
				//f.read((char *)&s,sizeof(s));
				//a2.write((char *)&s,sizeof(s));
				sno++;
				i++;
			}
			cout<<"\n\nEnter Sr No to call ";
			cin>>id;
			cout<<id;
			clrscr();
			//fstream obj;
			//obj.open("rec",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			f.close();
			ifstream a2("rec");
			i=0;
			cout<<"\n\n\t\t";
			id++;
			while(arr[i]!=id)
			{
				a2.read((char *)&s,sizeof(s));
				if(s.srno==id)
				{
					goto ya;
				}
				i++;
			}
			ya:
			s.show();
			cout<<"\n\n\tPress 1 to type message : ";
			cin>>msg;
			cout<<"\n\n\t\tType Your Messege..\n\t\t";
			cout<<"\t\t\tPress ESC when Done";
			if(msg==1)
			{
				clrscr();
				fstream as;
				as.open("rec",ios::in|ios::out|ios::app|ios::ate|ios::binary);
				int i=0;
				do
				{
					cin>>a;
					if(a==27)
					{
						goto ab;
					}
					as.write((char *)&a,sizeof(a));
					i++;
				}while(a!=NULL || a!=27);

				ab:
				f.close();

				clrscr();
				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,100,"    SENDING MESSAGE...   " );
				outtextxy(230,250," ");
				while(x<80)
				{
					gotoxy(x,13);
					cout<<"±";//Alt+177
					delay(100);
					x++;
				}
				clrscr();
				outtextxy(200,100,"    YOUR MESSAGE IS SENT   " );
				getchar();

			}
			f.close();
		}

};
class NOTE
{
	private :
		char arr[100];
		char name[20];
		char fname[23];
		char a;
	public :
		notes()
		{
			constructor();
		}
		void constructor()
		{
			for(int i=0;i<20;i++)
			{
				name[i]=NULL;
			}

		}
		int n_menu()
		{

			int gdriver = DETECT, gmode;
			int x,y;
			int midx,midy;
			/* initialize graphics and local variables */
			initgraph(&gdriver, &gmode, "");
			/* read result of initialization */
			
			y:
			clearviewport();
			settextstyle(3,0,4);
			settextstyle(7,0,4);
			getch();
			clearviewport();
			
			g:
			int ch;
			clrscr();
			setbkcolor(BLUE);
			setcolor(YELLOW);
			
			z:
			do
			{
				clrscr();
				cout<<"\n\n\n\n\n\n\n\n\n";
				initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
				setcolor(BLUE);
				rectangle(60,10,600,400);
				setfillstyle(1,YELLOW);
				bar(61,11,599,399);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(220,50,"     1. Create A New Note " );
				setcolor(BLUE);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
				outtextxy(220,100,"    2. Open a existing Note " );
				setcolor(BLUE);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
				outtextxy(220,150,"    3.  TO MODIFY " );
				setcolor(BLUE);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
				outtextxy(220,200,"    4. TO DELETE " );
				setcolor(BLUE);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
				outtextxy(220,250,"    0. GO TO MAIN MENU" );
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
				outtextxy(220,300," Enter the choice ->");
				gotoxy(62,23);
				cin>>ch;
				choose(ch);
			}while(ch!=0);
		}
		void choose(int ch)
		{
			clrscr();
			switch(ch)
			{
				case 1: //create
					gettxt();
					cout<<"\nPress ESC to save The file" ;
					create();

				break;

				case 2:
					int a;
					list();
					gettxt();
					a=display();
					if(a==0)
					{
						exit(1);
					}
				break;

				case 3:  //modify
					gettxt();
					cout<<"\nPress ESC to save The file" ;
					create();
				break;

				case 4:
					cout<<"\nEnter file name to delete";
					gettxt();
					cout<<"\nfile Deletef Successfully";
					delay(200);

				break;
			}
		}

		void gettxt()
		{
			cout<<"\nEnter Name of Note";
			cin>>name;
			strcpy(fname,name);
			strcat(fname,".txt");
			for(int i=0;i<(strlen(fname));i++)
			{
				cout<<fname[i];
			}
			cout<<endl;
			delay(500);
		}
		void create()
		{
			fstream f;
			f.open(fname,ios::in|ios::out|ios::app|ios::ate|ios::binary);
			int i=0;
			constructor();
			do
			{
				cin>>a;
				if(a==27)
				{
					goto ab;
				}
				f.write((char *)&a,sizeof(a));
				i++;
			}while(a!=NULL || a!=27);

			ab:f.close();
			ofstream n;
			n.open("list",ios::in|ios::out|ios::ate|ios::app|ios::binary);
			n.write((char *)&name,sizeof(name));
			n.close();
		}
		void list()
		{
			ifstream f("list.txt");
			while(f)
			{
				f.read((char *)&a,sizeof(a));
				cout<<a;
			}
		}
		int display()
		{
			int i=0;
			ifstream f(fname);
			constructor();
			while(f)
			{
				f.read((char *)&a,sizeof(a));
				cout<<a;
				delay(10);
			}
			delay(1000);
			outtextxy(200,220,"Press Y/N to exit or not..? ");
			a=getche();
			if(a=='Y' || a=='y')
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

};
class CALCULATOR
{
	public:
		char ans;
	void sum()
	{
		clrscr();
		double add;
		double n1,n2;
		cout<<"\n\tenter two numbers to find their Addition:\n\n";
		cout<<"\tenter first number:";
		cin>>n1;
		cout<<"\n\tenter second number:";
		cin>>n2;
		add=n1+n2;
		cout<<"\n\n\t\tsum is: "<< add<<endl<<endl;

		settextstyle(7,0,1);
		outtextxy(250,410,"Do You Want To Continue(Y/N) : ");
		gotoxy(250,450);
		ans=getche();

		if(ans=='Y'||ans=='y')
		{
			delay(20);
		}
		else
		{
			delay(20);
		}
	}
	void diff()
	{
		clrscr();
		double diff;
		double n1,n2;
		cout<<"\n\tenter two numbers to find their difference:\n\n";
		cout<<"\tenter first number:";
		cin>>n1;
		cout<<"\n\tenter second number:";
		cin>>n2;
		diff=n1-n2;
		cout<<"\n\n\t\tdifference is:"<<diff<<endl<<endl;
		settextstyle(7,0,1);
		outtextxy(250,410,"Do You Want To Continue(Y/N) : ");
		gotoxy(250,450);
		ans=getche();

		if(ans=='Y'||ans=='y')
		{
			delay(20);
		}
		else
		{
			delay(20);
		}
	}
	void mul()
	{
		clrscr();
		double mult;
		double n1,n2;
		cout<<"\n\tenter two numbers to find their multiplication:\n\n";
		cout<<"\tenter first number:";
		cin>>n1;
		cout<<"\n\tenter second number:";
		cin>>n2;
		mult=n1*n2;
		cout<<"\n\n\t\tMultiplication is:"<<mult<<endl<<endl;
		settextstyle(7,0,1);
		outtextxy(250,410,"Do You Want To Continue(Y/N) : ");
		gotoxy(250,450);
		ans=getche();

		if(ans=='Y'||ans=='y')
		{
			delay(20);
		}
		else
		{
			delay(20);
		}
	}
	void div()
	{
		clrscr();
		double div;
		double n1;
		double n2;
		cout<<"\n\tenter 2 numbers to find their quotient\n\n";
		cout<<"\tenter numerator:";
		cin>>n1;
		cout<<"\n\tenter denominator:";
		cin>>n2;
		div=n1/n2;
		cout<<"\n\n\t\tquotient is:"<<div<<endl<<endl;
		settextstyle(7,0,1);
		outtextxy(250,410,"Do You Want To Continue(Y/N) : ");
		gotoxy(250,450);
		ans=getche();

		if(ans=='Y'||ans=='y')
		{
			delay(20);
		}
		else
		{
			delay(20);
		}
	}

	void selection()
	{
		clrscr();
		int op;
		int gdriver = DETECT, gmode;
		initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
		rectangle(60,10,600,400);
		setfillstyle(1,WHITE);
		bar(61,11,599,399);
		do
		{
		clrscr();
		setcolor(BLUE);
		outtextxy(200,30," HELP -> PRESS ANY KEY 1 TO 4" );

		setcolor(RED);
		settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
		outtextxy(220,50,"    1  - Addition " );

		setcolor(RED);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,80,"    2  - Subtraction " );

		setcolor(RED);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,110,"    3  - Multiplication " );

		setcolor(RED);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,140,"    4  - Division " );

		setcolor(RED);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(220,170,"    0  - Return to Main menu " );

		outtextxy(220,380," Enter the choice ->");
		gotoxy(50,24);

		cin>>op;
		switch(op)
		{
			case 1:
				sum();
			break;
			case 2:
				diff();
			break;
			case 3:
				mul();
			break;
			case 4:
				div();
			break;
			default:
				cout<<"invalid input"  ;
		}
		}while(op!=0);
	}

};
class CALENDER
{
	private:
		int days;
		int mm;
		int k;
		int z;
		int p;
		int yy;
		int r;
		int calen[5][7];
		int i,j;
		int mon;
	public:
		void calen_call(void)
		{
			int gdriver = DETECT, gmode;
			initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
			rectangle(60,10,600,400);
			setfillstyle(1,WHITE);
			bar(61,11,599,399);
			setcolor(BLUE);
			int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			//time t;
			//time(&t);
			cout<<"\n\n\n\t\t\tCALENDAR FROM YEAR 2000...\n\n\n";
			//cout<<"\n\nTODAY'S DATE AND TIME: "<<time(&t);
			repeat:
			cout<<"\n\n\t  ENTER YEAR [2000 ...] : ";
			cin>>yy;

			if(yy<=1999)
			{
				cout<<"\n\n\t  WRONG ENTRY";
				goto repeat;
			}
			if(yy%4==0)
			{
				if(yy%100==0)
				{
					if(yy%400==0)
					{
						month[1]=29;
					}
				}
				else
				{
					month[1]=28;
				}
			}
			else
			{
				month[1]=29;
			}

			again:
			cout<<"\n\t  ENTER MONTH [1-12] :";
			cin>>mon;

			if(mon>12||mon<1)
			{
				cout<<"\n\t  WRONG ENTRY";
				goto again;
			}

			cout<<"\n\n\t\t\t\tYEAR "<<yy<<"\n\n";

			switch(mon)
			{
				case 1:
					cout<<"\n\n\t\t\t\tJANUARY\n\n";
				break;
				case 2:
					cout<<"\n\n\t\t\t\tFEBRUARY\n\n";
				break;
				case 3:
					cout<<"\n\n\t\t\t\tMARCH\n\n";
				break;
				case 4:
					cout<<"\n\n\t\t\t\tAPRIL\n\n";
				break;
				case 5:
					cout<<"\n\n\t\t\t\tMAY\n\n";
				break;
				case 6:
					cout<<"\n\n\t\t\t\tJUNE\n\n";
				break;
				case 7:
					cout<<"\n\n\t\t\t\tJULY\n\n";
				break;
				case 8:
					cout<<"\n\n\t\t\t\tAUGUST\n\n";
				break;
				case 9:
					cout<<"\n\n\t\t\t\tSEPTEMBER\n\n";
				break;
				case 10:
					cout<<"\n\n\t\t\t\tOCTOBER\n\n";
				break;
				case 11:
					cout<<"\n\n\t\t\t\tNOVEMBER\n\n";
				break;

				case 12:
					cout<<"\n\n\t\t\t\tDECEMBER\n\n";
				break;
				default:
					cout<<"\n\nWRONG ENTRY";
			}
			p=5;
			for(r=1999;r<yy;r++)
			{
				if(r%4==0)
				{
					if(r%100==0)
					{
						if(r%400==0)
						{
							p=p+2;
						}
						else
						{
							p++;
						}
					}
					else
					{
						p=p+2;
					}
				}
				else
				{
					p++;
				}
				if(p==7)
				{
					p=0;
				}
				if(p==8)
				{
					p=1;
				}
			}




			for(mm=0;mm<12;mm++)
			{
				days=month[mm];
				k=0;
				for(z=0;z<7;z++)
				{
					calen[0][z]=0;
				}
			}
			for(i=0;i<5;i++,p=0)
			{
				for(j=p;j<7&&k<days;j++)
				{
					calen[i][j]=k+1;
					k++;
				}
				if(k==days&&i==4&&j<7)
				{
					for(p=j+1;p<7;p++)
					{
						calen[i][p]=0;
					}
				}
				if(k<days&&i==4&&j==6)
				{
					for(p=0;p<7&&k<days;p++,k++)
						calen[0][p]=k+1;
						j=p-1;
				}
				if(k==days&&i==4&&j==6)
				{
					j=-1;
				}
				if(k==days&&i==3&&j==6)
				{
					for(p=0;p<7;p++)
					{
						calen[4][p]=0;
					}
				}
			}
			p=j;
			if(mm+1==mon)
			{
				return;
			}
		}
		void display(void)
		{
			int gdriver = DETECT, gmode;
			initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
			rectangle(60,10,600,400);
			setfillstyle(1,WHITE);
			bar(61,11,599,399);
			setcolor(BLUE);
			cout<<"\n\n\n\t    |  SUN  |  MON  |  TUE  |  WED  |  THU  |  FRI  |  SAT  |       \n\n";
			for(i=0;i<5;i++)
			{
				cout<<"\n\n\t   ";
				for(j=0;j<7;j++)
				{
					cout<<"\t"<<calen[i][j];
				}
				cout<<"\t    ";

			}
			getch();
		}
};
class CLOCK
{
public:
	int calculate_hrs(int h)
	{
		int x;
		switch(h)
		{
			case 0:
				x=90;
			break;
			case 1:
			case 13:
				x=60;
				break;
			case 2:
			case 14:
				x=30;
			break;
			case 3:
			case 15:
				x=0;
			break;
			case 4:
			case 16:
				x=330;
			break;
			case 5:
			case 17:
				x=300;
				break;
			case 6:
			case 18:
				x=270;
			break;
			case 7:
				case 19:
				x=240;
			break;
			case 8:
			case 20:
				x=210;
			break;
			case 9:
			case 21:
				x=180;
			break;
			case 10:
			case 22:
				 x=150;
			break;
			case 11:
			case 23:
				x=120;
			break;
			case 12:
			case 24:
				x=90;
			break;
		}
		return(x);
	}

	int calculate_min(int m)
	{
		int x;
		if(m%5==0)
		{
			switch(m)
			{
				case 0:
					x=90;
				break;
				case 5:
					x=60;
				break;
				case 10:
					x=30;
				break;
				case 15:
					x=360;
				break;
				case 20:
					x=330;
				break;
				case 25:
					x=300;
				break;
				case 30:
					x=270;
				break;
				case 35:
					x=240;
				break;
				case 40:
					x=210;
				break;
				case 45:
					x=180;
				break;
				case 50:
					x=150;
				break;
				case 55:
					x=120;
				break;
				case 60:
					x=90;
				break;
			}
		}
		else
		{
			if(m>0&&m<15)
			{
				switch(m)
				{
					case 1:
						x=84;
					break;
						case 2:
						x=78;
					break;
					case 3:
						x=72;
					break;
					case 4:
						x=66;
					break;
					case 6:
						x=54;
						break;
					case 7:
						x=48;
					break;
					case 8:
						x=42;
					break;
					case 9:
						 x=36;
					break;
					case 11:
						 x=24;
					break;
					case 12:
						 x=18;
					break;
					case 13:
						 x=12;
					break;
					case 14:
						 x=6;
					break;
				}
			}
			if(m>15&&m<30)
			{
				switch(m)
				{
					case 16:
						 x=354;
					break;
					case 17:
						 x=348;
					break;
					case 18:
						 x=342;
					break;
					case 19:
						 x=336;
					break;
					case 21:
						 x=324;
						break;
					case 22:
						 x=318;
					break;
					case 23:
						 x=312;
					break;
					case 24:
						 x=306;
					break;
					case 26:
						 x=294;
					break;
					case 27:
						 x=288;
					break;
					case 28:
						 x=282;
					break;
					case 29:
						 x=276;
					break;
				}
			}
			if(m>30&&m<45)
			{
				switch(m)
				{
					case 31:
						 x=264;
					break;
					case 32:
						 x=258;
					break;
					case 33:
						 x=252;
					break;
					case 34:
						 x=246;
					break;
					case 36:
						 x=234;
					break;
					case 37:
						 x=228;
					break;
					case 38:
						 x=222;
					break;
					case 39:
						 x=216;
					break;
					case 41:
						 x=204;
					break;
					case 42:
						 x=198;
					break;
					case 43:
						 x=192;
					break;
					case 44:
						 x=186;
						break;
				}
			}
			if(m>45&&m<60)
			{
				switch(m)
				{
					case 46:
						 x=174;
					break;
					case 47:
						 x=168;
					break;
					case 48:
						 x=162;
					break;
					case 49:
						 x=156;
					break;
					case 51:
						 x=144;
					break;
					case 52:
						 x=138;
					break;
					case 53:
						 x=132;
					break;
					case 54:
						 x=126;
					break;
					case 56:
						 x=114;
					break;
					case 57:
						 x=108;
					break;
					case 58:
						 x=102;
					break;
					case 59:
						 x=96;
					break;
				}
			}
		}
		return(x);
	}
	int change_hrs(int m,int a)
	{
		if(m>15&&m<=30)
		a-=12;
		if(m>30&&m<=45)
		{
			a-=18;
			if(m>45&&m<60)
			{
				a-=24;
			}
		}
		return (a);
	}




	int timer()
	{
		int i,j,k,l,n,a,b,c,d,e,ans;
		textcolor(RED);
		clrscr();
		gotoxy(35,10);
		cout<<"Loading...";


		clrscr();
		gotoxy(6,10);
		delay(2000);
		clrscr();
		
		start:
		clrscr();
		textcolor(RED);
		gotoxy(1,1);
		cout<<"\n\n\t\t\t\t:: Stopwatch ::";
		gotoxy(10,10);
		cout<<"1.Start/Resume";
		gotoxy(10,12);
		cout<<"2.Stop/Pause";
		gotoxy(10,14);
		cout<<"3.Record";
		gotoxy(10,16);
		cout<<"4.Reset";
		gotoxy(10,18);
		cout<<"5.Timer";
		gotoxy(10,20);
		cout<<"0.Back";
		gotoxy(31,12);
		cout<<"±±±±±±±±±±±±±±±±";  //hold Alt key then press 177 to get ±
		gotoxy(31,13);
		cout<<"±";
		gotoxy(31,14);
		cout<<"±";
		gotoxy(31,15);
		cout<<"±";
		gotoxy(31,16);
		cout<<"±±±±±±±±±±±±±±±±";
		gotoxy(46,13);
		cout<<"±";
		gotoxy(46,14);
		cout<<"±";
		gotoxy(46,15);
		cout<<"±";
		gotoxy(35,14);
		cout<<"0:0:0:0";
		n=getch();
		while(n<2)
		{
			n=getch();
		}
		if(n=='1')
		{
			for(i=0;i<61;i++)
			{
				for(j=0;j<60;j++)
				{
					for(k=0;k<60;k++)
					{
						for(l=0;l<100;l++)
						{
							if(kbhit())
							{
								gotoxy(35,14);
								cout<<i<<":"<<j<<":"<<k<<":"<<l;
								clrscr();
								goto start;
							}
							else
							{
								gotoxy(35,14);
								cout<<i<<":"<<j<<":"<<k<<":"<<l<<" ";
								delay(10);
								record:
							}
							if(i==d&&j==c&&k==b&&l==a)
							{
								sound(2000);
								delay(e);
								nosound();
							}
						}
					}
				}
			}
			goto start;
		}
		else if(n=='2')
		{
			gotoxy(35,14);
			cout<<i<<":"<<j<<":"<<k<<":"<<l;
			int m;
			m=getch();
			while(m<2)
			{
				m=getch();
			}
			if(m=='1')
			{
				goto record;
			}
			else if(m=='4')
			{
				clrscr();
				goto start;
			}
			else
			{
				clrscr();
			
				gotoxy(25,10);
				cout<<"Wrong Key Pressed, Try Again...";
				delay(10);
				goto start;
			}
		}
		else if(n=='3')
		{
			gotoxy(70,7);
			cout<<" Record";
			gotoxy(68,8);
			cout<<"-------------";
			gotoxy(70,10);
			cout<<i<<":"<<j<<":"<<k<<":"<<l;
			goto record;
		}
		else if(n=='5')
		{
			clrscr();
			gotoxy(10,12);
			cout<<"Enter Milliseconds                            :: ";
			cin>>a;
			gotoxy(10,14);
			cout<<"Enter Seconds                                 :: ";
			cin>>b;
			gotoxy(10,16);
			cout<<"Enter Minutes                                 :: ";
			cin>>c;
			gotoxy(10,18);
			cout<<"Enter Hours                                   :: ";
			cin>>d;
			gotoxy(10,20);
			cout<<"For how many milliseconds will the Alarm ring :: ";
			cin>>e;
			clrscr();
			goto start;
		}
		else if(n=='0')
		{
			return 1;
		}
		else
		{
			clrscr();
			gotoxy(25,10);
			cout<<"Wrong Key Pressed, Try Again...";
			ans=getchar();
			goto start;
		}
	}
};
class DIGITAL
{
	private:
		int X,Y;
		int SIZE;
   		int COLOR;
   		int HIGHT,WIDTH;
   		void *VER,*HOR;
	public:
  		int style;
  		DIGITAL()
		{
			style=1;
 			SIZE=1;
 			HIGHT=1;
 			WIDTH=12;
 			COLOR=15;
 			MakeBars();
		}
  		DIGITAL(int s,int c,int st)
		{
 			style=st;
 			SIZE=s;
 			COLOR=c;
			HIGHT=1;
 			WIDTH=6;
 			MakeBars();
		}
  		void MakeBars()
		{
 			int x,y,w,h;
		 	int area;
 			x=10;
 			y=getmaxy()/2; 
			w=WIDTH*SIZE;
		 		h=HIGHT*SIZE;
 			setfillstyle(style,COLOR);
	 		bar(x+h,y,x+w-h,y+h);
 			setcolor(COLOR);
 			line(x,y+h/2,x+h,y);
 			line(x,y+h/2,x+h,y+h);
 			floodfill(x+h/2,y+h/2,COLOR);
 			setcolor(COLOR);
 			line(x+w-h,y,x+w+-h+h,y+h/2);
			line(x+w-h,y+h,x+w-h+h,y+h/2);
 			floodfill(x+w-h+h/2,y+h/2,COLOR);
 			area=imagesize(x,y,x+w,y+h);
 			HOR=malloc(area);
 			if(HOR==NULL)
 			{
  				printf("Low Memory(Horizontal)...\nPress Any Key");
  				getch();
  				exit(0);
 			}
			getimage(x,y,x+w,y+h,HOR);
 			putimage(x,y,HOR,XOR_PUT);
 				x=getmaxx()/2;
 			y=10;
 			h=SIZE*WIDTH;
 			w=HIGHT*SIZE;
 			bar(x,y+w,x+w,y+h-w);
 			setcolor(COLOR);
 			line(x,y+w,x+w/2,y);
 			line(x+w,y+w,x+w/2,y);
			floodfill(x+w/2,y+w/2,COLOR);
 			setcolor(COLOR);
 			line(x,y+h-w,x+w/2,y+h);
 			line(x+w,y+h-w,x+w/2,y+h);
 			floodfill(x+w/2,y+h-w/2,COLOR);
 			area=imagesize(x,y,x+w,y+h);
 			VER=malloc(area);
 			if(VER==NULL)
 			{
  				printf("Low Memory(Vertical)...\nPress Any Key");
  				getch();
  				exit(0);
 			}
 			getimage(x,y,x+w,y+h,VER);
 			putimage(x,y,VER,XOR_PUT);
		}
		PutDig(int x,int y,int n)
		{
 			int num,gap,qu,rem;
 			gap=(HIGHT*SIZE);
			num=n;
 			if(num>=0&&num<10)
 			{
  				DrawDig(x,y,0);
 				DrawDig(x+WIDTH*SIZE+HIGHT*SIZE+gap,y,n);
 			}
 			if(num>=10&&num<100)
 			{
 	 			qu=num/10;
  				rem=num%10;
  				DrawDig(x,y,qu);
  				DrawDig(x+WIDTH*SIZE+HIGHT*SIZE+gap,y,rem);
 			}
		}
		void DrawDig(int x,int y,int n)
		{
 			int H[10][3]={1,0,1,
				      0,0,0,		
	 			      1,1,1,
	 		 	      1,1,1,
				      0,1,0,
				      1,1,1,
	       			      1,1,1,
	    			      1,0,0,
	  			      1,1,1,
	  			      1,1,1};
 			int V[10][4]={1,1,1,1,
	       		              0,1,0,1,
	                              0,1,1,0,
	                              0,1,0,1,
	                              1,1,0,1,
	                              1,0,0,1,
	                              1,0,1,1,
	                              0,1,0,1,
	                              1,1,1,1,
	                              1,1,0,1};
 			int HX[3]={x,x,x};
 			int HY[3]={y,y+WIDTH*SIZE,y+2*WIDTH*SIZE};
			int VX[4]={x-(HIGHT*SIZE)/2,x+WIDTH*SIZE-(HIGHT*SIZE)/2,x-(HIGHT*SIZE)/2,x+WIDTH*SIZE-(HIGHT*SIZE)/2};
 			int VY[4]={y+(HIGHT*SIZE)/2,y+(HIGHT*SIZE)/2,y+WIDTH*SIZE+(HIGHT*SIZE)/2,y+WIDTH*SIZE+(HIGHT*SIZE)/2};
			int i;
 			setfillstyle(1,getpixel(x-1,y-1));
 			bar(x-(SIZE*HIGHT)/2,y,x+WIDTH*SIZE+(SIZE*HIGHT)/2,y+2*SIZE*WIDTH+HIGHT*SIZE);
			for(i=0;i<3;i++)
			{
  				if(H[n][i]==1)
   				{
					putimage(HX[i],HY[i],HOR,XOR_PUT);
				}
 			}
 			for(i=0;i<4;i++)
			{
 				if(V[n][i]==1)
  				{	
					putimage(VX[i],VY[i],VER,XOR_PUT);
				}
			}
		}

		~DIGITAL()
		{
 			delete VER;
 			delete HOR;
		}

};


class play_board
{
	public:
		void instructions()
		{
			cout<<"\n    		HOW TO PLAY..";
			cout<<"\n 1. The game is played on grid that's 3 squares by 3 squares.";
			cout<<"\n 2. Player one is X ,Player two is O.\n players take turns putting their makes in empty squares";
			cout<<"\n 3. The first player to get of her marks in a row\n\t(up,down,accross or diagonally) is the winner!!!";
			cout<<"\n 4. When all 9 squares are full,the game is over.\n\tIf no player has 3 marks in a row ,the game ends with draw";
		}

		void getname()
		{
			clrscr();
			cleardevice();
			cout<<"\nEnter the player 1 name";
			cin>>name1;
			cout<<"\nenter the player 2 name";
			cin>>name2;
		}


		void winname(char a[10])
		{
			ofstream ofs;
			ofs.open("TCT_WINNERS.txt",ios::trunc);
			ofs<<a;
			ofs.close();
		}

		void showwin()
		{
			fstream ifs;
			char line[80];
			ifs.open("TCT_WINNERS.txt",ios::in);
			cout<<"***WINNER***\n";
			char ch;
			while(ifs)
			{
				ifs.get(ch);
				cout<<ch;
			}
			cout<<"press 1 for menu";
			int pp;
			cin>>pp;
			if(pp==1)
			{
				menu();
			}
			else
			{
				ifs.close();
			}
		}
		int menu()
		{
			clrscr();
			cleardevice();
			int ch,r;
			//play_board p;
			//setbkcolor(WHITE);
			setcolor(BLUE);
			setcolor(0);
			cout<<"\n			******MENU******     "<<endl<<endl;
			cout<<"\n 1.Game \n 2.HELP \n 3.Last WINNER \n 0.EXIT";
			cout<<"\n SELECT ";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<" \nGAME";
					play_board p3;
					p3.getname();
					logic l;
					l.game();
					//exit1();
				break;

				case 2:
					cout<<"\n HELP";
					instructions();
					back();
				break;

				case 3:
					play_board p;
					p.showwin();
					back();
				break;

				case 0:
					return 1;
				break;
			}
		}


		void back()
		{
			int c;
			cout<<"\n For returning to menu press 1";
			cin>>c;
			if(c==1)
			{
				menu();
			}
			else
			{
				back();
			}
		}

};
class logic : public play_board        //inheritance
{
	public:
		logic()
		{

			s[0]='0';
			s[1]='1';
			s[2]='2';
			s[3]='3';
			s[4]='4';
			s[5]='5';
			s[6]='6';
			s[7]='7';
			s[8]='8';
			s[9]='9';
		}
		void disp_board()
		{
			clrscr();
			cleardevice();
			setbkcolor(LIGHTBLUE);

			cout<<"\n\n\t		    ***** TIC - TAC - TOE*****    	  \n\n" ;

			cout<<"\nPlayer 1 = (X)";
			cout<<"\nPlayer 2 = (O)";
			cout<<endl<<endl;

			cout<<"			     |     |        "<<endl;
			cout<<"  		        "<<s[1]<<"    |  "<<s[2]<<"  |  "<<s[3]<<endl;

			cout<<"		      _______|_____|_______"<<endl;
			cout<<"			     |     |       "<<endl;

			cout<<"			     |     |        "<<endl;
			cout<<"  		        "<<s[4]<<"    |  "<<s[5]<<"  |  "<<s[6]<<endl;

			cout<<"		      _______|_____|_______"<<endl;
			cout<<"			     |     |       "<<endl;

			cout<<"			     |     |        "<<endl;
			cout<<"  		        "<<s[7]<<"    |  "<<s[8]<<"  |  "<<s[9]<<endl;

			cout<<"			     |     |        "<<endl<<endl;
		}

		void  game()
		{
			int player=1,choice;
			char mark;
			do
			{
				disp_board();
				player=(player%2)?1:2;
				cout<<"PLAYER "<<player<<" , choose the box\t";
				cin>>choice;
				mark=(player==1)?'X':'O';
				if(choice==1 && s[1]=='1')
				{
					s[1]=mark;
				}
				else if(choice==2 && s[2]=='2')
				{
					s[2]=mark;
				}
				else if(choice==3 && s[3]=='3')
				{
					s[3]=mark;
				}
				else if(choice==4 && s[4]=='4')
				{
					s[4]=mark;
				}
				else if(choice==5 && s[5]=='5')
				{
					s[5]=mark;
				}
				else if(choice==6 && s[6]=='6')
				{
					s[6]=mark;
				}
				else if(choice==7 && s[7]=='7')
				{
					s[7]=mark;
				}
				else if(choice==8 && s[8]=='8')
				{
					s[8]=mark;
				}
				else if(choice==9 && s[9]=='9')
				{
					s[9]=mark;
				}
				else
				{
					cout<<"\n Invalid move";
					player--;
					cin.ignore();
					cin.get();
				}
				i=checkwin();
				player++;
			}while(i==-1);
			disp_board();
			if(i==1)
			{
				cout<<"==>\a Player"<<--player<<"  WIN";
				delay(1000);
				cleardevice();
				if(player==1)
				{
					//name=name1;
					play_board p1;
					p1.winname(name1);
					//outtextxy(250,300,"Player 1");
					char b1[24]="CONGRATULATIONS \0";
					strcat(b1,name1);
					us(b1);
				}
				else
				{
					play_board p2;
					p2.winname(name2);
					//outtextxy(250,300,"Player 2");
					char b2[24]="CONGRATULATIONS \0";
					strcat(b2,name2);
					us(b2);
				}
				menu();
				//cout<<"\n loading....";
				//delay(5000)
			}
			else
			{
				cout<<"==>\a Game Draw";
				delay(500);
				//cout<<"\n loading....";
				//delay(5000);
				menu();
			}
			cin.ignore();  //ignores characters
			cin.get();
			//return 0;
		}

		int checkwin()
		{
			if(s[1]==s[2] && s[2]==s[3])
			{
				return 1;
			}
			else if(s[4]==s[5] && s[5]==s[6])
			{
				return 1;
			}
			else if(s[7]==s[8] && s[8]==s[9])
			{
				return 1;
			}
			else if(s[1]==s[4] && s[4]==s[7])
			{
				return 1;
			}
			else if(s[2]==s[5] && s[5]==s[8])
			{
				return 1;
			}
			else if(s[3]==s[6] && s[6]==s[9])
			{
				return 1;
			}
			else if(s[1]==s[5] && s[5]==s[9])
			{
				return 1;
			}
			else if(s[3]==s[5] && s[5]==s[7])
			{
				return 1;
			}
			else if(s[1]!='1' && s[2]!='2' && s[3]!='3' && s[4]!='4' && s[5]!='5'&& s[6]!='6' && s[7]!='7' && s[8]!='8' && s[9]!='9')
			{
				return 0;
			}
			else
			{
				return -1;
			}
		}
};


class LOCK
{

	char pass[20];
public:
	int lock_phone()
	{
		int gdriver = DETECT, gmode;
		int i,j=0,a;
		char c;
		clrscr();
		initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
		rectangle(60,10,600,400);
		setfillstyle(1,WHITE);
		bar(61,11,599,399);
		setcolor(RED);
		settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
		outtextxy(200,100,"    ENTER THE PASSWORD   " );
		outtextxy(230,250," ");


		for(i=4;i>=1;i--)
		{
			a=i-1;
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
			while((c=getch())!='\r')
			{
				cout<<"*";
				//strcpy(pass[j],c);
				pass[j]=c;
				j++;
			}
			pass[j]='\0';
			if(strcmp(pass,"yap")==0)
			{
				clrscr();
				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,100,"    CORRECT PASSWORD   " );
				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,150,"    YOU CAN ENTER INTO SYSTEM   " );
				goto pss;
			}
			else
			{
				free(pass);
				clrscr();
				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,100,"    RE-ENTER PASSWORD   " );
				setcolor(RED);

				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				gotoxy(200,200);
				setcolor(RED);
				cprintf("    REMAINING ATTEMPTS   :  %d ",a);

				setcolor(RED);
				settextstyle(TRIPLEX_FONT ,HORIZ_DIR,4);
				outtextxy(200,250,"    WRONG PASSWPORD..   " );
				if(a==0)
				{
					//printf("\nYou Have Reached Your Limit");
					//printf("\nSorry,You Can't Enter In System");
					exit(1);
				}
			}
		}
		pss:return 1;
	}
};
void main()
{
	INDEX index;
	CONTACTS contacts;
	int ch,r,l,ch1;
	int x;
	LOCK lock;
	clrscr();
	created_by();
	start();

	lck:
	about();

	x=1;
	l=lock.lock_phone();
	while(x<80)
	{
		gotoxy(x,13);
		cout<<"±";//Alt+177
		delay(25);
		x++;
	}

	abc:
	do
	{
		clrscr();

		ch=index.menu();
		switch(ch)
		{
			case 1 : //Contacts
				r=contacts.cont();
				if(r==1)
				{
					goto abc;
				}

			break;
			case 2 :
				clrscr();
				CALLS call;
				call.make();
			break;
			case 3 :
				MESSEGES msg;
				msg.send();
			break;
			case 4 :
				clrscr();
				NOTE n;
				n.n_menu();
			break;
			case 5 :
				CALCULATOR cal;
				cal.selection();

			break;
			case 6 :
				clrscr();
				CALENDER c;
				c.calen_call();
				c.display();
			break;
			case 7 : //clock

				clk:
				r=clk1();
				if(r==1)
				{
					goto clk;
				}
			break;
			case 8 :
				clrscr();
				int gd=DETECT,gm;
				initgraph(&gd,&gm,"C:\TC\BGI");
				setbkcolor(9);
				setcolor(RED);
				pro();
				logic p;
				r=p.menu();
				if(r==1)
				{
					goto abc;
				}
			break;
			case 9 :
				goto lck;
			break;
			case 0 :
				cout<<"\n\nTHANK YOU VISIT AGAIN";
			break;

		}
	}while(ch!=0);
	getch();
}
int clk1()
{
	int ch1;
	CLOCK clock;
	do
	{
		clrscr();
		cout<<"\n 1 - ANALOGE Clock   ";
		cout<<"\n 2 - DIGITAL clock";
		cout<<"\n 3 - Timer   ";
		cout<<"\n 0 - Back    ";
		cout<<"\n\n\t\tEnter Your Choice  :  ";

		cin>>ch1;
		if(ch1==1)
		{
			int gdriver=DETECT,gmode,h,m,s,a,b,c;
			initgraph(&gdriver,&gmode,"C:\tc\bgi");

			struct  time t;
			gettime(&t);
			h=t.ti_hour;
			m=t.ti_min;
			s=t.ti_sec;

			a=clock.calculate_hrs(h);
			b=clock.calculate_min(m);
			c=clock.calculate_min(s);
			a=clock.change_hrs(m,a);
			for(int i=a;i>0;i-=6)
			{
				for(int j=b;j>0;j-=6)
				{
					for(int k=c;k>0;k-=6)
					{
						settextstyle(1,HORIZ_DIR,5);
						setcolor(BLUE);
						outtextxy(190,20,"Analog Clock");
						settextstyle(8,HORIZ_DIR,2);

						setcolor(BLUE);
						circle(300,200,102);
						setcolor(YELLOW);
						circle(300,200,100);
						outtextxy(385,195,"3");
						outtextxy(295,108,"12");
						outtextxy(207,195,"9");
						outtextxy(295,280,"6");

						circle(345,123,2);
						circle(378,155,2);
						circle(378,245,2);
						circle(345,280,2);
						circle(253,278,2);
						circle(223,245,2);
						circle(223,155,2);
						circle(253,123,2);

						setcolor(RED);
						pieslice(300,200,i-1,i,75);
						setcolor(WHITE);
						pieslice(300,200,j-1,j,85);

						setcolor(BLUE);
						pieslice(300,200,k-1,k,95);

						setcolor(RED);
						settextstyle(3,HORIZ_DIR,1);
						outtextxy(360,400,"Press any key to exit");
						sleep(1);
						clearviewport();

						if(i==6)
						a=360;
						if(j==6)
						b=360;
						if(k==6)
						c=360;
						if(kbhit())
						{
							clearviewport();
							return 1;
						}

					}
				 }
			}
		}
		else if(ch1==2)
		{
			clrscr();
			digital();
		}
		else if(ch1==3)
		{
			int r=clock.timer();
			if(r==1)
			{
				return 1;
			}
		}
		else if(ch1==0)
		{
			cout<<"Returning to main Menu";
			return 2;
		}
	}while(ch1!=0);
}
void created_by()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLACK);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	setcolor(BROWN);
	outtextxy(0,90,"welcome to our mini project....");

	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
	setcolor(WHITE);
	outtextxy(0,230,"created by....");

	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	setcolor(GREEN);
	outtextxy(110,300,"YASH ADITYA PRATIK");
	delay(5000);
}
void start()
{
	cleardevice();
	settextstyle(GOTHIC_FONT,HORIZ_DIR,10);
	setcolor(BLUE);
	outtextxy(190,120,"Y");
	delay(1000);
	setcolor(BLUE);
	outtextxy(270,120,"A");
	delay(1000);
	setcolor(BLUE);
	outtextxy(370,120,"P");
	delay(2000);
}
void digital()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"");
	struct time t;
	int th=t.ti_hour;
	int tm=t.ti_min;
	int ts=t.ti_sec;
	int tms=t.ti_hund;
	//setbkcolor(15);
	gettime(&t);
	DIGITAL h(8,DIGCOLOR,1);
	DIGITAL m(8,DIGCOLOR,1);
	DIGITAL s(8,DIGCOLOR,1);
	DIGITAL ms(2,DIGCOLOR,1);
	int y=200;
	int flag=1;
	h.PutDig(20,y,t.ti_hour);
	m.PutDig(220,y,t.ti_min);
	s.PutDig(380,y,t.ti_sec);
	ms.PutDig(500,y,t.ti_hund);
	while(!kbhit())
	{
		gettime(&t);
		if(th!=t.ti_hour)
		{
			th=t.ti_hour;
			h.PutDig(20,y,t.ti_hour);
		}
		if(tm!=t.ti_min)
		{
			tm=t.ti_min;
			m.PutDig(220,y,t.ti_min);
		}
		if(ts!=t.ti_sec)
		{
			ts=t.ti_sec;
			s.PutDig(380,y,t.ti_sec);
			drawdot();
			color=color-DOTCOLOR;
			if(color<0)
			color=DOTCOLOR;
		}
		if(tms!=t.ti_hund)
		{
			tms=t.ti_hund;
			ms.PutDig(500,y,t.ti_hund);
		}
	}
	getch();
}
void drawdot()
{
	int x,y,gap,size,c;
	c=color;
	gap=10;
	size=15;
	x=170;
	y=200;
	setfillstyle(1,color);
	bar(x+gap,y+gap,x+gap+size,y+gap+size);
	bar(x+gap,y+8*gap,x+gap+size,y+8*gap+size);
	//color=15;
	delay(0);
}

void us(char buf[25])
{
	"CONGRATULATIONS";
	int grd, grm;
	int  xmax, ymax,color,j;
	int bgcolor;
	detectgraph(&grd,&grm);
	initgraph(&grd, &grm,"C:\TC\BGI");
	bgcolor=9;
	setbkcolor(LIGHTBLUE);
	xmax = getmaxx();
	ymax = getmaxy();
	setcolor(WHITE);
	rectangle(0,0,xmax,ymax);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	color = GREEN;
	for(j = 0; j <= 10; j++)
	{
		if( (j % 2) == 0)
		{
			setcolor(color++);
			outtextxy(5,100,buf);
			delay(400);
			if(color > WHITE)
			{
				color = GREEN;
			}
		}
		else
		{
			setcolor(bgcolor);
			outtextxy(5,100,buf);
			delay(400);
		}
	}
	//getch();
}
void pro()
{
	void *buffer;
	unsigned int size;
	cleardevice();
	setbkcolor(LIGHTBLUE);
	setcolor(RED);
	//us();
	line(230,330,370,330);
	line(230,350,370,350);
	line(226,335,226,345);
	line(226,335,230,330);
	line(226,345,230,350);
	line(374,335,374,345);
	line(374,335,370,330);
	line(374,345,370,350);
	settextstyle(7,0,6);
	outtextxy(100,150,"TIC - TAC - TOE");
	settextstyle(6,0,2);
	outtextxy(275,365,"LOADING");
	int x=232,y=336;
	int x1=236,y1=344;
	for(int i=1;i<5;i++)
	{
		setfillstyle(1,BLUE);
		bar(x,y,x1,y1);
		x=x1+2;
		x=x1+6;
	}
	size=imagesize(232,336,256,344);
	buffer=malloc(size);
	getimage(232,336,256,344,buffer);
	x=232;
	int m=0;
	while(!kbhit())
	{
		putimage(x,336,buffer,XOR_PUT);
		x=x+2;
		if(x>=350)
		{
			m++;
			x=232;
			if(m==5)
			return;
		}
		putimage(x,336,buffer,XOR_PUT);
		delay(15);
	}
}
void about()
{
	clrscr();
	cout<<"		       _____CREDITDS____	";
	delay(300);
	cout<<"\n\n\t Project Made By : ";
	delay(300);
	cout<<"\n\n            YASH PARMAR.              1606093";
	delay(300);
	cout<<"\n\n            PRATIK KORDE.             1606136";
	delay(300);
	cout<<"\n\n            ADITYA NANGARE.           1606088";
	delay(300);
	cout<<"\n\n\t Guided By:";
	delay(300);
	cout<<"\n             Mrs. NANDA WAGH";
	delay(500);
	getchar();
}