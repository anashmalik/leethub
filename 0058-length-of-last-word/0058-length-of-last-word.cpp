class Solution {
public:
    int lengthOfLastWord(string str) {
        string word = "",ans;
    for (auto x : str)
    {
        if (x == ' ')
        {
          //  cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
            ans=word;
        }
    }
    
    return ans.size();
    }
};