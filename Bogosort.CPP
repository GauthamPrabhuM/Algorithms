
#include<bits/stdc++.h> 
using namespace std; 
  
]bool isSorted(int a[], int n) 
{ 
    while ( --n > 1 ) 
        if (a[n] < a[n-1]) 
            return false; 
    return true; 
} 
  
void shuffle(int a[], int n) 
{ 
    for (int i=0; i < n; i++) 
        swap(a[i], a[rand()%n]); 
} 
  
void bogosort(int a[], int n) 
{ 
    while ( !isSorted(a, n) ) 
        shuffle(a, n); 
} 
  
void printArray(int a[], int n) 
{ 
    for (int i=0; i<n; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int a[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
    bogosort(a, n); 
    printf("Sorted array :\n"); 
    printArray(a,n); 
    return 0; 
} 
