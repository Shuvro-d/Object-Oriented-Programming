/*
      Encapsulation means making the variables private. Like making them protected inside a capsule. So that anybody can't directly use
      them. To use them we created a constructor and class methods. So using these methods we can use the private variables.
*/
#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
class youtubechannel
{
private:
    string name;
    string ownername;
    int subscriberscount;
     list<string>publishedvideotitles;

  public:
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
    void getname(){
       cout<<name<<endl;
    }
  void setname(string s){
      name = s;
  }
    void subscribe(){
    subscriberscount++;
    }
    void unsubscribe(){
        if(subscriberscount>0)
           subscriberscount--;
    }
    void publishvideo(string title){
      publishedvideotitles.push_back(title);
    }
};
// Driver Code
int main()
{
    youtubechannel ytchannel("codebeauty","saldina");
    ytchannel.publishvideo("c++ for beginners");
    ytchannel.publishvideo("oop  for beginners");
    ytchannel.publishvideo("html for beginners");
    ytchannel.subscribe();
    ytchannel.subscribe();
    ytchannel.subscribe();
    ytchannel.unsubscribe();
    ytchannel.getinfo();
    ytchannel.getname();
    ytchannel.setname("shuvro");
    ytchannel.getinfo();
    return 0;
}

