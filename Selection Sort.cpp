#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
int n;
cout << "Specify the range of the array: ";
cin>>n;
int T[n];
int pom;
int k;
int minRange, maxRange;

// User provides the range of generated numbers
cout << "Enter the range of generated numbers (min-max): ";
cin >> minRange >> maxRange;
cout <<"Generated array: "<<endl;

srand(time(NULL));

// Generating and displaying an array of random numbers within the specified range
for (int i = 0; i < n; i++)
{
// Generating a random number within the specified range
T[i] = minRange + rand() % (maxRange - minRange + 1);
}
for (int i=0; i<n;i++)
{

cout<<T[i]<<"  ";
}
// Sorting the array using selection sort algorithm
for (int i=0; i<n-1;i++)
{
k=i;
// Find the index of the smallest element in the unsorted part of the array
for (int j=i+1; j<n;j++)
{
if (T[j]<T[k])
{

k=j;
}
}
// Swap the found smallest element with the first element
pom=T[k];
T[k]=T[i];
T[i]=pom;
}
// Displaying the sorted array
cout<<endl;
cout << "Sorted array: " << endl;
for (int i=0; i<n;i++)
{

cout<<T[i]<<"  ";
}
}
