#include<stdio.h>
#include<malloc.h>

struct employee 
{
int id;
char name[10];
int sal;
int comm;
struct employee* next;
};

typedef struct employee emp;
int count=0;
emp* root;

void create()
{
root=NULL;
}


void CreateNewEmployee()
{
emp* em,*t;
em=(emp*)malloc(sizeof(emp));
count++;
em->id=count;
printf("\nEnter the Employee Name ");
scanf("%s",em->name);
printf("\nEnter Salary ");
scanf("%d",&em->sal);
printf("\nEnter Commission ");
scanf("%d",&em->comm);
em->next=NULL;
if(root==NULL)
root=em; 
else
{
t=root;

while(t->next!=NULL)
{
t=t->next;
}
t->next=em;
}
}


void PrintEmployee(int idno)
{
if(root==NULL)
printf("List is Empty");
else
{
emp * t=root;
while(t->id!=idno)
{
t=t->next;
}
printf("ID\t:\t%d\nNAME\t:\t%s\nSALARY\t:\t%d\nCOMM\t:\t%d\n",t->id,t->name,t->sal,t->comm);
}}


void PrintAllEmployee()
{
emp*t;
t=root;
if(root==NULL)
printf("list is empty");
else
{
printf("ID\tNAME\t\t\tSALARY\tCOMM\t\n");
while(t!=NULL)
{
printf("%d\t%s\t\t\t%d\t%d\t\n",t->id,t->name,t->sal,t->comm);
t=t->next;
}
}
}

void DeleteEmployee(int idno)
{
emp* t,*t1;
if(root==NULL)
printf("List is Empty");
else
{
t=root;
if(root->id==idno)
{
	if(root->next!=NULL)
	{
	root=root->next; free(t);}
	else
	{
	root=NULL;
	free(t);
	}
}
else
{
	while(t->id!=idno)
	{
	t1=t;
	t=t->next;
	}
	t1->next=t->next;
	free(t);
}
}
}
int AnnualSalary(int idno)
{
emp*t;
int as;
t=root;
if(root==NULL)
return 0;
else
{
while(t->id!=idno)
{
t=t->next;
}
as=t->sal*12;
}
return as;
}

void GetAnnualSalaryOfEmployee(int idno)
{
int as;
as=AnnualSalary(idno);
if(as==0)
printf("List is Empty");
else
{
PrintEmployee(idno);
printf("ANNUAL SALARY:\t%d",as);
}
}

void TotalOfAnnualSalaryOfAllEmployee()
{
int total=0,as,i;
emp* t=root;
if(root==NULL)
printf("List is Empty");
else
{
while(t!=NULL)
{
as=AnnualSalary(t->id);
printf("ID:%d\t:\t%d\n",t->id,as);
total=total+as;
t=t->next;
}
printf("Total\t:\t%d",total);
}
}

int Tax(int idno)
{
return AnnualSalary(idno)*0.10;
}

void TaxOfEmployee(int idno)
{
int as;
as=Tax(idno);
if(as==0)
printf("List is Empty");
else
{
PrintEmployee(idno);
printf("TAX OF EMPLOYEE:\t%d",as);
}
}

void TotalOfTaxOfAllEmployee()
{
int total=0,as,i;
emp* t=root;
if(root==NULL)
printf("List is Empty");
else
{
while(t!=NULL)
{
as=Tax(t->id);
printf("ID:%d\t:\t%d\n",t->id,as);
total=total+as;
t=t->next;
}
printf("Total Tax\t:\t%d",total);
}
}


int main()
{
int ch,data,idno;

create();
do
{
printf("\n1. Create New Employee\n2. Print Employee Details\n3. Print All Employee\n4. Delete perticular Employee Details\n5. Get Annual Salary of Employee\n6. Total of Annual Salary Of All Employee\n7. Tax Of Employee\n8. Total Of Tax Of All Employees\n0. Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:CreateNewEmployee();break;
case 2:printf("enter ID "); scanf("%d",&data); PrintEmployee(data); break;
case 3:PrintAllEmployee();break;
case 4:printf("Enter ID "); scanf("%d",&data); DeleteEmployee(data); break;
case 5:printf("Enter ID "); scanf("%d",&data); GetAnnualSalaryOfEmployee(data); break;
case 6:TotalOfAnnualSalaryOfAllEmployee(); break;
case 7:printf("Enter ID "); scanf("%d",&data); TaxOfEmployee(data); break;
case 8:TotalOfTaxOfAllEmployee(); break;
case 0:printf("Exiting\n"); break;
default : printf("Wrong Input"); break;
}
}while(ch!=0);
}
