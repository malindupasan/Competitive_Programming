#include<bits/stdc++.h>
using namespace std;


static bool isZero (int i) 
{
    return i == 0;
}

    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int h=0;
         std::vector<int>::iterator newIter = std::remove_if( citations.begin() , citations.end() ,isZero);
    citations.resize( newIter -  citations.begin() );
        
   

        int n=citations.size();


        int k=0,hi=0;
   
        for(int i=0;i<n;i++){
            if(citations[i]<=n-i){
                h= citations[i];
                
            }
            else{
                if(citations[i]>=n-i){
                   if(hi<n-i) 
                   hi= n-i;
                   cout<<"triggered at "<<i<<endl;
                }

                 if(citations[i]>=n)
                k++;
            }
           
            
        }
        
        return max(h,max(hi,k));
    }