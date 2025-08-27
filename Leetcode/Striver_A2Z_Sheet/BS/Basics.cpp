// dividing search space in half each time until we find the word. 
// Divide and Conquer algo
// data MUST be sorted.

/* Algorithm :
1. low =0 and high = n-1 (where n is size )
2. #### Mid = low + ( high -low )/2 instead of (low + high)/2.
Reason: Prevent integer overflow if low and high are very large numbers.
3. high = mid-1 or low= mid+1
*/
