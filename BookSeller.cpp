
#include "BookSeller.h"
#include "Book.h"


BookSeller::BookSeller(const std::string &shopName, double initialBalance) {
    this->shopName = shopName;
    cashBalance = initialBalance;

}
std::string BookSeller::getShopName() const {
    return shopName;
}

double BookSeller::getBalance() const {
    return cashBalance;
}

void BookSeller::purchaseStock(Book *book){
    
    cashBalance -= book->getCostPrice();
    collection.push_back(book);
}

int BookSeller::totalNumberOfBooksInBusiness() const {
    return collection.size();
}

Book* BookSeller::retrieveBookFromID(int id) const {
    for (unsigned int index = 0; index<collection.size(); index++) {
        Book *book = collection[index];
        int bookID = book->getId();
        
        if (bookID == book->getId()) {
            return book;
        }
    }
    return NULL;
}


BookSeller::~BookSeller() {
}


