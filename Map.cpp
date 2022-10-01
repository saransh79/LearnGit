#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, float> marks;
    marks["saransh"]=98.5;
    marks["shivam"]=92.8;
    marks["sulaksh"]=91.0;
    marks["ritik"]=94;
    marks["sunil"]=90.0;
    map<string, float> :: iterator it;

    marks.insert({{"rohit", 89}, {"vikas", 97}});
    for (it= marks.begin(); it != marks.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    return 0;
}