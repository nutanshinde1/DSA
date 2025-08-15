#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i;
    int array[5]={2,3,4,5,6};
    int min = INT_MAX;

        for(i=0 ; i<5 ;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<"Smallest Number is : "<< min;
}