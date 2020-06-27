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
 
    cout<<inputs[0];
 
 
 //  double dt=0.5;
 //    vector<double> t = {0};
 //    t.push_back(t[0]+dt);
//  cout <<t[1];

    }
 



