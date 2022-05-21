class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector <string> tokens1;
        stringstream check1(version1);
        string intermediate;
        while(getline(check1, intermediate, '.'))
        {
            tokens1.push_back(intermediate);
        }
        
        vector <string> tokens2;
        stringstream check2(version2);
        // string intermediate;
        while(getline(check2, intermediate, '.'))
        {
            tokens2.push_back(intermediate);
        }
        
        
        int i = 0, j = 0;
        
        while(i<tokens1.size() && j<tokens2.size()){
            int a=stoi(tokens1[i]) ,b=stoi(tokens2[j]);
            i++;
            j++;
            if(a<b) return -1;
            else if(a>b) return 1;
        }
        while(i<tokens1.size()){
            int a=stoi(tokens1[i]) ,b=0;
            i++;
            if(a<b) return -1;
            else if(a>b) return 1;
        }
        while(j<tokens2.size()){
            int a=0 ,b=stoi(tokens2[j]);
            j++;
            if(a<b) return -1;
            else if(a>b) return 1;
        }
        return 0;
    }
};