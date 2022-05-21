class CombinationIterator {
    vector<string> temp;
    string chars;
    int charLength;
    int tmp = 0;
    
    void helper(int a,string& str){
        if(str.length() == charLength){
            temp.push_back(str);
            return;
        }
        if(a >= chars.length()) return;
        
        str.push_back(chars[a]);
        helper(a+1,str);
        str.pop_back();
        helper(a+1,str);
    }
public:
    CombinationIterator(string characters, int combinationLength) {
        chars = characters;
        charLength = combinationLength;
        string str = "";
        helper(0,str);
    }
    
    string next() {
        tmp++;
        return temp[tmp-1]; 
    }
    
    bool hasNext() {
        if(tmp < temp.size()) return true;
        return false;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */