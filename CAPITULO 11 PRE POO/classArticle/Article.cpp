#include "Article.h"
#include <iostream>
#include <iomanip>
#include <locale>
#include <stdexcept>

int Article::number_of_objects = 0;

Article::Article(int a, const std::string& s, double p){

    if(p < 0){
        throw std::invalid_argument("Price must be >= 0. Price will be seted to 0.");
        p = 0;
    }
    this->article_number = a;
    this->article_name = s;
    this->price = p;
    number_of_objects+=1;

    std::cout << "An object of type Article is created\n";
    std::cout << "The article: " << article_name <<
    " is the  " << number_of_objects << " article.\n";

}

Article::Article(){
    this->article_number = 0;
    this->article_name = "";
    this->price = 0.0;

    number_of_objects+=1;

    std::cout << "An object of type Article is created\n";
    std::cout << "The article: " << article_name <<
    " is the  " << number_of_objects << " article.\n\n";
}


Article::~Article(){
    number_of_objects--;
    std::cout << "An object of type Article is destroyed\n";
    std::cout << "There are still " << number_of_objects << " objects.\n\n";
}

void Article::Print() const{

    //std::cout.imbue(std::locale("en_US.utf-8"));

    int len = article_name.size()+5;
    std::cout << "Article N: " << this->article_number << std::endl;
    std::cout <<"Article Name: "<<std::setw(len)<< this->article_name << std::endl;
    std::cout <<"Price: "<<std::setw(10)<<std::put_money(this->price, true)<< std::endl;

    //std::cout.width(10); 
}


void Article::setArticle_number(int n){
    this->article_number = n;

}
void Article::setArticle_name(const std::string& s){
    this->article_name = s;

}
void Article::setPrice(double p){
    if(p < 0){
        throw std::invalid_argument("Price must be >= 0. Price will be seted to 0.");
        p = 0;
    }
    this->price = p;

}


int Article::getNumber() const{

    return this->article_number;
}
std::string Article::getName() const{

    return this->article_name;
}
double Article::getprice() const{

    return this->price;
}