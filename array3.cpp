#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i;
    int array[5]={2,3,4,5,6};
    int largest = INT_MIN;

        for(i=0 ; i<5 ;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    cout<<"largest Number is : "<< largest;
}