#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class emp
{
	public:
	int age;
	float sal;
	char na[10];

	emp get()
	{
		emp t;
		cout<<"enter name:";
		gets(na);
		cout<<"enter age:";
		cin>>age;
		cout<<"enter salary:";
		cin>>sal;
		strcpy(t.na,na);
		t.age=age;
		t.sal=sal;

		return t;
	}
	void disp()
	{
		cout<<"Name:";
		puts(na);
		cout<<"Age:"<<age<<endl;
		cout<<"Salary:"<<sal<<endl;
		cout<<endl;
	}
};

//global varabiale
emp c[10];
int i,b,x1,r=0,n1=0;
char h[10];


/*this function is used to save employee details to
 new array position or if their is any empty array position
 then the new details are filled their*/



void def()
{
			emp e1;
			for(x1=0;x1<=i-1;x1++)
			{
				if(c[x1].age==0)
				{
					c[x1]=e1.get();
					r++;
				}
			}
			if(r==0)
			{
				c[i]=e1.get();
				i++;
			}
			r=0;


}

/*this function is used to delete any employee detail using the name detail*/
void del()
{
	cout<<"Enter the name to delete:"<<endl;
	gets(h);
	for(b=0;b<=i-1;b++)
	{
		if(strcmp(c[b].na,h)==0)
		{
			c[b].age=NULL;
			c[b].sal=NULL;
			strcpy(c[b].na,NULL);
		}
	}
}

/*this function is used to update the salary or name or age od employee*/
void update()
{
	cout<<"Enter the name to update:"<<endl;
	gets(h);
	int q;
	cout<<"1. update name:"<<endl;
	cout<<"2. update age:"<<endl;
	cout<<"3. update salary:"<<endl;
	cout<<"4. update all:"<<endl;
	cout<<"Enter your choise:"<<endl;
	cin>>q;
	switch(q)
	{
		case 1:
			for(b=0;b<=i-1;b++)
			{
				if(strcmp(c[b].na,h)==0)
					{
						cout<<"enter new name:"<<endl;
						gets(c[b].na);
					}



			}
			break;
		case 2:
			for(b=0;b<=i-1;b++)
			{
				if(strcmp(c[b].na,h)==0)
					{
						cout<<"enter new age:"<<endl;
						cin>>c[b].age;
					}
			}
			break;
		case 3:
			for(b=0;b<=i-1;b++)
			{
				if(strcmp(c[b].na,h)==0)
					{
						cout<<"enter  new salary:"<<endl;
						cin>>c[b].sal;
					}
			}
			break;
		case 4:
			for(b=0;b<=i-1;b++)
			{
				if(strcmp(c[b].na,h)==0)
					{
						cout<<"enter new age:"<<endl;
						cin>>c[b].age;
						cout<<"enter  new salary:"<<endl;
						cin>>c[b].sal;
						cout<<"enter new name:"<<endl;
						gets(c[b].na);
					}
			}
			break;
	}
}
/*this function sort the list according to age of the employee*/
void sort()
{



	int i1,i3;
	for(i1=0;i1<=i-1;i1++)
	{
		for(i3=0;i3<=i-1;i3++)
		{
			if(c[i1].age>c[i3].age)
			{
				emp t1;
				t1=c[i1];
				c[i1]=c[i3];
				c[i3]=t1;
			}
		}
	}
	for(i1=0;i1<=i-1;i1++)
	{
		 cout<<"sorted according to age:"<<endl;
		 c[i1].disp();
	}
}




/*this funcyion search th*/
void search()
{

	cout<<"Enter the name to be Search:"<<endl;
	gets(h);
	for(b=0;b<=i-1;b++)
	{
		if(strcmp(c[b].na,h)==0)
		{
			cout<<"Name:"<<endl;
			puts(c[b].na);
			cout<<"Age:"<<c[b].age<<endl;
			cout<<"salary:"<<c[b].sal<<endl;
		}
	}
}
void main()
{
	int n,d=0,x;
	clrscr();
do
{
clrscr();
cout<<"********************************************************************************";
	cout<<"MENU:"<<endl;
	cout<<" 1. create:"<<endl;
	cout<<" 2. display:"<<endl;
	cout<<" 3. delete:"<<endl;
	cout<<" 4. update:"<<endl;
	cout<<" 5. search:"<<endl;
	cout<<" 6. sort:"<<endl;
	cout<<" 7. exit:"<<endl<<endl;
cout<<"********************************************************************************";
cout<<"********************************************************************************";
	cout<<"enter your choice:"<<endl;
	cin>>n;

cout<<"********************************************************************************"<<endl;

	switch(n)
	{
		case 1:
			clrscr();
cout<<"*********************************ENTER DATA*******************************"<<endl;
			def();
			cout<<" Added Successfully "<<endl<<endl;
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 2:
			clrscr();
cout<<"******************************LIST OF EMPLOYEE*******************************"<<endl;
			for(x=0;x<=i-1;x++)
			{
				c[x].disp();
			}
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 3:
			clrscr();
			del();
			cout<<"Deleted Successfully"<<endl;
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 4:
			clrscr();
cout<<"*********************************UPDATION*******************************"<<endl;
			update();
			cout<<"Updated Successfully"<<endl;
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 5
		:
			clrscr();
			search();
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 6:
			clrscr();
			sort();
			cout<<"Please Press 'ENTER':";
			getch();
			break;
		case 7:
			d++;
			break;
	}

}while(d!=1);
	cout<<"  Thank You:"<<endl;
	getch();
}
