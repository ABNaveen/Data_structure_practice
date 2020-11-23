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
        int next = size-n;
        for(int i=next;i<size;i++){
                swap(&arr[i],&arr[next]);
                permutation(arr,n-1,size);
                swap(&arr[i],&arr[next]);
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
