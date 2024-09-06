class Solution {
public:
    int strStr(string a1, string a2) {
        int n1= a1.size();
        int n2= a2.size();
    //     int found=0,count=0  ;
    //     int i=0;
    if(n1==1 & n2==1){
        if(a1[0]==a2[0])
        return 0;
    }
    

    //     for(int i=0;i<n1-n2;i++){
    //         if(a1[i]==a2[0]){
    //             count=i;
    //             found=0;
    //             for(int j=1 ; j<n2;j++){
    //                 if(a1[i+j]!=a2[j]){
    //                     found=-1;
    //                     break ;
    //                 }
    //                 else {count++;
    //                 found++;
    //                 }
                    
    //             }
    //         }
    //          if(found>-1){
    //         return count-n2 ;
    //     }

    //     }
       

for(int i=0 ; i<n1 ; i++){
    int count =0 ;
    if(a1[i]==a2[0]){
        for(int j=1 ; j<n2 ; j++){
            if(a1[i+j]!=a2[j]){
                count= -1 ;
            break;
            }

        }
        if(count==0)
        return i ;
    }
}

return -1 ;
        
    }
};