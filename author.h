#include<iostream>
#include<string.h>
class Author
{
	private:
		int author_id;
		int total_sale;
		int no_books;
	public:
		Author();
		Author(int author_id,int total_sale,int no_books);
		
		int available_copy();
		
};

