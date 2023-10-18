class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long int water = 0;
        int leftmax = 0, rightmax = 0, low = 0, high = n-1;
        while(low <= high)
        {
            if(arr[low] < arr[high])
            {
                if(arr[low] > leftmax)
                leftmax = arr[low];
                else
                water += leftmax - arr[low];
                
                low++;
            }
            else
            {
                if(arr[high] > rightmax)
                rightmax = arr[high];
                else
                water += rightmax - arr[high];
                
                high --;
            }
        }
        
        return water;
    }
};
