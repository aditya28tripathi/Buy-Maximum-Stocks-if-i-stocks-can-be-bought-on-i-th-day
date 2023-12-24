        vector<pair<int,int>> v;
        
        for(int i =0;i<n;++i)
            v.push_back({price[i] , i+1});
            
            
            sort(v.begin() , v.end());
            
            int ans = 0;
            for(auto a:v){
                int max = min(k/a.first,a.second);
                ans = ans+max;
                k=k-a.first*max;
            }
        return ans;
        
        
  
