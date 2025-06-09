// Jackson Brillhart
// CIS 2207 N03
// Date: 06/08/2025
// Problem Description: Make a recursive binary search algorithm for a sorted array of strings.
// Use the recursive version of binarySearch found in the powerpoint



#include <iostream>
#include <string>
using namespace std;

// recursive binary search function
int binarySearch(string arr[], int first, int last, string target) {
    if (first > last) {
        return -1;  // no base case
    }

    int mid = (first + last) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binarySearch(arr, first, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, last, target);
}

int main() {
    // sorted strings
    string names[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace"};
    int size = sizeof(names) / sizeof(names[0]);

    string target;
    cout << "Enter a name to search for: ";
    getline(cin, target);

    int result = binarySearch(names, 0, size - 1, target);

    if (result != -1)
        cout << "Found \"" << target << "\" at index " << result << "." << endl;
    else
        cout << "\"" << target << "\" not found in the list." << endl;

    return 0;
}
