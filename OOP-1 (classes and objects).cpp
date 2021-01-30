/*
  we are starting learning object oriented programming from today.

  In oop there are two most important things class and objects.
  What are these things. Suppose we are learnings the name of fruits.
  the fruit is a class and  the apples, mango,orange are objects
  class is work like data types. Just difference is in a class we
  can use different types of class at a time.
  It's like creating your own data types as you want.
  More simply an array of data types.

*/

#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

//we introduced a class
class youtubechannel
{
public:                                         // If we don't use public all the variables will be private by default
    string name;                           // and we won't be able to use them outside the class
    string ownername;
    int subscriberscount;
    list<string>publishedvideotitles;   // after the public you can also declare private section if you want
};                                                            // just the private variables won't work outside the class
// Driver Code
int main()
{
    youtubechannel ytchannel;
    ytchannel.name="Shuvro's";
    ytchannel.ownername="Shuvro";
    ytchannel.subscriberscount=100;
     ytchannel.publishedvideotitles = {"c++ for beginners","html for beginners","oop for beginners"};
    cout<<"Name : "<<ytchannel.name<<endl;
    cout<<"Owner Name : "<<ytchannel.ownername<<endl;
    cout<<"Subscribers : "<<ytchannel.subscriberscount<<endl;
    cout<<"Videos "<<endl;
    for(string videoTitle: ytchannel.publishedvideotitles){
        cout<<videoTitle<<endl;
    }
    return 0;
}

