#include<stdio.h>
#include<string.h>
#include"bookheader.h"

int n;
void store(Book * ptr,int a)
	{
		int i;
		for(i=0;i<a;i++)
		{
			printf("\n Enter the book name:");
			scanf("%s",&ptr[i].name);
			printf(" Enter the book id :");
			scanf("%d",&ptr[i].id);
			printf(" Enter the book author name :");
			scanf("%s",&ptr[i].author);
			printf(" Enter the book price:");
			scanf("%f",&ptr[i].price);
			printf(" Enter the book rating:");
			scanf("%f",&ptr[i].rating);
		}
	}	
void display(Book * ptr,int a)
	{
		int i;
		for(i=0;i<a;i++)
		{
			printf("\n \t\t BOOK name : %s ",ptr[i].name);
			printf("\n Author : '%s' ",ptr[i].author); 
			printf(" book id : %d ",ptr[i].id);
			printf( "price : %.2f ",ptr[i].price);
			printf( "rating(*) : %.1f ",ptr[i].rating);
		}
	}
void search(Book *ptr,int a)
	{
		int i,j,c,d=0,q=0,f=0;
		char *ans;
		char sn[10];
		char sa1[10];
		int id;
		int  ch;
		printf("\n To search by name press 1::TO search by id press 2 :: to search by author 3:-");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf(" Enter the name of book  :");
			scanf("%s",&sn);
			for(i=0;i<a;i++)
			{
				if(strcmp(ptr[i].name,sn)==0)
				{
				 	q++;		
					break;
				}
			}
			if(q==1)
				printf("\nBOOK name is '%s'',Author is '%s'',book id is '%d'' and price is '%1.f' ",ptr[i].name,ptr[i].author,ptr[i].id,ptr[i].price);		
			else 
				printf("book not found.");	
		
	}
		if(ch==2)
		{
			printf("Enter the id of book :");
			scanf("%d",&id);
			for(j=0;j<a;j++)
			{
				if(id==ptr[j].id)
				{
					f++;
					break;
				}
			}
			if(f==1)
			printf("Id of book found and name of  book is '%s'",ptr[j].name);
		}
		if(ch==3)
		{
			printf(" Enter the author name   :");
			scanf("%s",&sa1);
			for(c=0;c<a;c++)
			{	
				if(strcmp(ptr[c].author,sa1)==0)
				{
				 	d++;	
					break;
				}

			}
			if(d==1)
				printf("\n This Author is '%s' name is book '%s' book id is '%d' and price is '%1.f' ",ptr[c].author,ptr[c].name,ptr[c].id,ptr[c].price);		
			else 
				printf("book not found.");	
		}			
		
	}
void removeb(Book * ptr)
	{    int j,i;
		char name[10];
		int id,d=0;
			
		printf("Enter the ID to remove book  form sotre :");
		scanf("%d",&id);
		
			for(j=0;j<n;j++)
			{
				if(id==ptr[j].id)
				{
					for(i=j;i<n-1;i++)
					ptr[i]=ptr[i+1];
					d++;
					//break;
				}
				
			}
			n=n-1;
			if(d==1)
			{	printf("After removing book data :");
				display(ptr,n);
			printf("\n -*-*-*----Book is removed succefully...-----*-*-*-");
			}
			else
				printf("book name is not found.");
		}
	
void updateb(Book * ptr,int a)
	{
		  int i,j,c=0,ch;
		int id;
		float price,rating;
		char name[10];
		printf("  To update price press 1 :: to update rating 2::");
		scanf("%d",&ch);
		if (ch==1)
		{
			printf("Enter book name to update  price :");
			scanf("%s",&name);
			printf("\n Enter  updated  price :");
			scanf("%f",&price);
			
				for(i=0;i<a;i++)
				{
					if(strcmp(ptr[i].name,name)==0)
					{
						ptr[i].price=price;
						c++;
						break;
					}
				}
				if(c==1)
				{
					printf("updated book price of %s book is %.2f",ptr[i].name,ptr[i].price);
				printf("\n -*-*-*----Book  price is updated succefully...-----*-*-*-");
				}
				else
					printf("book price is not updated.");
		}
		if (ch==2)
		{
			printf("Enter the id of book :");
			scanf("%d",&id);
			printf("Enter rating to upgrade : ");
			scanf("%f",&rating);
			for(j=0;j<a;j++)
			{
				if(id==ptr[j].id)
				{
					ptr[j].rating=rating;
					
				}
			}
			printf("updated rating of book id '%d' is '%2.f'",ptr[j].id,ptr[j].rating);
		
		}
	}
void top(Book * str,int a)
{	
		Book ptr[a],temp[a];
		int i,j,c=0,e;
		
		for(e=0;e<a;e++)
		{
			ptr[e]=str[e];
		}
		for(i=0;i<a;++i)
		{
			for(j=i+1;j<a;++j)
			{
				if(ptr[i].rating<ptr[j].rating)
				{
					temp[0]=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=temp[0];
				}
				
			}
			
		}
		printf("BY  RATING TOP three BOOK ");
		display(ptr,3);
		
	
}
	

