vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> >res;
    map<string,vector<int >>mp;
    for(int i=0;i<A.size();i++){
        string s=A[i];
        sort(s.begin(),s.end());
        mp[s].push_back(i+1);
    }
    for(auto it : mp){
        res.push_back(it.second);
    }
    return res;
}
