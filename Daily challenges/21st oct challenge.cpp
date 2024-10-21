/*********************My Approach**********/
//-->Maine greedy approch lagya tha jisse 76 test cases chale
         //--> I was finding the smallest size possible substring at each postion and then moving to next position till I hit the end.
//code: 76 / 95 testcases passed
class Solution {
public:
    set<string> st;
    int n;
    void helper(string &s, int i)
    {
        if(i>=n) return;
        //cout<<i<<"$"<<endl;
        for(int l=1;i+l<=n;l++)
        {
            string temp=s.substr(i,l);
            if(st.find(temp)==st.end())
            {
                st.insert(temp);
                helper(s,i+l);
                break;
            }
        }
    }

    int maxUniqueSplit(string s) {
        n=s.size();
        helper(s,0);
        for(string str: st)
        {
            cout<<str<<" "<<endl;
        }
        return(st.size());   
    }
};

/*********************The Right Approach**********/
/*
Intuition

    Backtracking approach: We try to split the string at every possible position and maintain a set of substrings that we've already seen. If a new substring is not in the set, we add it to the set and continue exploring further splits.
    Maximizing the count: During the backtracking, we try to maximize the number of unique substrings, and once all possible splits are explored, we return the maximum count.

    Start with an empty set to track substrings.
    Recursively try every possible split and check if the current substring has been used before.
    If it hasn't been used, add it to the set and recursively split the remaining part of the string.
    Keep track of the maximum number of unique substrings.
    Backtrack to explore other possibilities.
*/
class Solution {
public:
    unordered_set<string> st;
    void helper(string& s, int idx, int currCount, int& maxCount) {
        if(currCount + (s.length() - idx) <= maxCount) { 
            return;
        }

        if(idx == s.length()) {
            maxCount = max(maxCount, currCount);
        }

        for(int j = idx; j < s.length(); j++) {
            string sub = s.substr(idx, j-idx+1);
            if(st.find(sub) == st.end()) {
                st.insert(sub);
                helper(s, j+1, currCount+1, maxCount);
                st.erase(sub);
            }
        }
    }

    int maxUniqueSplit(string s) {
        //unordered_set<string> st;
        int maxCount  = 0;
        int currCount = 0;
        helper(s, 0, currCount, maxCount);
        return maxCount;
    }
};

//video to watch if needed: https://www.youtube.com/watch?v=sTzh1L7BkQA
