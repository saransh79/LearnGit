#include <iostream>

using namespace std;
#include<cstring>

int stringToNumber(char input[]) {
    int k;
   if(strlen(input)==0)
   {
       return 0;
   }
int ans=stringToNumber(input+1);
   if(input[0]=='0')
   {
       return ans;
       
   }
    else if(input[0]!='0')
    {
        int small=atoi(input);
    
    k=ans;
        while(ans!=0)
        {
            ans=ans/10;
            small=small*10;
        }
        return k+small;
        
        
    }

}



int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
