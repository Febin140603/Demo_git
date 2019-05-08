#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int* i1;
    i1 = std::max_element(arr,arr + 10);
    cout << int (*i1) << "\n";
    return 0;
}

