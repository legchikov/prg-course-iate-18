
// int mask = 1;
// int i = 1;
// if(i & mask == 0)
//     cout << "YES";
// else 
//     cout << "NO";


// Input from keyboard example
int val;
while(cin >> val){
    if(val) cout << val << endl;
    else break;
}


// Switch example
int val = 1;

switch(val){
    case 0:
    cout << "case 0" << endl;
    break;
    case 1:
    cout << "case 1" << endl;
    break;
    case 2:
    cout << "case 2" << endl;
    default:
    cout << "default case" << endl;
    break;
}


// Static example
void foo(){
    static int a = 0;
    int b = 0;
    a++; b++;
    cout << a << ' ' << b << endl;
}

int main(){
    foo();
    foo();
    foo();
    return 0;
}


// Binary search (iterative)
int main(){

    int arr[] = {2, 3, 4, 10, 40}; 
    int size = sizeof(arr)/ sizeof(arr[0]); 
    int left = 0;
    int right = size - 1;
    int result = -1;

    int find;
    cout << "Enter number:" << endl;
    cin >> find;

    while (left <= right) { 
        int middle = left + (right - left) / 2; 
  
        // find посередине
        if (arr[middle] == find){
            result = middle; 
            break;
        }
  
        // find больше, отбросим левую часть 
        if (arr[middle] < find) 
            left = middle + 1; 
  
        // find меньше, отбросим правую часть 
        else
            right = middle - 1; 
    } 

    if(result != -1)
        cout << "The number has " << result << " index." << endl;
    else
        cout << "Number does not find." << endl;

    return 0; 
} 



// Exponential search (iterative)
int main(){

    int arr[] = {2, 3, 4, 10, 40}; 
    int size = sizeof(arr)/ sizeof(arr[0]); 
    int result = -1;

    int find;
    cout << "Enter number:" << endl;
    cin >> find;

    // If x is present at firt location itself 
    if (arr[0] == find) 
        result = 0; 
  
    // Find range for binary search by 
    // repeated doubling 
    int i = 1; 
    while (i < size && arr[i] <= find) 
        i = i*2; 

    int left = i/2;
    int right = min(i, size);

    while (left <= right) { 
        int middle = left + (right - left) / 2; 
  
        // find посередине
        if (arr[middle] == find){
            result = middle; 
            break;
        }
  
        // find больше, отбросим левую часть 
        if (arr[middle] < find) 
            left = middle + 1; 
  
        // find меньше, отбросим правую часть 
        else
            right = middle - 1; 
    } 

    cout << result << endl;
    if(result != -1)
        cout << "The number has " << result << " index." << endl;
    else
        cout << "Number does not find." << endl;

    return 0; 
} 



// Measure time
clock_t begin = clock();
// measured code here
clock_t end = clock();
double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
cout << elapsed_secs << " seconds" << endl;


// Get size_t max size
#include <limits.h>
#include <stddef.h>

int main(void)
{
    size_t size;
    size_t bytes = sizeof(size_t);

    if (bytes == sizeof(unsigned int))
    size = UINT_MAX;
    else if (bytes == sizeof(unsigned long))
    size = ULONG_MAX;
    else if (bytes == sizeof(unsigned long long))
    size = ULLONG_MAX;

    cout << size << endl;

    return 0;
}


// C++ random number within range
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
  
    int min = 10;
    int max = 20;
    int num = (min + (rand() % (int)(max - min + 1)));

    cout << num << endl;
    return 0;
}