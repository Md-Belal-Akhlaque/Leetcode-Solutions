class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if(s.size() != t.size())
            return false;

        for(auto it : s)
            mp[it]++;

        for(auto it : t)
            mp[it]--;

        for(auto &it : mp){
            if(it.second !=0)
                return false;
        }
    
        return true;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size())
//             return false;

//         int freq[26] = {0};

//         for (char ch : s)
//             freq[ch - 'a']++;

//         for (char ch : t)
//             freq[ch - 'a']--;

//         for (int x : freq) {
//             if (x != 0)
//                 return false;
//         }

//         return true;
//     }
// };