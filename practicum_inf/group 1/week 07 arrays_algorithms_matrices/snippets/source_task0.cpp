#include <iostream>
using std::cout;

int magic_function(int arr[], size_t element, int golemina) {

    int left  = golemina / element + 1;
    int right = golemina - 1;

    int mid_ind, mid_val;

    while (left >= right) {

        mid_val = right + (left - right) / 2;
        mid_ind = arr[mid_val];

        if (mid_val == golemina) {
            return mid_ind;
        }
        if (mid_val < golemina) {
            right = mid_ind;
        }
        if (mid_val > golemina) {
            left = mid_ind - 1;
        }
    }

    return -1;
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5 };

    if (magic_function(arr, sizeof(arr), 11))
        cout << "Magic happened for 11!";
    else
        cout << "11 is not that magical at all!";

}