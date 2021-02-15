 class Node {
        public:
        int count=0;
        int index=-1;
    };
    int firstUniqChar(string s) {
        map<char,Node> m;
        for(int i=0;i<s.length();i++){
            m[s[i]].count++;
            if(m[s[i]].index==-1) m[s[i]].index=i;
        }
        
        string temp;
        for(auto x:m){
            if(x.second.count==1) temp+=x.first;
        }
        int ans=s.length();
        for(int i=0;i<temp.length();i++){
            ans=min(ans,m[temp[i]].index);
        }
        if(ans==s.length())
        return -1;
        return ans;
    }

    //Seond Solution More Efficient:
    int firstUniqChar(string s) {
        int arr[256]={0};
        for(char c:s){
            arr[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(arr[s[i]]==1) return i;
        }
        
        return -1;
    }


