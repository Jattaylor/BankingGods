//User.cpp
#include"User.h"
#include<iostream>
using namespace std;

User::User(){
	
	setName(" "," ");
	setID("xxxxx");
	setDOB("0","0","0");

}
User::User(string first_name, string last_name, string day, string month, string year, string id){
	
	setName(first_name, last_name);
	setID(id);
	setDOB(month,day,year);
}
void User::setName(string first, string last){
	
	first_name = first;
	last_name = last;
}
void User::setID(string i){
	
	if(i != "xxxxx")
		id = i;
	else
		id = "xxxxx";
}
void User::setDOB(string m, string d, string y ){
	
	day = d;
	month = m;
	year = y;
}
void User::print(){
		cout<<"Name: "<<first_name<<" "<<last_name<<"\n"
	<<"ID:"<<id<<"\n"
	<<"DOB:"<<month<< " "<<day<<" "<<year<<endl;
}
