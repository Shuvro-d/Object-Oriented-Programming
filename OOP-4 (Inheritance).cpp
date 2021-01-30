#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

//                                                         Inheritance

class youtubechannel
{
private:
    string name;
    int subscriberscount;
    list<string>publishedvideotitles;
protected:
    string ownername; // we want to use the owner name in practice section so we made it protected so we can
public:                     //   can access it inside the derived class. Because Private variables is not usable outside the class
    //     Protected variables are neither private nor public. So it can only be used inside any class but not in main function
    youtubechannel(string Name,string Ownername)
    {
        name =Name;
        ownername=Ownername;
        subscriberscount=0;
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
};
//derived class
/*
      we want to derive a new class cookingyoutube channel. It will have the same features as the youtubechannel class but we don't
      want to copy the codes so we inharited the codes of youtubechannel class below.
      To do that we just put a " : Public  class name" now the new class will inherit all the public features of the
      given class. So we don't need to copy the codes again.
      This is inheritance.
*/
class cookingyoutubechannel:public youtubechannel
{
public:
    cookingyoutubechannel(string Name, string Ownername):youtubechannel(Name, Ownername)
    {

    }
    // we are adding a new feature practice in this class
    // so only this class variables will access this practice fnc
    void practice()
    {
        cout<<ownername<<" is practicing cooking, learning new recipes"<<endl;
    }
};
// Driver Code
int main()
{
    cookingyoutubechannel cookingytchannel("Amy's kitchen","Amy");
    cookingytchannel.publishvideo("Juice");
    cookingytchannel.publishvideo("Curry");
    cookingytchannel.subscribe();
    cookingytchannel.subscribe();
    cookingytchannel.getinfo();
    cookingytchannel.practice();
    return 0;
}



