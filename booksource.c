#include<stdio.h>
#include<string.h>
#include"bookheader.h"

int n;

void main()
	{
			printf("\t\t\t\t PRADIP BOOK DEPO.");
			printf("\n 76/B, Appa Balwant Chowk, opposite Jogeshwari Mandir, Budhwar Peth, Pune, Maharashtra 411002");
		printf("\n\n STORE the Information of book ");
		
		printf("\n plz  Enter how many book u want store :");
		scanf("%d",&n);	
		 Book b1[n];
		 
		 
	
		  int exit=0;
	     do{
		 
		int ch ;
		printf("\n a)TO store book press 1 \n b)TO DISPLAY the collection of BOOK'S  press 2 \n c)TO SEARCH a book in store press 3 \n d)TO remove any book in sotre press 4 \n e)To update price of book press 5:\n f) TO find top 3 book's by' rating press 6:");
		scanf("%d",&ch);
		if(ch==2)
		{
			display(b1,n);
		}
		if(ch==3)
		{
			search(b1,n);
		}
		if(ch==4)
		{
			removeb(b1);
		}
		if(ch==5)
		
		{
			updateb(b1,n);
		}
		if(ch==1)
		{
			store(b1,n);
			//storen(b1,n);
		}
		if(ch==6)
		{
			top(b1,n);
		}
		printf("\n \n  If you continue......");
	}while(exit==0);
	
	}

