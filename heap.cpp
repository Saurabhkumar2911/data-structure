#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1)
        {
            int parent=index/2;
            if(arr[index]>arr[parent])
            {
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else return;
        }
       
    }

    void deleteheap()
    {
        if(size==0){
            cout<<"nothing to print"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;

        int index=1;
        while(size>1)
        {
            int left=2*index;
            int right=2*index+1;

            if(left<size && arr[index]<arr[left] )
            {
                swap(arr[index],arr[left]);
                left=index;
            }
            else if(right<size && arr[index]<arr[right])
            {
                swap(arr[index],arr[right]);
                right=index;
            }
            else return;
        }
    }

    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[], int size, int index)
{
    int largest=index;
    int left=2*index;
    int right=2*index+1;

    if(left<size && arr[left]>arr[largest])
        largest=left;
    if(right<size && arr[right]>arr[largest])
        largest=right;

    if(largest!=index)
    {
        swap(arr[index],arr[largest]);
        heapify(arr,size,largest);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteheap();
    h.print();


    int arr[6]={-1,54,53,55,52,50 };
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"After applying heapify"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
