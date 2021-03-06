#include <iostream>
#include <cstring>

void swap(char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
void print(char arr[],int size){
    for(int i=0;i<size;i++)
        std::cout<<arr[i];
    std::cout<<" ";
}
void permutation(char arr[],int n,int size){
    if(n>2){
        int from = size-n;
        for(int i=from;i<size;i++){
                swap(&arr[from],&arr[i]);
                permutation(arr,n-1,size);
                swap(&arr[i],&arr[from]);
            }
    }
    else{
        print(arr,size);
        swap(&arr[size-2],&arr[size-1]);
        print(arr,size);
        swap(&arr[size-2],&arr[size-1]);
    }
}


int main() {
	//code
	int n;
	std::cin>>n;
    char *arr[n];
    for(int i =0;i<n;i++){
        arr[i] = new char[11];
        std::cin>>arr[i];
    }
    for(int i=0;i<n;i++){

        permutation(arr[i],strlen(arr[i]),strlen(arr[i]));
        std::cout<<"\n";
    }
	return 0;
}





// -----OUTPUT-----
/*
2
ABCD
XYZ
ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD CBDA CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC 
XYZ XZY YXZ YZX ZYX ZXY
*/
