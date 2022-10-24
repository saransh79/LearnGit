#include <iostream>

using namespace std;
int binarysearch(int input[], int start, int end, int element){   
    if(end>=start){
        int mid = (start+end)/2;    
        if(input[mid]==element){
            return mid;   
        }
        if(input[mid]>element){
            return binarysearch(input,start,mid-1,element);   
        }else{
            return binarysearch(input,mid+1,end,element);
        }
    }else{
        return -1;   
    }
}
int binarySearch(int input[], int size, int element) {
    binarysearch(input,0,size-1,element);
}
int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
