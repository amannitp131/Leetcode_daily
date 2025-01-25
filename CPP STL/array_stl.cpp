/*

STL Vector in cpp and its all functions
    * vector :- It is used to store elements in a contiguous memory location
    All declaration types with description
            1. vector<int> v; //It is used to store integer elements
            2. vector<char> v; //It is used to store character elements
            3. vector<string> v; //It is used to store string elements
            4. vector<vector<int>> v; //It is used to store 2D vector
            5. vector<pair<int, int>> v; //It is used to store pair elements
            6. vector<tuple<int, int, int>> v; //It is used to store tuple elements
            7. vector<int> v(5); //It is used to store 5 elements
            8. vector<int> v(5, 10); //It is used to store 5 elements with value 10
            9. vector<int> v1 = {1, 2, 3, 4, 5}; //It is used to store elements in a vector
            10. vector<int> v2(v1.begin(), v1.end()); //It is used to store elements of v1 in v2
            11. vector<int> v3(v1); //It is used to store elements of v1 in v3
            12. vector<int> v4 = v1; //It is used to store elements of v1 in v4
            13. vector<int> v5(v1); //It is used to store elements of v1 in v5
            14. vector<int> v6(v1.begin(), v1.begin()+3); //It is used to store elements of v1 from 0 to 3
            15. vector<int> v7(v1.begin()+2, v1.end()); //It is used to store elements of v1 from 2 to end
    All functions with description (based on frequently use):-
            1** size :- It is used to find the size of vector
            2. capacity :- It is used to find the capacity of vector
            3. resize :- It is used to resize the vector
            4** empty :- It is used to check if a vector is empty or not
            5** clear :- It is used to clear the vector
            6** front :- It is used to access the first element of a vector
            7** back :- It is used to access the last element of a vector
            8** pop_back :- It is used to remove the last element of a vector
            9** insert :- It is used to insert an element in a vector
            10** erase :- It is used to erase an element from a vector
            11** swap :- It is used to swap two vectors
            12. assign :- It is used to assign a vector to another vector
            13** sort :- It is used to sort a vector
            14** reverse :- It is used to reverse a vector
            15* find :- It is used to find an element in a vector
            16.* lower_bound :- It is used to find the lower bound of an element in a vector, means the element which is just greater than or equal to the given element
            17.* upper_bound :- It is used to find the upper bound of an element in a vector
            18.* max_element :- It is used to find the maximum element in a vector
            19.* min_element :- It is used to find the minimum element in a vector
            20.* accumulate :- It is used to find the sum of elements in a vector
            21.* count :- It is used to count the number of occurrences of an element in a vector
            22. distance :- It is used to find the distance between two iterators
            23. next_permutation :- It is used to find the next permutation of a vector
            24. prev_permutation :- It is used to find the previous permutation of a vector
            25.** rotate :- It is used to rotate the elements of a vector
            26.** unique :- It is used to remove the duplicate elements from a vector
            27.* binary_search :- It is used to search an element in a vector
            28.* equal_range :- It is used to find the range of an element in a vector
            29.** fill :- It is used to fill a vector with a particular value
            30.* copy :- It is used to copy a vector to another vector
            31. reverse_copy :- It is used to copy a vector in reverse order
            32. equal :- It is used to check if two vectors are equal or not

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // * vector :- It is used to store elements in a contiguous memory location
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // * size :- It is used to find the size of vector
    cout<<v.size()<<endl;

    // * capacity :- It is used to find the capacity of vector
    cout<<v.capacity()<<endl;

    // * resize :- It is used to resize the vector
    v.resize(5);
    cout<<v.size()<<endl;

    // * empty :- It is used to check if a vector is empty or not
    if(v.empty())
        cout<<"Vector is empty"<<endl;
    else
        cout<<"Vector is not empty"<<endl;

    // * clear :- It is used to clear the vector
    v.clear();
    cout<<v.size()<<endl;

    // * front :- It is used to access the first element of a vector
    cout<<v.front()<<endl;

    // * back :- It is used to access the last element of a vector
    cout<<v.back()<<endl;

    // * pop_back :- It is used to remove the last element of a vector
    v.pop_back();
    cout<<v.size()<<endl;

    // * insert :- It is used to insert an element in a vector
    v.insert(v.begin(), 5);
    cout<<v.size()<<endl;

    // * erase :- It is used to erase an element from a vector
    v.erase(v.begin());
    cout<<v.size()<<endl;

    // * swap :- It is used to swap two vectors
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v.swap(v1);
    cout<<v.size()<<endl;

    // * sort :- It is used to sort a vector
    sort(v.begin(), v.end());
    cout<<v.size()<<endl;

    // * reverse :- It is used to reverse a vector
    reverse(v.begin(), v.end());
    cout<<v.size()<<endl;

    // * find :- It is used to find an element in a vector
    if(find(v.begin(), v.end(), 2) != v.end())
        cout<<"Element is present"<<endl;
    else
        cout<<"Element is not present"<<endl;

    // * assign :- It is used to assign a vector to another vector
    v.assign(v1.begin(), v1.end());
    cout<<v.size()<<endl;

    // * lower_bound :- It is used to find the lower bound of an element in a vector, means the element which is just greater than or equal to the given element
    auto it = lower_bound(v.begin(), v.end(), 2);
    cout<<*it<<endl; 

    // * upper_bound :- It is used to find the upper bound of an element in a vector
    auto it1 = upper_bound(v.begin(), v.end(), 2);
    cout<<*it1<<endl;

    // * max_element :- It is used to find the maximum element in a vector
    cout<<*max_element(v.begin(), v.end())<<endl;

    // * min_element :- It is used to find the minimum element in a vector
    cout<<*min_element(v.begin(), v.end())<<endl;

    // * rotate :- It is used to rotate the elements of a vector
    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;

    // * accumulate :- It is used to find the sum of elements in a vector
    cout<<accumulate(v.begin(), v.end(), 0)<<endl;

    // * count :- It is used to count the number of occurrences of an element in a vector
    cout<<count(v.begin(), v.end(), 2)<<endl;

    // * distance :- It is used to find the distance between two iterators
    cout<<distance(v.begin(), v.end())<<endl;

    // * next_permutation :- It is used to find the next permutation of a vector
    next_permutation(v.begin(), v.end());
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;

    // * prev_permutation :- It is used to find the previous permutation of a vector
    prev_permutation(v.begin(), v.end());
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;

   
    
    return 0;
}
    