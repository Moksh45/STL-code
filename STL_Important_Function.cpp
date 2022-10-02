#include <iostream>
#include <array>
#include <vector>
#include <Deque>
#include <list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
int main()
{
    // Sequence Container

        // Array

        // int basic[3] = {1, 2, 3};
        // array<int, 4> a = {1, 2, 3, 4};
        // int n = a.size();
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << endl;
        // }
        // cout << "Element at index 2-> " <<a.at(2) << endl;
        // cout << a.empty() << endl ;// return bool

        // cout << "First Element " << a.front() << endl;
        // cout << "Last Element " << a.back() << endl;

        // vector

        // vector<int>a(5,10);//5->size of Vector  and 10 -> we initialise all 5 postion with 10;
        // for(auto &i:a){
        //     cout<<i<<" ";
        // }
        // cout<<endl;

        // vector<int> last(a); //use for copy one vector to another
        // for(auto &i:last){
        //     cout<<i<<" ";
        // }
        // cout<<endl;

        // vector<int>v;
        // cout<<"Capacity-> "<<v.capacity()<<endl;

        // v.push_back(100);
        // cout<<"Capacity-> "<<v.capacity()<<endl;

        // v.push_back(10);
        // cout<<"Capacity-> "<<v.capacity()<<endl;

        // v.push_back(1020);
        // cout<<"Capacity-> "<<v.capacity()<<endl;

        // v.push_back(112);
        // cout<<"Capacity-> "<<v.capacity()<<endl;

        // v.push_back(1111);
        // cout<<"Capacity-> "<<v.capacity()<<endl;
        // cout<<"Size of Vector "<<v.size();

        // cout << "Element at index 2-> " <<v.at(2) << endl;
        // cout <<"Vector is Empty Or not "<< v.empty() << endl ;// return bool

        // cout << "First Element " << v.front() << endl;

        // cout<<"Before POP"<<endl;
        // cout << "Last Element " << v.back() << endl;
        // v.pop_back();
        // cout<< "After POP"<<endl;
        // cout << "Last Element " << v.back() << endl;

        // cout<<"Before Clear Size and Capacity"<<endl;
        // cout<<"Capacity-> "<<v.capacity()<<endl;
        // cout<<"Size-> "<<v.size()<<endl;
        // v.clear();
        // cout<<"after Clear Size and Capacity"<<endl;
        // cout<<"Capacity-> "<<v.capacity()<<endl;
        // cout<<"Size-> "<<v.size()<<endl;

        // Deque     //Deque or Double Ended Queue is a generalized version of Queue data structure that allows insert and delete at both ends.

        // deque<int> d;
        // d.push_back(1);
        // d.push_front(10);
        // d.push_back(56);
        // d.push_front(93);

        // for(auto &i:d){
        //     cout<<i<<endl;
        // }
        // cout<<endl;

        // d.pop_back();
        // for(auto &i:d){
        //     cout<<i<<endl;
        // }
        // cout<<endl;

        // d.pop_front();
        // for(auto &i:d){
        //     cout<<i<<endl;
        // }

        // cout<<"Print First Index Element-> "<<d.at(1)<<endl;
        // cout <<"deques is empty-> "<< d.empty() << endl ;  // return bool

        // cout << "First Element-> " << d.front() << endl;
        // cout << "Last Element-> " << d.back() << endl;

        // cout<<endl<<"Use erase Function"<<endl;
        // d.erase(d.begin(),d.begin()+1);
        // for(auto &i:d){
        //     cout<<i<<endl;
        // }

        // //list -> Doubly Linked List
        // list<int>l;

        // l.push_back(155);    //     t.c => o(1) for Puch_back
        // l.push_back(10);
        // l.push_back(17);
        // l.push_back(1077);
        // l.push_back(78);
        // l.push_back(150);

        // for(auto &i: l){
        //     cout<<i<<" "<<endl;
        // }

        // cout<<endl<<"erase function "<<endl; // time complexity of erase Function is O(n)
        // l.erase(l.begin());

        // for(auto &i: l){
        //     cout<<i<<" "<<endl;
        // }

    // Container Adaptors

        // // stack

        // stack<string>s;
        // s.push("Hello");   //last in first out (LIFO)
        // s.push("World");
        // s.push("Duniya");

        // cout<<"Top Element-> "<<s.top()<<endl;

        // cout<<"after pop Funtion"<<endl;
        // s.pop();
        // cout<<"Top Element-> "<<s.top()<<endl;

        // cout<<"Size Of stack-> "<<s.size()<<endl;
        // cout<<"Empty Or not-> "<<s.empty()<<endl;



        //queue

            // queue<string>s;
            // s.push("Hello");   //first in first out (FIFO)
            // s.push("World");
            // s.push("Duniya");

            // cout<<"Top Element-> "<<s.front()<<endl; // t.c of all Function is O(1)
    
            // cout<<"after pop Funtion"<<endl;
            // s.pop();
            // cout<<"Top Element-> "<<s.front()<<endl;

            // cout<<"Size Of stack-> "<<s.size()<<endl;
            // cout<<"Empty Or not-> "<<s.empty()<<endl;


        // Priority Queue  -> first element all greater

            //max heap
            // priority_queue<int> maxi;
            // //ab is mai se jo bhi element fatch karege wo hamera maximum element hoga


            //     maxi.push(1);
            //     maxi.push(20);
            //     maxi.push(11);
            //     maxi.push(15);
            //     maxi.push(64);
            //     maxi.push(13);

            //     int n = maxi.size();
            //     for(int i = 0 ; i < n ; i++){
            //         cout<<maxi.top()<<" ";
            //         maxi.pop();
            //     }
            //     cout<<endl;
        
        //min - heap 
        // priority_queue<int ,vector<int>,greater<int>>mini;
        //         mini.push(1);
        //         mini.push(20);
        //         mini.push(11);
        //         mini.push(15);
        //         mini.push(64);
        //         mini.push(13);

        //         int n = mini.size();
        //         for(int i = 0 ; i < n ; i++){
        //             cout<<mini.top()<<" ";
        //             mini.pop();
        //         }
        //         cout<<endl;


        //sets
            // set<int>s;
            // s.insert(5);  //time complexity of insert O(logn)
            // s.insert(5);
            // s.insert(5);
            // s.insert(5);
            // s.insert(5);
            // s.insert(5);
            // s.insert(0);
            // s.insert(0);
            // s.insert(0);
            // s.insert(34);
            // s.insert(82);
            // s.insert(5);
            // s.insert(866);
            // s.insert(458);
            // s.insert(378);

            // for(auto &i:s){
            //     cout<<i<<endl;
            // }
            // cout<<endl<<endl;
            // //delete Second Element
            // set<int>::iterator it = s.begin();
            // it++;it++;
            // s.erase(it);
            // for(auto &i:s){
            //     cout<<i<<endl;
            // }
            // //to use to find the coiunt of element
            // cout<<endl<<"Count Function"<<s.count(5)<<endl;

            // // find some element loction
            // cout<<"Find Function "<<endl;
            // set<int>::iterator itr = s.find(378);
            // for(auto it=itr;it!=s.end();it++){
            //     cout<<*it<<endl;
            // }


            // time complexity of some function 
            // insert();  t.C = O(logn)
            // erase();   t.C = O(logn)
            // find();    t.C = O(logn)
            // count();   t.C = O(logn)

            //size function  T.C = O(1)
            //empty function T.C = O(1)


        //maps

        // map<int,string>m;  // store in sorted way
        // m[1]="Hello";
        // m[2]="world";
        // m[13]="Neo";
        // m[7]="orecal";
        // m[3]="Duniya";

        // m.insert({5,"bheem"});
        
        // cout <<"Befor erase"<<endl;
        // for(auto &i:m){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        // //find Function
        // cout<<endl<<"Finding 13 - > "<<m.count(13)<<endl<<endl;

        // //after erase
        // m.erase(2); 
        // cout <<"after erase"<<endl;
        // for(auto &i:m){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        

        // //find  function 

        // cout<<endl<<"Find Function\n"<<endl;
        // auto it=m.find(5);
        // for (auto i = it; i !=m.end(); i++)
        // {
        //     cout<<(*i).first<<" "<<(*i).second<<endl;
        // }
        
        // T.C of set for insert ,find ,erase ,count=O(logn)
    
// Algorithm

    //binary Search
        vector<int>v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
        v.push_back(60);
            //t.c of Upper_bound and Lower_bound and binary Search is O(Logn)
        cout<<"Finding 40->  "<<binary_search(v.begin(),v.end(),40)<<endl;  // it Return BOOL 0 Or 1
        // lower bound
        cout<<"Lower bound-> "<<lower_bound(v.begin(),v.end(),45)-v.begin()<<endl;
        //upper bound
        cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),45)-v.begin()<<endl;
        cout<<endl;

        //max and min
        auto a = 3;
        auto b = 5;
        cout<<"MIN-> "<<min(a,b)<<endl;
        cout<<"MAX-> "<<max(a,b)<<endl<<endl; 

        //swap 
        swap(a,b);
        cout<<"a-> "<<a <<" "<<"b-> "<<b<<endl<<endl;

        //reverse
        string ab="abcd";
        reverse(ab.begin(),ab.end());
        cout<<"String ->"<<ab<<endl;
    
        //rotate function 
        cout<<"Before Rotate"<<endl;
        for(auto &i:v)
        {
            cout<<i<<" ";
        }cout<<endl;

        cout<<endl<<" after rotate"<<endl;
        rotate(v.begin(),v.begin()+1,v.end());
        for(auto &i:v)
        {
            cout<<i<<" ";
        }cout<<endl;


        //Sort based on three sort quicksort , heapsort and insertion sort 
        cout<<endl<<"Sorting"<<endl;
        sort(v.begin(),v.end());

        for(auto &i:v)
        {
            cout<<i<<" ";
        }cout<<endl;


}
