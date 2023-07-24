typedef struct Book
	{
		char name[20];
		int id;
		char author[20];
		float price;
		float rating;
	}Book;

void store(Book *,int);
void storen(Book *,int);
void display(Book*,int);
void search(Book*,int);
void removeb(Book*);
void updateb(Book*,int);
void top(Book *,int);

