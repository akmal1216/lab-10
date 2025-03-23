// lab 10

// problem 1


// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, sum = 0;
//
//
//     cout << "Enter the number of integers: ";
//     cin >> n;
//
//
//     int numbers[n];
//
//
//     cout << "Enter " << n << " integers: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
//
//
//     for (int i = 0; i < n; i++) {
//         sum += numbers[i];
//     }
//
//
//     cout << "The sum of the numbers is: " << sum << endl;
//
//     return 0;
// }


//problem 2
// #include <iostream>
// using namespace std;
//
//
// double calculateAverage(int arr[], int n) {
//     int sum = 0;
//
//
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//
//
//     return static_cast<double>(sum) / n;
// }
//
// int main() {
//     int n;
//
//
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//
//     int arr[n];
//
//
//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//
//     double average = calculateAverage(arr, n);
//     cout << "The average of the elements is: " << average << endl;
//
//     return 0;
// }


//problem 3
// #include <iostream>
// using namespace std;
//
// int findMin(int arr[], int n) {
//     int min = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int min = findMin(arr, n);
//     cout << "The minimum element is: " << min << endl;
//     return 0;
// }

//problem 4
// #include <iostream>
// using namespace std;
//
// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//
//     int index = 0;
//     for (int i = 1; i < size; i++) {
//         if (array[i] >= array[index]) {
//             index = i;
//         }
//     }
//     return index;
// }
//
// int main() {
//     double array[15];
//
//     cout << "Enter 15 numbers:" << endl;
//     for (int i = 0; i < 15; i++) {
//         cin >> array[i];
//     }
//
//     int index = indexOfLargestElement(array, 15);
//
//     if (index != -1) {
//         cout << "The index of the largest element is: " << index << endl;
//     } else {
//         cout << "Invalid array size." << endl;
//     }
//
//     return 0;
// }


//problem 5

// #include <iostream>
// using namespace std;
//
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int size;
//
//     cout << "Enter the size of the lists: ";
//     cin >> size;
//
//     if (size <= 0) {
//         cout << "Invalid size!" << endl;
//         return 0;
//     }
//
//     int list1[size], list2[size];
//
//     cout << "Enter elements of the first list:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> list1[i];
//     }
//
//     cout << "Enter elements of the second list:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, size)) {
//         cout << "The two lists are strictly identical." << endl;
//     } else {
//         cout << "The two lists are not strictly identical." << endl;
//     }
//
//     return 0;
// }

//problem 6
// #include <iostream>
// using namespace std;
//
// int main() {
//     int freq[26] = {0};
//     char ch;
//
//     cout << "Enter a sequence of characters (enter '0' to stop):" << endl;
//
//
//     while (true) {
//         cin >> ch;
//
//         if (ch == '0') {
//             break;
//         }
//
//
//         if (ch >= 'a' && ch <= 'z') {
//             freq[ch - 'a']++;
//         }
//     }
//
//
//     cout << "Frequency of lowercase letters:" << endl;
//     for (char letter = 'a'; letter <= 'z'; letter++) {
//         int index = letter - 'a';
//         if (freq[index] > 0) {
//             cout << letter << ": " << freq[index] << endl;
//         }
//     }
//
//     return 0;
// }


// problem 7
// #include <iostream>
// using namespace std;
//
// void selectionSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < size; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i) {
//             swap(arr[i], arr[minIndex]);
//         }
//     }
// }
//
// int main() {
//     int size;
//     cout << "Enter the number of elements: ";
//     cin >> size;
//     int arr[size];
//     cout << "Enter " << size << " integers:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     selectionSort(arr, size);
//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//problem 8
// #include <iostream>
// using namespace std;
//
// int main() {
//     int rolls[10000];
//     int occurrences[6] = {0};
//     int seed = 12345;
//
//
//     auto randLCG = [&seed]() -> int {
//         seed = (seed * 1103515245 + 12345) % 2147483648;
//         return (seed / 65536) % 6 + 1;
//     };
//
//
//     for (int i = 0; i < 10000; i++) {
//         rolls[i] = randLCG();
//         occurrences[rolls[i] - 1]++;
//     }
//
//
//     cout << "Number of occurrences for each die value (1 to 6):" << endl;
//     for (int i = 0; i < 6; i++) {
//         cout << (i + 1) << ": " << occurrences[i] << endl;
//     }
//
//     return 0;
// }

//problem 9
// #include <iostream>
// using namespace std;
//
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     reverseArray(arr, 0, size - 1);
//
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }


//problem 10

// #include <iostream>
// using namespace std;
//
// bool isSorted(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     if (isSorted(arr, n)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//
//     return 0;
// }


