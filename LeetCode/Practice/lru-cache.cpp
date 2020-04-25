#include <list>
#include <unordered_map>
#include <queue>

using namespace std;

class LRUCache {
    using mylisttype = std::list<int>;
    using mypairtype = std::pair<int, mylisttype::iterator>;
    using mymaptype = std::unordered_map<int, mypairtype>;
    
    mylisttype dataList;
    mymaptype myMap;
    size_t capacity;

    void updateRecentUse (mymaptype::iterator key)
    {
        int aaa = key->first;
        dataList.erase((key->second).second);
        dataList.push_front(aaa);
        (key->second).second = dataList.begin();
    }
public:
    LRUCache(size_t cap): capacity{cap} {}
    
    int get(int key) {
        auto it = myMap.find(key);
        if (it == myMap.end())
        {
            return -1;
        }
        updateRecentUse(it);
        return (it->second).first;
    }
    
    void put (int key, int value) {
        auto it = myMap.find(key);

        if (it != myMap.end())
        {
            updateRecentUse(it);
        }
        else
        {
            if (myMap.size() == capacity)
            {
                myMap.erase(dataList.back());
                dataList.pop_back();
            }
            dataList.push_front(key);
        }
        
        myMap[key] = { value, dataList.begin() };
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */