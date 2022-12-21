class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start=0;
        int end=n;
        int mid, loc=-1;
        while(start<=n-1){
            mid=(start+end)/2;
            if(arr[mid]<k){
                start=mid+1;
            }
            else if(arr[mid]>k){
                end=mid-1;
            }
            if(arr[mid]==k){
                loc=mid;
                break;
            }
        }
        return loc;
    }
};
