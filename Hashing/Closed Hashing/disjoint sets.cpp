#include<iostream>
using namespace std;
void printUnion(int arr1[], int arr2[], int len1, int len2) {

    int f, i, j, k = 0;
    int arr3[100];
    for (i = 0; i < len1; i++) {
        arr3[k] = arr1[i];
        k++;
    }

    for (i = 0; i < len2; i++) {
        f = 0;
        for (j = 0; j < len1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }
        }
        if (f == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }
    cout << "Union of two array is:";
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

void printIntersection(int arr1[], int arr2[], int len1, int len2) {

    int arr3[100];
    int i, j, k = 0;

    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;
            }
        }
    }
    cout << "\nIntersection of two array is:";
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[100];
    int arr2[100];
    //int arr3[100];
    int len1,len2;
    cout<<"Enter size of arr1: ";
    cin>>len1;
    for(int i=0;i<len1;i++)
    cin>>arr1[i];

    cout<<"Enter size of arr2: ";
    cin>>len2;
    for(int j=0;j<len2;j++)
    cin>>arr2[j];
    cout<<endl;

    cout<<"Arr1[] : ";
   for(int i=0;i<len1;i++)
   cout<<arr1[i]<<" ";
   cout<<endl;

    cout<<"Arr2[] : ";
    for(int j=0;j<len2;j++)
    cout<<arr2[j]<<" ";
    cout<<endl;

    printUnion(arr1,arr2,len1,len2);
    printIntersection(arr1,arr2,len1,len2);


    
}
