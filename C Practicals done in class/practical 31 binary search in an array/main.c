#include <stdio.h>

int main () {

    int key;
    scanf("%d" , &key);
    int a[] = {1,2,3,4};
    int low;
    int high = (sizeof a)/sizeof(a[0])-1;
    int mid = (low + high)/2;
    while(key != a[mid]){
        if(low == high){
            printf("not found");    
        }
        if(a[mid]>key){
            high = mid -1;
            mid = (low + high)/2;
        }
        else if (a[mid]<key){
            low = mid + 1;
            mid = (low + high)/2;
        }
        printf("%d" , mid);
    }

    return 0;
}



/*
for(index==0;)
*/