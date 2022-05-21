class MyHashMap {
    vector<int> has;
public:
    static const int i=1000001;
    MyHashMap() {
        has.resize(i,-1);
    }
    
    void put(int key, int value) {
        has[key] = value;
    }
    
    int get(int key) {
        return has[key];
    }
    
    void remove(int key) {
        has[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */