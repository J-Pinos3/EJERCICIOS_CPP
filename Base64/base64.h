#ifndef BASE64_H
#define BASE64_H

#include <cmath>
#include <string>
#define BASE64 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
using namespace std;

struct Base64{

    static string Cifrar(string t);
    static string Descifrar(string t);

private:
    static string int2bin(int n, int base);
    static int bin2int(string b);

};



#endif // BASE64_H
