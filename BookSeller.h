
#ifndef BOOKSELLER_H_
#define BOOKSELLER_H_
#include "Book.h"
#include <string>
#include <vector>

class BookSeller {
private:
    std::string shopName;
    double cashBalance;
    std::vector<Book*> collection;
public:
	BookSeller(const std::string &shopName, double initialBalance);
    std::string getShopName() const;
    double getBalance() const;
	virtual ~BookSeller();
    void purchaseStock(Book *book);
    int totalNumberOfBooksInBusiness() const;
    Book* retrieveBookFromID(int id) const;
};

#endif /* BOOKSELLER_H_ */
