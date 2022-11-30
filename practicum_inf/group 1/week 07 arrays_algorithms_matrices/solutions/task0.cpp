// search for a given element in an array,
// using binary search algorithm
// return index if found,
// -1 if element is not presenting
int binary_search(const int arr[], size_t size, int searched_el)
{
    int left = 0;         // sub-array start index (from the whole array)
    int right = size - 1; // sub-array end   index (from the whole array)
    // what are the mid index and the value of the element in the mid position
    int mid_ind, mid_val;
    // until our borders aren't swapped
    while (left <= right)
    {
        // get the middle index
        // same as mid_ind = (left + right) / 2, but safer!
        mid_ind = left + (right - left) / 2;
        // get the middle value
        mid_val = arr[mid_ind];
        // check if the searched element is this one
        if (mid_val == searched_el)
        {
            return mid_ind;
        }
        // if the searched element is smaller than the mid one,
        // we should search in the left half, so we move the right boarder
        if (mid_val > searched_el)
        {
            right = mid_ind - 1;
        }
        // opposite of above
        if (mid_val < searched_el)
        {
            left = mid_ind + 1;
        }
    }

    // not found
    return -1;
}