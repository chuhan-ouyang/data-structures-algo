#Problem
class Solution{
    public:
        stirng replaceSpace(stirng s){

        }
}

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
5) A fes ops
-> try not to use built-in funcitons like erase and regex and insert, they are O(n), and can cause errors
-> my original solution was using O(n) space, but for string problems, it is worthy to reduce the space to O(1) by just manipulating/resizing the orignal strings
-> try to divide the task into modular (eg. remove extra space, reverse segments)
*/