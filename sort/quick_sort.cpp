#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int left, int right) {
    int pivot = nums[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]);
        } 
    }
    swap(nums[i + 1], nums[right]);
    return i + 1;
}

void quick_sort(vector<int> &nums, int left, int right) {
    if (left < right) {
        int pivot = partition(nums, left, right);
        quick_sort(nums, left, pivot - 1);
        quick_sort(nums, pivot + 1, right);
    }
}

vector<int> quickSort(vector<int> &arr) {
    int pivot = arr[0];
    int i = arr.size();
    for (int j = arr.size() - 1; j > 0; j--) {
        if (arr[j] >= pivot) {
            i--;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[0], arr[i - 1]);

    return arr;
}
void print(vector<int> vect) {
    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
} 

int main() {
    vector<int> vect = {4, 5, 3, 7, 2 };
    vect = quickSort(vect);
    print(vect);


    return 0;
}