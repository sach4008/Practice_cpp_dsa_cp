class Solution {
public:
    
    int mySqrt(int x) {
        if(x==0) return 0;
        
        // return search(1,x,x);
        
        int i=1,j=x;
        
        while(true){        
            if(i==j) return i;

            int mid=i+(j-i)/2;

            if(mid>(x/mid)){
                j=mid-1;
            }
            else{
                if((mid+1)>x/(mid+1)) return mid;

                i=mid+1;
            }
        }
    }
    
//     int search(int i,int j,int x){
        
        
//         if(i==j) return i;
        
//         int mid=i+(j-i)/2;
//         if(mid>(x/mid)){
//             return search(i,mid-1,x);
//         }
//         else{
//             if((mid+1)>x/(mid+1)) return mid;
            
//             else return search(mid+1,j,x);
//         }
//     }
};
