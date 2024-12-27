#include<bits/stdc++.h>
using namespace std;


class AbstractEmployee{
    virtual void AskForPromotion()=0;
};


class Employee:AbstractEmployee{
private: 
    string Company;
    int Age;
protected:
     string Name;
public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18) 
        Age=age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }
    
    
    Employee(string name, string company, int age){
        Name=name;
        Company=company;
        Age=age;
    }
    void AskForPromotion(){
        if(Age>30)
           cout<<Name<<" got promoted"<<endl;
        else
           cout<<Name<<" sorry, no promotion for you"<<endl;
    }

    virtual void Work(){
        cout<<Name<<" is checking email, tadk backlog, performing tasks."<<endl;
    }
};

class Developer: public Employee{
public:
    string FavProLanguage;
    Developer(string name, string company, int age, string fabprolanguage):Employee(name,company,age){
       FavProLanguage=fabprolanguage;
    }

    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProLanguage<<endl;
    }

    void Work(){
        cout<<Name<<" is  writing "<<FavProLanguage<<" codes"<<endl;
    }
};


class Teacher:public Employee{
public: 
    string Subject;
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject=subject;
    }
    void preparedLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lessons"<<endl;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
};


int main()
{
    Employee employe1=Employee("Shuvro","Google",26);
    employe1.IntroduceYourself();
    
    Employee employe2=Employee("John","Facebook",30);
    employe2.IntroduceYourself();
    
    // employe1.setAge(45);
    // cout<<employe1.getName()<<" is "<<employe1.getAge()<<" years old"<<endl;
    // employe1.AskForPromotion();
    // employe2.AskForPromotion();

    Developer d=Developer("Promi","DTU",27,"C++");
    //d.FixBug();
    //d.AskForPromotion();

    Teacher t=Teacher("Sammaneh","SDU",40,"Electronics");
    //t.preparedLesson();
    //t.AskForPromotion();
    //d.Work();
    //t.Work();

    Employee *e1=&d;
    Employee *e2=&t;

    e1->Work();
    e2->Work();
    return 0;
}
