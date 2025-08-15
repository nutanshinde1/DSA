#include <iostream>
using namespace std;

 int main(){
    int arr[]={2,4,6,8,10};
    int key;
    int i;
   cout<<"enter the key";
   cin>>key;
   int found;

   for(i=0;i<5;i++){
      if(key==arr[i]){
         found=1;
      }
      else{
         found=0;
      }
   }
if(found==1){
   cout<<"Key is found at "<< i << endl ;
}
else{
   cout<<"Key is not found";
}

 }