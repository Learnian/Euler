#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ofstream ot("output.dat");
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
//for(i=0;i<N;i++){
//     cout<<t[i]<<" \n";
//  } 
   float x0=1.0;
   vector<float> x(N);
   x[0]=x0;
   for(i=0;i<(N-1);i++)
   {
     x[i+1]=x[i]+(dt*(-3)*(x[i]));
   }
   ot<<"t"<<"  "<<"x\n";
   for(i=0;i<N;i++){
     ot<<t[i]<<"  "<<x[i]<<" \n";
   }

    }
 



