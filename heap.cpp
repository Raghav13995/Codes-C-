#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int data){
        size=size+1;
        int index=size;
        arr[index]=data;
        while(index>1){
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;  
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"Nothing to delete\n";
            return;
        }

        arr[1]=arr[size];
        arr[size]=-1;
        size--;
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            int index=i;
            if(leftIndex<=size && arr[leftIndex]>arr[index]){
                index=leftIndex;
            }
            if(rightIndex<=size && arr[rightIndex]>arr[index]){
                index=rightIndex;
            }
            
            if(index!=i){
                swap(arr[index],arr[i]);
                i=index;
            }
            else{
                return;
            }
        }
    }
    
};

void heapify(int arr[],int size,int i){
    int l=2*i;
    int r=2*i+1;
    int largest=i;
    if(l<=size && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<=size && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}
void heapSort(int arr[],int size){
    // time complexity :- O(nlog(n)).
    while(size>1){
        // step 1 :- swap
        swap(arr[size],arr[1]);
        size--;

        // step 2 :- heapify
        heapify(arr,size,1);
    }
}
int main()
{
    heap h;
    h.insert(55);
    h.insert(53);
    h.insert(54);
    h.insert(50);
    h.insert(52);
    h.print();
    h.deletefromheap();
    h.print();
    h.deletefromheap();
    h.print();
    h.deletefromheap();
    h.print();
    h.deletefromheap();
    h.print();

    // ----: Seeing Heapify Function :----
    int ar[10]={-1,54,53,55,52,50,34,574,32,67};
    int n=9;
    // TO HEAPIFY WE DO NOT HAVE TO NEED TO HEAPIFY ROOT
    // ELEMENT SO WE WILL START HEAPIFY PROCESS FROM N/2:-

    for(int i=n/2;i>0;i--){
        heapify(ar,n,i);
    }
    cout<<"printing array:--- \n";
    for(auto i:ar){
        cout<<i<<" ";
    }
    cout<<endl;
    heapSort(ar,n);
    for(auto i:ar){
        cout<<i<<" ";
    }
    cout<<endl;


}