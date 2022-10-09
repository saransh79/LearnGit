#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="asdgfgrfvsretvt";

    //convert into uppercase 

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] -=32;
    }
    cout<<str<<endl;

    string s1 ="FGFBMIBJWB";

    //converts into lowercase

    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i] += 32;
    }
    cout<<s1<<endl;

    //function which converts case


    string s2="dfaroighlghjl";
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    cout<<s2<<endl;
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2<<endl;

    
    
    return 0;
}