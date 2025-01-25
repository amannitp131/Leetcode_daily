/*

STL map and its functions in cpp

    Declaration of map:-
        1. map<int, int> m; //It is used to store integer elements
        2. map<char, int> m; //It is used to store character elements
        3. map<string, int> m; //It is used to store string elements
        4. map<int, string> m; //It is used to store integer and string elements
        5. map<int, vector<int>> m; //It is used to store integer and vector elements
        6. map<int, map<int, int>> m; //It is used to store integer and map elements
        7. map<int, pair<int, int>> m; //It is used to store integer and pair elements
        8. map<int, set<int>> m; //It is used to store integer and set elements
        9. map<int, int> m1(m); //It is used to store elements of m in m1
        10. map<int, int> m2 = m; //It is used to store elements of m in m2
        11. map<int, int> m3(m.begin(), m.end()); //It is used to store elements of m from begin to end in m3
        12. map<int, int> m4(m2); //It is used to store elements of m2 in m4
        13. map<int, int> m5(m2.begin(), m2.end()); //It is used to store elements of m2 from begin to end in m5
    All functions with description (based on frequently use):-
        1. size :- It is used to find the size of map
        2. empty :- It is used to check if a map is empty or not
        3. clear :- It is used to clear the map
        4. insert :- It is used to insert an element in a map
        5. erase :- It is used to erase an element from a map
        6. swap :- It is used to swap two maps
        7. count :- It is used to count the number of occurrences of an element in a map
        8. find :- It is used to find an element in a map
        9. begin :- It is used to find the beginning of a map
        10. end :- It is used to find the end of a map
        11. rbegin :- It is used to find the reverse beginning of a map
        12. rend :- It is used to find the reverse end of a map
        13. operator[] :- It is used to access an element in a map
        14. at :- It is used to access an element in a map
        15. lower_bound :- It is used to find the lower bound of an element in a map, means the element which is just greater than or equal to the given element
        16. upper_bound :- It is used to find the upper bound of an element in a map
        17. equal_range :- It is used to find the range of an element in a map, means the lower bound and upper bound of an element
        18. max_size :- It is used to find the maximum size of a map, means the maximum number of elements a map can store
        19. key_comp :- It is used to find the key comparison function of a map, means the function which is used to compare two keys
        20. value_comp :- It is used to find the value comparison function of a map
               
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    m[4] = 40;
    m[5] = 50;

    // * size :- It is used to find the size of map
    cout<<m.size()<<endl;

    // * empty :- It is used to check if a map is empty or not
    if(m.empty())
        cout<<"Map is empty"<<endl;
    else
        cout<<"Map is not empty"<<endl;

    // * clear :- It is used to clear the map
    m.clear();
    cout<<m.size()<<endl;

    // * insert :- It is used to insert an element in a map
    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});
    m.insert({5, 50});
    cout<<m.size()<<endl;

    // * erase :- It is used to erase an element from a map
    m.erase(1);
    cout<<m.size()<<endl;

    // * swap :- It is used to swap two maps
    map<int, int> m1;
    m1[1] = 100;
    m1[2] = 200;
    m1[3] = 300;
    m1[4] = 400;
    m1[5] = 500;
    m.swap(m1);
    cout<<m.size()<<endl;

    // * count :- It is used to count the number of occurrences of an element in a map
    cout<<m.count(1)<<endl;

    // * find :- It is used to find an element in a map
    if(m.find(1) != m.end())
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is not present"<<endl;

    // * begin :- It is used to find the beginning of a map
    cout<<m.begin()->first<<endl;

    // * end :- It is used to find the end of a map
    cout<<m.end()->first<<endl;

    // * rbegin :- It is used to find the reverse beginning of a map
    cout<<m.rbegin()->first<<endl;

    // * rend :- It is used to find the reverse end of a map
    cout<<m.rend()->first<<endl;

    // * operator[] :- It is used to access an element in a map
    cout<<m[1]<<endl;

    // * at :- It is used to access an element in a map
    cout<<m.at(1)<<endl;

    // * lower_bound :- It is used to find the lower bound of an element in a map, means the element which is just greater than or equal to the given element
    cout<<m.lower_bound(1)->first<<endl;

    // * upper_bound :- It is used to find the upper bound of an element in a map
    cout<<m.upper_bound(1)->first<<endl;

    // * equal_range :- It is used to find the range of an element in a map, means the lower bound and upper bound of an element
    auto it = m.equal_range(1);
    cout<<it.first->first<<" "<<it.second->first<<endl;

    // * max_size :- It is used to find the maximum size of a map, means the maximum number of elements a map can store
    cout<<m.max_size()<<endl;

    // * key_comp :- It is used to find the key comparison function of a map, means the function which is used to compare two keys
    cout<<m.key_comp()(1, 2)<<endl;


    return 0;
}
