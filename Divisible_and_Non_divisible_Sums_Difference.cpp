class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=(i+1);
         if((i+1)%m!=0){
            num1+=(i+1);
         }
         else{
            num2+=(i+1);
         }
        }
     return (num1-num2);
    }
};