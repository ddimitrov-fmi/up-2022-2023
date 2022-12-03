<h1> Selection Sort Algorithm </h1>

<p> Selection sort is a sorting algorithm, specifically an in-place comparison sort.</p></br>

<strong>It has O(n^2) time complexity, making it inefficient on large lists.</strong></br>

<p>The algorighm divides the input list into two parts: the sublist of items already sorted,
which is built up from left to right at the front(left) of the list, and the sublist of items
remaining to be sorted that occupy the rest of the list.</p></br>

<p>Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.</p></br>

<p>The algorithm proceeds by finding the smallest(or the largest, depending on sorting order) element
in the unsorted sublist, exchanging(swapping) it with the leftmost unsorted element(putting it in sorted
order), and moving the sublist boundaries one element to the right.</p>
