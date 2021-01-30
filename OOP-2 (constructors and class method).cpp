/*
In this program we will learn constructor and class method.
we use this to avoid repeating of code in the program.

Constructor has two simple rules -
   1. It has the same name as the class
   2. it does not have any return type

   class method is just like function. we send parameters and it
   performs the work for us
*/

#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
class youtubechannel
{
public:
    string name;
    string ownername;
    int subscriberscount;
    list<string>publishedvideotitles;


  //this is constructor
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
};
// Driver Code
int main()
{
    youtubechannel ytchannel("codebeauty","saldina");
    ytchannel.publishedvideotitles.push_back("c++ for beginners");
    ytchannel.publishedvideotitles.push_back("oop  for beginners");
    ytchannel.publishedvideotitles.push_back("html for beginners");
    ytchannel.getinfo();
    youtubechannel ytchannel2("amy sings","amy");
    ytchannel2.getinfo();
    return 0;
}

