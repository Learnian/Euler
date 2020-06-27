#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // ofstream ot("output.dat");
    //string t;
    //string x;
    float dt;
    float N;
    ifstream p ("params.dat");
 
    vector<float>inputs;
    float data;
    string str;
    int i=0;
    while( getline( p, str, ' ' ) )
    {
         if (i>3){
         stringstream(str)>>data;
         inputs.push_back(data);
          }
     i++;
     }
 
dt=inputs[0];
N=inputs[1];
vector<float> t;
t.push_back(0); 
for(i=0;i<N;i++){
     t.push_back(t[i]+dt);
  }
for(i=0;i<N;i++){
     cout<<t[i]<<" \n";
  } 

    }
 



