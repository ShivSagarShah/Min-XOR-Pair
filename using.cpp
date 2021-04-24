/* Given an array of integers of size N find minimum xor of any 2 elements.


Example 1:

Input:
N = 3
arr[] = {9,5,3}
Output: 6
Explanation: 
There are 3 pairs -
9^5 = 12
5^3 = 6
9^3 = 10
Therefore output is 6.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function minxorpair() which takes the array arr[], its size N as input parameters and returns the minimum value of xor of any 2 elements.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) */
/* xor of numbers which are close to each other can only give you the minimum xor than numbers which are far apart
{         a<=b<=c ==>  a^b < a^c
                       b^c < a^c
                                      }
*/

class Solution{   
public:
    int minxorpair(int N, int arr[]){ 
        sort(arr, arr+N);
        int min = INT_MAX;
        
        for(int i = 0; i<N-1; i++){
            int res = arr[i]^arr[i+1];
            if(res<min){
                min = res;
            }
        }
        return min;
    }
    //     int min = INT_MAX;
    //     for(int i = 0; i<N; i++){
    //         for(int j = i+1; j<N; j++){
    //             int res = arr[i]^arr[j];
    //             if(res<min){
    //                 min = res;
    //             }
    //         }
    //     }
    //     return min;
    // }
};
