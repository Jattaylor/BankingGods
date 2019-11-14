//User.h
#include<string>
using namespace std;
#ifndef USER_H
#define USER_H
class User{
public:

User();
User(string,string,string,string,string,string);
void setName(string, string);
void setDOB(string,string,string);
void setID(string);
virtual void print();

private:
string first_name;
string last_name;
string day;
string month;
string year;
string id;

};
#endif
