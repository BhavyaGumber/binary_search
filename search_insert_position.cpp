class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int s=0, end=N-1, mid=0;
      
        while(s<=end){
              mid = s+(end-s)/2;
              if(Arr[mid]==k){
                  return mid;
              }
              if(Arr[mid]<k){
              s=mid+1;
              }
              else if(Arr[mid]>k){
                  end=mid-1;
              }
        }
        return s;
        
    }
};
