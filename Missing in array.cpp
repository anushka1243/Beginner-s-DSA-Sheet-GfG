// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        int all=0;
        int given=0;
        for(int i=1;i<=n;i++)
           all^=i;
        for(int i=0;i<n-1;i++)
            given^=arr[i];
        return all^given;        
        
    }
};


// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum=n*(n+1)/2;
        int g_sum=0;
        for(int i=0;i<n-1;i++)
        {
            g_sum+=array[i];
        }
        return sum - g_sum;
    }
};




// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum=0;
        for(int i=0;i<n-1;i++)sum+=array[i];
        int actual_sum=(n*(n+1))/2;
        return actual_sum-sum;
    }
};




// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++)
        {
            if((i+1)!=array[i])
            return i+1;
        }
    }
};
