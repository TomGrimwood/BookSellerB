
#include "BookSeller.h"
#include "Book.h"

#include <iostream>
using namespace std;

int main() {

	BookSeller shop("this WAS gDS (69) CUTNRY", 420);

	cout << "this dumbass busyness is caleled \"" << shop.getShopName() << "\", dis muhucker got " << shop.getBalance() << " raxkks on GOODDDDD" << endl;
    
    Book *sg = new Book("50 Shades of Grey", "J.K. Rowling", 4.20, 6.90, 2010);
    Book *hp = new Book("Hairy Grotter", "J.K. Rowling", 5.20, 1.90, 2000);
    Book *lf = new Book("lord of da piez", "William Golding", 3.20, 8.31, 1892);
    Book *pm = new Book("Pokemon", "Anime Weebs", 5.32, 9.99, 1998);
    
    cout << "the book is called " << sg->getTitle()  << endl;
    cout << "It has an ID of " << sg->getId()  << endl;
    cout << "the book is called " << pm->getTitle()  << endl;
    cout << "It has an ID of " << pm->getId()  << endl;
    
    shop.purchaseStock(pm);
    
    cout << "this dumbass busyness is caleled \"" << shop.getShopName() << "\", dis muhucker got " << shop.getBalance() << " raxkks on GOODDDDD" << endl;
    
    cout << "total number of books in existence = " << Book::numberBooksEverMade() << endl;
    cout << "books in my gay ass shop = " << shop.totalNumberOfBooksInBusiness() << endl;
    
    Book* result = shop.retrieveBookFromID(3);
    cout << "the book you are looking for is " << result->getTitle() << ", by the author " << result->getAuthor() << "." << endl;
    
    delete sg;
	return 0;
}
