

#include <iostream>

using namespace std;
int subset(int input[], int n, int output[][20]) {
  	if(n==1){
      output[0][0] = 0;//length of subset
      output[1][0] = 1;
      output[1][1] = input[0];
      return 2;
    }
  
  	int smallSize = subset(input+1,n-1,output);
  	for(int i=0;i<smallSize;i++){
      output[i+smallSize][0] = output[i][0]+1;
      output[i+smallSize][1] = input[0];
      
      int j=1;
      while(output[i][j]!=0){
        output[i+smallSize][j+1] = output[i][j];
        j++;
      }
    }
    
	return 2*smallSize;
}
int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
