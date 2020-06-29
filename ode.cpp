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
         if ((i>4)&&(i<19)){
         stringstream(str)>>data;
         inputs.push_back(data);
          }
     i++;
     }
   vector<float>delta_t;
   vector<float>npts;
   for(int j=0;j<inputs.size();j++)
  {
   if(j%2==0){
      delta_t.push_back(inputs[j]);
   }
   else
   {
    npts.push_back(inputs[j]);
   }
 }
   for(int e=0;e<npts.size();e++) {            // need bracket
    dt=delta_t[e];
    N=npts[e]; 
   vector<float> t;
   t.push_back(0);
   int N_i=static_cast<int>(N); 
   for(int in=0;in<(N_i-1);in++){
       float t_p=t[in];
       t.push_back((t_p+dt));
   }
   cout<<t.back()<<"  back  tn  size  "<<"OR"<<t[t.size()-1]<<" of the "<<e<<"\n";
cout<<t.size()<<" = size   N=  "<<N_i<<" of  "<<e<<"\n";
float dt_test=t[1]-t[0];
cout<<dt_test<<"  dt of   "<<e<<"   dt actual="<<dt<<"\n";
cout<<t[0]<<" =  t0 of  "<<e<<"\n";
//for(i=0;i<N;i++){
//     cout<<t[i]<<" \n";
//  } 
//   float x0=1.0;
//   vector<float> x(N);
//   x[0]=x0;
//   for(i=0;i<(N-1);i++)
//   {
//     x[i+1]=x[i]+(dt*(-3)*(x[i]));
//   }
//   ot<<"t"<<"  "<<"x\n";
//   for(i=0;i<N;i++){
//     ot<<t[i]<<"  "<<x[i]<<" \n";
//   }

    }
 
}


