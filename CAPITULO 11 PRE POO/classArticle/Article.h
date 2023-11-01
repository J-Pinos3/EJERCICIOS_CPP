#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

class Article{

private:
    int article_number;
    std::string article_name;
    double price;

    static int number_of_objects;

public:
    Article(int a, const std::string& s, double p);
    Article();
    Article(const Article& arr);
    ~Article();
    void Print() const;

    void setArticle_number(int n);
    void setArticle_name(const std::string& s);
    void setPrice(double p);

    int getNumber() const;
    std::string getName() const;
    double getprice() const;


};


#endif //ARTICLE_H