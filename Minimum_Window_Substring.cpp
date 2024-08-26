class Solution {
public:
    string minWindow(string s, string p) {
        int m=s.length(), n=p.length();
        unordered_map<int, int> fs,fp;
        for(auto c:p)
        fp[c]++;

        int start=0, cnt=0;
        int startIDX=-1, minLength=INT_MAX;
        for(int i=0;i<m;i++){
            char ch=s[i];
            fs[ch]++;

            if(fp[ch]!=0 and fp[ch]>=fs[ch])
            cnt+=1;

            if(cnt==n){
                while(fp[s[start]]==0 or fs[s[start]]>fp[s[start]]){
                    fs[s[start]]--;
                    start++;
                }
                int windowLength=i-start+1;
                if(windowLength<minLength){
                    minLength=windowLength;
                    startIDX=start;
                }
            }
        }
        return startIDX==-1 ? "" :s.substr(startIDX, minLength);
    }
};
