/*Question:-A message containing letters from A-Z can be encoded into numbers using the following mapping:

'A' -> "1"
'B' -> "2"
...
'Z' -> "26"*/

//Solution

class Solution {
    public int numDecodings(String s) {
        Map<Integer, Integer> countMap = new HashMap<>();
        return count(s, 0, countMap);
    }
    public int count(String s, int index, Map<Integer, Integer> countMap) {
        if(countMap.containsKey(index)) return countMap.get(index);
        int count = 0;
        if(index < s.length()) {
            int a1 = Integer.parseInt(s.substring(index, index + 1));
            if(a1 < 1 || a1 > 26)  count += 0;
            else  count += count(s, index + 1, countMap);
            
            if(a1 != 0 && index + 1 < s.length()){
                int a2 = Integer.parseInt(s.substring(index, index + 2));
                if(a2 < 1 || a2 > 26)  count += 0;
                else count += count(s, index + 2, countMap);
            }
            countMap.put(index, count);
            return count;
        } else {
            return 1;
        }
    }
}

//submission link:-https://leetcode.com/submissions/detail/812672463/
