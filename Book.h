
#ifndef BOOK_H_
#define BOOK_H_
#include<string>
class Book {
private:
    std::string title;
    std::string author;
    double costPrice;
    double salePrice;
    int year;
    bool sold;
    int id;
    static int nextAvailableId;
    
public:
    
	Book(const std::string &title, const std::string &author, double costPrice, double salePrice, int year);
    
    std::string getTitle() const;
    std::string getAuthor() const;
    double getCostPrice() const;
    double getSalePrice() const;
    int getPublicationYear() const;
    bool isSold() const;
    void setSold();
	virtual ~Book();
    int getId() const;
    static int numberBooksEverMade();
};

#endif /* BOOK_H_ */
