//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Pham

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>


using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
    vector<int> vec; 
  public: 
    MyClassVector1 (vector<int> v)  //parameterized constructor
    { 
      vec = v; 
    } 
    void print() 
    { 
      /// print the value of vector 
      for (int i = 0; i < vec.size(); i++) 
      {
          cout << vec[i] << " "; 
      }    
    } 
};

class MyClassVector2 
{ 
  private:
    vector<int> vec2; 
  
  public: 
      MyClassVector2(vector<int> v) : vec2(v) 
      { 
      } 
      void print() 
      { 
        /// print the value of vector 
        for (int i = 0; i < vec2.size(); i++) 
          cout << vec2[i] << " "; 
      } 
}; 

class MyClassVector3
{
  private:
    vector<int>& vec3; 
  
  public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec3(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec3.size(); i++) 
            cout << vec3[i] << " "; 
    } 
};



int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(7);
    vi.push_back(8);
    vi.push_back(9);

   // add 3 elements to the vs vector
    vs.push_back("Trang");
    vs.push_back("Q");
    vs.push_back("Pham");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << endl << "Values in vi: " << endl;
    for (int i = 0; i < vi.size(); i++)
    {
      cout << vi[i] << endl;
    }

   // display the 3 elements in the vs vector
    cout << endl << "Strings in vs: " << endl;
    for (int i = 0; i < vs.size(); i++)
    {
      cout << vs[i] << endl;
    }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 0; i < 4; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
    vector<int> vec2; 
        for (int i = 4; i < 9; i++) 
            vec2.push_back(i); 
        MyClassVector2 obj2(vec2); 
        obj2.print();

    vector<int> vec3; 
        for (int i = 9; i < 14; i++) 
            vec3.push_back(i); 
        MyClassVector3 obj3(vec3); 
        obj3.print();
    
    /****Section_Name***STL_Iterators*/ 
    vector<int> vint(10);
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    cout << endl << endl << "Elements of vector vint displayed using iterators:" << endl;
    vector<int>::iterator it1;     //displaying elements using iterator it1
    for (it1 = vint.begin(); it1 != vint.end(); ++it1)
    {
      cout << " " << *it1;
    }

    /****Section_Name*** Stack*/
    stack<int> st;

    st.push(100);   //push number on st
    assert(st.size() == 1);   //verify one element is on st
    assert(st.top() == 100);  //verify element value
    
    st.top() = 456;    //assign new
    assert(st.top() == 456);

    st.pop();    //remove element
    assert(st.empty() == true);
    /*
      By definition, a stack is a sequence container that allows the insertion and extraction of its elements ONLY from the TOP of the container.
      Here, the code first created a stack named st, then the value 100 is pushed onto the stack. The element, therefore, contains the value of 100. The code then proceeds to change the value of the element from 100 to 456. Lastly, st was cleared by the pop function.
    */
    

    /****Section_Name**** Set*/
    set<int> iset;

    iset.insert(200);
    iset.insert(100);
    iset.insert(500);
    iset.insert(400);
    iset.insert(300);

    if (iset.find(500) != iset.end())
    {
      iset.insert(500);
    }
    assert(iset.size() == 5);
    set<int>::iterator it2;   //displaying the set using iterator it2

    cout << endl << endl << "Displaying elements of set iset using iterators:" << endl;
    for (it2 = iset.begin(); it2 != iset.end(); it2++)
    {
      cout << " " << *it2;
    }
    /*
      Sets are containers that store unique elements in a very specific order. Elements contained in a set cannot be modifed, but elements may be inserted or removed.
      In the code above, the set iset was created and values were inserted in a random order. The elements of iset was then displayed using iterator it2.
    */
    

    /****Section_Name****Pair_Structure*/
    pair<string, string> strstr;
    strstr.first = "Hi";
    strstr.second = "Dr_T";

    pair<int, string> intstr;
    intstr.first = 4;
    intstr.second = "four";

    pair<string, int> strint ("ten", 10);
    assert(strint.first == "ten");
    assert(strint.second == 10);

    /*
      A pair structure is a type of C++ structure that holds only 2 objects, one of type T1 and the other type T2. It behaves much like a container that can only hold 2 elements.
      The code above declared and assigned values (intergers and strings) to 3 pair structures. With the first pair inlcuding 2 strings, the second an interger and a string, and the third a string and an interger.
    */

    /****Section_Name**** Map_Insert*/
    typedef map<string, int> MapT1;
    typedef MapT1::const_iterator MapIterT1;

    MapT1 amap1;
    pair<MapIterT1, bool> result =
      amap1.insert(make_pair("Fred", 45));

    assert(result.second == true);
    assert(result.first->second == 45);

    result = amap1.insert(make_pair("Fred", 54));

    assert(result.second == false);
    assert(result.first->second == 45);

    /*
      A map is a type of container that stores pairs of a key type and a value type. This provides for fast access of a value if given a key. Because elements in a map are ALWAYS sorted by keys, maps support iteration in order of keys.
      The code above declared a map containing a string and an interger (Fred, 45).
    */

    /****Section_Name****Map_Summary*/
    map<string, string> phoneBook;
    phoneBook["411"] = "Directory";
    phoneBook["911"] = "Emergency";
    phoneBook["508-678-2811"] = "BCC";

    if (phoneBook.find("411") != phoneBook.end())
    {
      phoneBook.insert(
        make_pair(string("411"), string("Directory"))
      );
    }
    assert(phoneBook.size() == 3);
    map<string, string>::const_iterator it3;

    cout << endl << endl << "Displaying elements of the map phoneBook using iterator it3:" << endl;

    for (it3 = phoneBook.begin(); it3 != phoneBook.end(); it3++)
    {
      cout
        << " " << it3->first
        << " " << it3->second
        << endl;
    }

    /*
      The code above declared a map named phoneBook and inserted 3 elements (each a pair) into it. The elements of the map was then displayed using the iterator it3.
    */

    /****Section_Name**** Sort_Algorithm*/
    int arr2[100];
    sort (arr2, arr2 + 100);
    vector<int> v1;
    sort (v1.begin(), v1.end());

    /*
      The code above declared an array of 100 elements and the sort algorithm was used on the array. Additionally, vector v1 was also declared and was passed through the sort algorithm.
    */

    /****Section_Name****Predicate_Algorithm*/
    bool less_than_7 (int value);
    {
      int value;
      return value < 7;
    }

    vector<int> v2;
    int count_less = std::count_if(v2.begin(), v2.end(), less_than_7);

    /*
      A predicate is a function returning a bool. An object which overloads operator() to return a bool is also considered a predicate.
      The code above used the predicate function to determine if an interger value returned in the boolian function less_than_7 is indeed less than 7.
    */
      return 0; 
 }