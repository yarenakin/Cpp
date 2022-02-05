/******************************************************************************
Kişi Kaydetme Programı 
struct ve pointer
by Yaren AKIN
06.02.2022
*******************************************************************************/

#include <iostream>
using namespace std;

struct person{
    string name;
    string lastname;
    int age;
};
struct person person_one;
struct person person_two;

void upload_person(struct person (*newPerson),const char (*name),const char (*lastname),const int age)
{
    static int person_number = 1;
    newPerson->name = name;
    newPerson->lastname = lastname;
    newPerson->age = age;
    cout<<"Name of new person: "<<newPerson->name;
    cout<<"\t";
    cout<<"LastName of new person: "<<newPerson->lastname;
    cout<<"\t";
    cout<<"Age of new person: "<<newPerson->age;
    cout<<"\n";
    cout<<"number of people: "<<person_number;
    cout<<"\n";
    person_number++;
}

int main()
{   
    char Name_personone[64] = "Yaren";
    char Lastname_personone[64] = "AKIN";
    int Age_personone = 22;
    
    char Name_persontwo[64] = "Selen";
    char Lastname_persontwo[64] = "AKIN";
    int Age_persontwo = 20;
    
    upload_person(&person_one,Name_personone,Lastname_personone,Age_personone);
    upload_person(&person_two,Name_persontwo,Lastname_persontwo,Age_persontwo);
    return 0;
}
