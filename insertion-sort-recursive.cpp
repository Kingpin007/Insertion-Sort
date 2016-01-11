#include <iostream>

using namespace std;

void insertionSort(int[],int,int);
void insertIn(int[],int,int,int);

int main()
{
    int a[8] = {3,41,52,26,38,57,9,49};
    insertionSort(a,0,8);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

void insertionSort(int a[],int beg, int end)
{
    if(beg==end)
    {
        //best casse sorted array
        return;
    }
    cout<<"before insertion sort: \n";
    for(int i=beg;i<end;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    insertionSort(a,beg,end-1);
        cout<<"after insertion sort: \n";
    for(int i=beg;i<end;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    insertIn(a,a[end],beg,end);
        cout<<"after insertIn: \n";
    for(int i=beg;i<end;i++)
        cout<<a[i]<<" ";
    cout<<endl;

}

void insertIn(int a[],int key,int beg,int end)
{
    for(int i=beg;i<end;i++)
    {
        if(key<a[i])
        {
            int j=end-1;
            while(j>=i)
            {
                a[j+1] = a[j];
                j--;
            }
            a[i]=key;
            break;
        }
    }
}
