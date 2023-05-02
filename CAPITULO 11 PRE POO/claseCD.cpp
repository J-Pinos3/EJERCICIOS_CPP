#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CD{

private:
    string interpret, title;
    int minutes;

public:
    CD(const string& i ="", const string &t ="", int m = 0){
        this->interpret = i;
        this->title = t;
        this->minutes = m; 
    }

    const string& getInterpret() const { return interpret; }
    string dameInterprete() const { return interpret; }

    const string& getTitle() const { return title; }
    int getMinutes() const { return minutes; }
};

void printCd_Info(CD cd);

int main(int argc, char const *argv[])
{
    CD cd1("Mister x","Dance",61);
    const CD cd2("Steve More","Wires",80);
    CD cd3 = cd1;
    CD cd4;

    string line(70,'-');
    line.append("\n");

    cout << line << left << setw(20) << "Interpreter" << setw(30) << "Title" <<
            "Length(min)" << line << endl;

    printCd_Info(cd1);
    printCd_Info(cd2);
    printCd_Info(cd3);
    printCd_Info(cd4);


    cd4 = cd2;

    printCd_Info(cd4);




    
    return 0;
}

void printCd_Info(CD cd){
    cout <<cd.dameInterprete()<< endl;
    cout << left << setw(20) << cd.getInterpret()
                << setw(30)  << cd.getTitle()
            << right << setw(5) << cd.getMinutes() << endl;
}