#include<iostream>
#include<cstdio>
using namespace std;

class Branch
{
	protected:
	int code;
	char name[20];
	public:
	void getBranch (void)
	{
		cout<<"\n\nEnter code:-";
		cin>>code;
		cout<<"Enter name:-";
		cin>>name;
	}
	void dispBranch(void)
	{
		cout<<"\nName:-"<<name;
		cout<<"\nCode:-"<<code;
	}
};
class semister :public Branch
{
	char s_name[20];
	char fees[20];
	public:
	void create(void)
	{
		getBranch();
		cout<<"\nEnter sem_name:-"<<s_name;
		cout<<"\nEnter exam fees:-"<<fees;
	}
	void display(void)
	{
		dispBranch();
		cout<<"\n NAME:-"<<s_name;
		cout<<"\n EXAM FEES:-"<<fees;
	}
};
class subject: public Branch
{
	char sub_name[20];
	public:
	void create(void)
	{
		getBranch();
		cout<<"Enter subject name:-";
		cin>>sub_name;
	}
	void display(void)
	{
		dispBranch();
		cout<<"\nsub_name"<<sub_name;
	}
};
class Faculty:public Branch
{
	char F_name[23];
	public:
	void getFaculty(void)
	{
		getBranch();
		cout<<"Enter faculty name:-";
		cin>>F_name;
	}
	void dispFaculty(void)
	{
		dispBranch();
		cout<<"\nFaculty name"<<F_name;
	}
};
class Student :public Branch
{
	int roll_no; char name[12];
	public:
	void create(void)
	{
		getBranch();
		cout<<"Enter roll no. and name:-";
		cin>>roll_no>>name;
	}
	void display(void)
	{
		dispBranch();
		cout<<"\nroll_no and name:-"<<roll_no<<name;
	}
};

int main()
{
	//clrscr();
	semister S[10];
	subject sub[10];
	Faculty F[10]; Student stud[10];
	int choice,i;
	char test;
	while(1)
	{
		int count;
		start:
//		clrscr();
		cout<<"\n=====Educatoin Institution Database=====\n\n\n";
		cout<<"choose category of information\n";
		cout<<"1) semister\n";
		cout<<"2) subject\n";
		cout<<"3) Faculty\n";
		cout<<"4)student\n";
		cout<<"5) Exit\n";
		cout<<"enter your choice:-";
		cin>>choice;
		switch(choice)
		{
			case 1:  while(1)
					{
				//	clrscr();
					cout<<"\n====SEMISTER INFORMATION==\n\n";
					cout <<"\n choose  your choice";
					cout<<"1)CREATE\n";
					cout<<"2)DISPLAY\n";
					cout<<"3)JUMP TO MAIN MENU\n";
					cout<<"4) ENTER YOUR CHOICE:-";
					cin>>choice;
					switch(choice)
					{
						case1:
							for(count=0,i=0;i<10;i++)
							{
								cout<<endl;
								S[i].create();
								count++;
								cout<<endl;
								cout<<"\n\n Are you intrested in entering data\n";
								cout<<"Enter Y or N:-";
								cin>>test;
								if(test=='Y' or test=='Y')
								continue;
								else goto out1;
							}
							out1:
							break;
						case2:
							for(i=0;i<count;i++)
							{
								cout<<endl;
								S[i].display();
								cout<<endl;
							}
							//getch();
							break;
						case3:
							goto start;
							//break;
						default :cout<<"\n ENTER CHOICE IS INVALID\nTRY AGAIN";
					}
					}
			case 2: while(1)
					{
						//clrscr();
						cout<<"\n===SUBJECTS INFORMATION==\n\n";
						cout<<"choose your choice\n";
						cout<<"1)create\n";
						cout<<"2)display\n";
						cout<<"3)jump to main menu\n";
						cout<<"enter your choice:-";
						cin>>choice;
						switch(choice)
						{
						case 1:for(count=0,i=0;i<10;i++)
						{
						cout<<endl;
						sub[i].create();
						count++;
						cout<<endl;
						cout<<"\n\n Are you interested in entering a data\n";
						cout<<"Enter Y or N:-";
						cin>>test;
						if(test=='Y' or test=='Y')
						continue;
						else goto out2;
						}
						out2:
						break;
						case 2:for(i=0;i<count;i++)
						{
						cout<<endl;
						sub[i].display();
						cout<<endl;
						}
						//getch();
						break;
						case 3:goto start;
						default:cout<<"\n Invalide choice\n try again\n\n\n";
					}
					}
			case 3: while(1)
					{
						//clrscr();
						cout<<"\n====FACULTY INFORMATION==\n\n";
						cout <<"\nchoose your choice";
						cout<<"1)CREATE\n";
						cout<<"2)DISPLAY\n";
						cout<<"3)JUMP TO MAIN MENU\n";
						cout<<" ENTER YOUR CHOICE:-";
						cin>>choice;
						switch(choice)
						{
						case 1:
						for(count=0,i=0;i<10;i++)
						{
						cout<<endl;
						F[i].create();
						count++;
						cout<<endl;
						cout<<"\n\n Are you intrested in entering data\n";
						cout<<"Enter Y or N:-";
						cin>>test;
						if(test=='Y' or test=='Y')
						continue;
						else goto out3;
						}
						out3 :
						break;
						case 2:for(i=0;i<count;i++)
						{
						cout<<endl;
						F[i].display();
						count<<endl;
						}
						//getch();
						break;
						case 3:goto start;
						default:cout<<"\n  CHOICE IS INVALID\nTRY AGAIN\n\n";
						}
					}
				case 4:while(1)
						{
							//clrscr();
							cout<<"\n====STUDENT INFORMATION==\n\n";
							cout <<"\nchoose your choice";
							cout<<"1)CREATE\n";
							cout<<"2)DISPLAY\n";
							cout<<"3)JUMP TO MAIN MENU\n";
							cout<<" ENTER YOUR CHOICE:-";
							cin>>choice;
							switch(choice)
							{
							case 1:
							for(count=0,i=0;i<10;i++)
							{
							cout<<endl;
							Stud[i].create();
							count++;
							cout<<endl;
							cout<<"\n\n Are you intrested in entering data\n";
							cout<<"Enter Y or N:-";
							cin>>test;
							if(test=='Y' or test=='Y')
							continue;
							elsegoto out3;
							}
							out3:
							break;
							case 2:for(i=0;i<count;i++)
							{
							cout<<endl;
							stud[i].display();
							cout<<endl;
							}
							//getch();
							break;
							case3: gotoStart;
							default : cout<<"\n  CHOICE IS INVALID\nTRY AGAIN\n\n";
							}
						}
				case5:goto end;
				}
			}
			end: break;
			}
