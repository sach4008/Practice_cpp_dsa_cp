//Problem link
//		https://leetcode.com/problems/the-number-of-full-rounds-you-have-played/





class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        int h1,m1,h2,m2;
        h1=10*(startTime[0]-'0')+(startTime[1]-'0');
        m1=10*(startTime[3]-'0')+(startTime[4]-'0');
        h2=10*(finishTime[0]-'0')+(finishTime[1]-'0');
        m2=10*(finishTime[3]-'0')+(finishTime[4]-'0');
        
        h1=h1*60+m1;
        h2=h2*60+m2;
        
        if(h1>h2) h2=h2+24*60; 
        int cnt=max(0,h2/15-(h1+14)/15);
        return cnt;
        
    }
};
