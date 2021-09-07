#include <iostream>
#include <Vector>
#include <string>

#include "extra.h"

using namespace std;

int main(){
    Extra extra = Extra();

    cout << extra.number << endl;
    vector<string>msg{"Hello", "C++", "World"};

    for(const string& word : msg){
        cout << word << " ";
    }

    cout << endl;
}