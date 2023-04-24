/*
7.10 (Sales Commissions) Use a one-dimensional array to solve the following problem: 
A company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of
their gross sales for that week. For example, a salesperson who grosses $5,000 
in sales in a week receives $200 plus 9% of $5,000, or a total of $650.
Write an application (using an array of counters)
that determines how many of the salespeople earned salaries in each of the following ranges (assume
that each salesperson’s salary is truncated to an integer amount):
a) $200–299
b) $300–399
c) $400–499
d) $500–599
e) $600–699
f) $700–799
g) $800–899
h) $900–999
i) $1,000 and over
Summarize the results in tabular format
*/

#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    
    array<int, 11> arr = {457,987,6541,6543,784,324,987,741,8881,910,1154};

    for(int i = 0; i < arr.size(); i++){
        arr[i] = (int)(200 + arr[i]*9/100)/100;
    }

    cout << "Brute sales."<<endl;
    for(const auto &i : arr){
        cout << i <<" ";
    }
    cout << endl;

    for(int i = 0; i < arr.size(); i++){
        if(i == arr.size()-1){
            cout << "$1000 and over"<<endl;
        }else{
            cout <<"$"<<200+i*100 << "-$" << 200+i*100+99<< endl;
        }


        for(int j = 0; j < arr[i]; j++){
            cout <<"*";
        }
        cout << endl;
    }
    

    return 0;
}
