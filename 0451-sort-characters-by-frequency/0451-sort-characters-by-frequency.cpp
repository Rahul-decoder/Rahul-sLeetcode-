class Solution {
public:
   static bool cmp(pair<int,char> a, pair<int,char> b){
      if(a.first==b.first){
          return a.second<b.second;
      }
      return a.first>b.first;
   

   }
    string frequencySort(string s) {

        map<char,int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }

        vector<pair<int,char>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), cmp);
        string temp="";
        for(int i=0; i<v.size(); i++){
            string temp2="";
         for(int j=0; j<v[i].first; j++){
              temp2+=v[i].second;
         }
         temp+=temp2;
        }
        return temp;
    }
};