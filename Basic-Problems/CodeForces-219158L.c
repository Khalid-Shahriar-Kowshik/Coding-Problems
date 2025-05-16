#include<iostream>
#include<string>

using namespace std;

int main(){

    String fname1;
    String fname2;

    getline(cin,fname1);
    getline(cin,fname2);

    size_t index1= fname1.find(" ");
    size_t index2= fname2.find(" ");

    lname1= fname1.substr(index1 + 1);
    lname1= fname2.substr(index2 + 1);

    printf("%s %s",lname1,lname2);


}



