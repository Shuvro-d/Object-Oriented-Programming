#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

//                                                         Polymorphism
/*
       polymorphism describes the ability of an object to have multiple forms. We can have two or more objects that inherit
       from the same base class. those objects can have the methods that have the same name but different implementation meaning
       different behaviours.

       here we create two classes singers class and cooking classes that inherit from the youtube channel class.
       we create a protected variable content quality to check the quality of the channel. if anyone practice the quality of that channel
       increases. we create a method to check the quality.
       now most important to check the variable we use pointers . It is the most important part of polymorphism.
       we assign to pointers and use them to check the quality.
*/

class youtubechannel
{
private:
    string name;
    int subscriberscount;
    list<string>publishedvideotitles;
protected:
    string ownername;
    int contentquality;
public:
    youtubechannel(string Name,string Ownername)
    {
        name =Name;
        ownername=Ownername;
        subscriberscount=0;
        contentquality=0;
    }

    //this is class method
    void getinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Owner Name : "<<ownername<<endl;
        cout<<"Subscribers : "<<subscriberscount<<endl;
        cout<<"Videos "<<endl;
        for(string videoTitle: publishedvideotitles)
        {
            cout<<videoTitle<<endl;
        }
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void setname(string s)
    {
        name = s;
    }
    void subscribe()
    {
        subscriberscount++;
    }
    void unsubscribe()
    {
        if(subscriberscount>0)
            subscriberscount--;
    }
    void publishvideo(string title)
    {
        publishedvideotitles.push_back(title);
    }
    void checkanalytics(){
       if(contentquality<5)
       cout<<name<<" has bad quality."<<endl;
       else
        cout<<name<<" has great quality."<<endl;
    }
};
//derived class

class cookingyoutubechannel:public youtubechannel
{
public:
    cookingyoutubechannel(string Name, string Ownername):youtubechannel(Name, Ownername)
    {

    }
    void practice()
    {
        cout<<ownername<<" is practicing cooking, learning new recipes.."<<endl;
        contentquality++;
    }
};

class singersyoutubechannel:public youtubechannel
{
public:
    singersyoutubechannel(string Name, string Ownername):youtubechannel(Name, Ownername)
    {

    }
    void practice()
    {
        cout<<ownername<<" is practicing singing and learning new songs.."<<endl;
        contentquality++;
    }
};


// Driver Code
int main()
{
    cookingyoutubechannel cookingytchannel("Amy's kitchen","Amy");
    singersyoutubechannel singersytchannel("John sings","john");

    cookingytchannel.practice();
    singersytchannel.practice();
    singersytchannel.practice();
    singersytchannel.practice();
    singersytchannel.practice();
    singersytchannel.practice();

    // assigning pointers
    youtubechannel *yt1=&cookingytchannel;
    youtubechannel *yt2=&singersytchannel;

    yt1->checkanalytics();
    yt2->checkanalytics();
    return 0;
}




