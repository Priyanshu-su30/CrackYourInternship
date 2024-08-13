class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.length();
        int m = needle.length();
        int trav=0;

        for(int i=0; i<n; i++){
            if(haystack[i]==needle[trav]){
                trav++;
            }
            else{
                i-=trav;
                trav=0;
            }

            if(trav==m){
                return i-m+1;
            }
        }
        return -1;
    }
};
