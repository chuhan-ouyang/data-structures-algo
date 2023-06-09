class Solution {
public:
    string reverseWords(string s) {
        // trim and reverse
        trim(s);
        reverse(s.begin(), s.end());
        int start = 0;
        for (int end = 0; end <= s.size(); ++end){
            if (end == s.size() || s[end] == ' '){
                reverseSeg(s, start, end - 1);
                start = end + 1;
            }
        }
        return s;
    }

private: 
    // reverse [start - end]
    void reverseSeg(string& s, int start, int end){
        for (int i = start; i <= start + (end - start)/2; i++){
            swap(s[i], s[end - (i - start)]);
        }
    }

    // remove trailing, starting white spaces and extra white spaces between words
    void trim(string& s){
        int slow = 0; // track the finished word
        for (int i = 0; i < s.size(); i++){
            // if char, append a space (except for first word)
            if (s[i] != ' '){
                if (slow != 0) s[slow++] = ' ';
                while (i < s.size() && s[i] != ' '){
                    s[slow++] = s[i++];
                }
            }
        }
        s.resize(slow);
    }
};

/*
Correctness/Op Issues
1) check other good string functions for find and replace
2) substr(start, length), note that both start and legnth are just the index values
no need to use iterators in substr!!
think: very straight forward like python
3) when you see some "unsigned offset" with stirngs/containers, likely because you have gotten a neg index
check access patterns
4) control for nested while loops... be careful, in inner while loop, as you change the loop counter vairable,
you may have already broken the condition variable for the larger while loop!
therefore it is a good idea to add the outer loop's cond into the inner one as while
and also to break if you want the invariant that as soon as condition doesn't meet, you break
5) A few ops
-> try not to use built-in funcitons like erase and regex and insert, they are O(n), and can cause errors
-> my original solution was using O(n) space, but for string problems, it is worthy to reduce the space to O(1) by just manipulating/resizing the orignal strings
-> try to divide the task into modular (eg. remove extra space, reverse segments)
6) the original nested two pointer while logic is ok, but easier to think about with local reversals
7) for string helper functions, if you want to save space and avoid returning a new copy, make the funciton and pass in the stirng by reference and modify the param in place
*/