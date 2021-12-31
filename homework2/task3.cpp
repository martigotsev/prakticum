#include <iostream>
using namespace std;
const int size = 100;
int countOfSymbol(char *array)
{
    int i = 0;
    while (array[i] != 0)
    {
        i++;
    }
    return i;
}
void printArr(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] << " ";
    }
}

void newArray(char arr[], char arr1[], char arr2[])
{
int counter=0;
int counter1=0;
int counter2=0;
    if (arr[0]!=0 || arr1[0]!=0)
    {
        if (arr[0] !=0)
        {
            arr2[0] = arr[0];counter++;counter1++;
        }
        if (arr1[0]!=0)
        {
            arr2[counter] = arr1[0];counter++;counter2++;
        }
        return newArray(arr+counter1, arr1+counter2, arr2+counter);

    }
    else {arr2[counter]=0;return;}
    
}
int main()
{
    char arr[size];
    cin.getline(arr,size);
    int sizeArr=countOfSymbol(arr);
    char arr1[size];
    cin.getline(arr1,size); 
    int sizeArr1=countOfSymbol(arr1);
    // printArr(arr);
    // cout<<endl;
    // printArr(arr1);
    int sizeOfArr2=sizeArr1+sizeArr;
    char arr2[sizeOfArr2];
    newArray(arr,arr1,arr2);
    printArr(arr2);


}