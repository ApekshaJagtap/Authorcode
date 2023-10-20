#include "author.h"
Author::Author()
{
	author_id=0;
	total_sale=0;
	no_books=0;
}
Author::Author(int author_id,int total_sale,int no_books)
{
	this->author_id=author_id;
	this->total_sale=total_sale;
	this->no_books=no_books;
}
Author::available_copy()
{
	return no_books-total_sale;
}
