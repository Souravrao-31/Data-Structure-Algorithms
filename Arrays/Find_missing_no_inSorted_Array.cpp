#include <iostream> 
#include <vector>

using namespace std; 

class {

public:
 
    int find(vector<int> &ar) 
    { 
      int l = 0, r = ar.size(); 
      while (l <= r) { 
  
        int mid = (l + r) / 2; 
  
        // If this is the first element  
        // which is not index + 1, then  
        //  element is mid+1 
        if (ar[mid] != mid + 1 &&  ar[mid - 1] == mid) {
                return mid + 1; 
        }
         
        // if this is not the first   
        // element search in left side 
        if (ar[mid] != mid + 1) 
            r = mid - 1; 
  
        // if it follows index+1 property then  
        // search in right side 
        else
            l = mid + 1; 
    } 
  
    // if no element is  
    return -1; 
    } 
       //O(n) O(1)
    int find_II(vector<int> &ar){
        int sum = 0;
        int n = ar.size();
        int total = n+1;
        for (int i= 0;i<n;i++){
        sum = ar[i]^sum;       /* XOR of all the elements of the array */ 
        total = total^(i+1);    /* XOR of all the numbers from 1 to n+1 */ 
        }
        /* XOR of sum and total gives the  number.*/
        return sum^total;
    }


};

// Driver code 
int main() 
{  
     vector<int> v;
    
     
      int n;cin>>n;

        for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        }
       
     m;
    cout<< m.find(v)<<endl;
    cout<<m.find_II(v);
  


  
	return 0; 
} 