
#include "Book.h"
int Book::nextAvailableId=0;

Book::Book(const std::string &title, const std::string &author, double costPrice, double salePrice, int year) :
        title(title), author(author), costPrice(costPrice), salePrice(salePrice), year(year), sold(false)    {
            
            id = nextAvailableId;
            nextAvailableId++;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

double Book::getCostPrice() const {
    return costPrice;
}

double Book::getSalePrice() const {
    return salePrice;
}

int Book::getPublicationYear() const {
    return year;
}

bool Book::isSold() const {
    return sold;
}

void Book::setSold() {
    sold = true;
}

int Book::getId() const {
    return id;
}

int Book::numberBooksEverMade() {
    return nextAvailableId;
}

Book::~Book() {
}

