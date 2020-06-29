#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ofstream ot0("output_0.dat");
    ofstream ot1("output_1.dat");
    ofstream ot2("output_2.dat");
    ofstream ot3("output_3.dat");
    ofstream ot4("output_4.dat");
    ofstream ot5("output_5.dat");
    ofstream ot6("output_6.dat");
    
    //string t;
    //string x;
    double dt;
    double N;
    ifstream p ("params.dat");
 
    vector<double>inputs;
    double data;
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
   vector<double>delta_t;
   vector<double>npts;
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
   for(int e=0;e<npts.size();e++) {            
     dt=delta_t[e];
     N=npts[e]; 
     vector<double> t;
     t.push_back(0);
     int N_i=static_cast<int>(N); 
     for(int in=0;in<(N_i-1);in++){
         double t_p=t[in];
         t.push_back((t_p+dt));
     }
    // string out_str=("output");
    // string ot_sr;
    // string e_string;
    // e_string=to_string(e);
    // ot_sr=out_str+e_string+".dat";
    // ofstream ot(ot_sr);
      double x0=1.0;
      vector<double> x(N_i);
      x[0]=x0;
      for(i=0;i<(N_i-1);i++)
      {
        x[i+1]=x[i]+(dt*(-3)*(x[i]));
      }
      if(e==0){
      ot0<<"t"<<e<<"  "<<"x"<<e<<"\n";
      for(i=0;i<N_i;i++){
        ot0<<t[i]<<"  "<<x[i]<<" \n";
     }
 
     }
     else if(e==1){
         ot1<<"t"<<e<<"  "<<"x"<<e<<"\n";
         for(i=0;i<N_i;i++){
           ot1<<t[i]<<"  "<<x[i]<<" \n";
         }

     }
     else if(e==2){
          ot2<<"t"<<e<<"  "<<"x"<<e<<"\n";
          for(i=0;i<N_i;i++){
              ot2<<t[i]<<"  "<<x[i]<<" \n";
          }

     }
      else if(e==3){
           ot3<<"t"<<e<<"  "<<"x"<<e<<"\n";
           for(i=0;i<N_i;i++){
               ot3<<t[i]<<"  "<<x[i]<<" \n";
           }

     }
     else if(e==4){
            ot4<<"t"<<e<<"  "<<"x"<<e<<"\n";
            for(i=0;i<N_i;i++){
                 ot4<<t[i]<<"  "<<x[i]<<" \n";
            }

     }
     else if(e==5){
           ot5<<"t"<<e<<"  "<<"x"<<e<<"\n";
           for(i=0;i<N_i;i++){
               ot5<<t[i]<<"  "<<x[i]<<" \n";
           }

     }
     else if(e==6){
         ot6<<"t"<<e<<"  "<<"x"<<e<<"\n";
         for(i=0;i<N_i;i++){
            ot6<<t[i]<<"  "<<x[i]<<" \n";
          } 

     }

   }
//     if(e==0){
//      double a= N_i-N;
//      cout<<dt<<"   dt\n";
//     cout<<t[0]<<"   t0\n";
//       cout<<a<<"   Ni-N\n";
//       for(int h=8999980;h<(t.size()-1);h++){
//         cout<<t[h]<<"\n";
//       }
//     }
//   cout<<t.back()<<"  back  tn  size  "<<"OR"<<t[t.size()-1]<<" of the "<<e<<"\n\n";
//cout<<t.size()<<" = size   N=  "<<N_i<<" of  "<<e<<"\n\n";
//double dt_test=t[1]-t[0];
//cout<<dt_test<<"  dt of   "<<e<<"   dt actual="<<dt<<"\n\n";
//cout<<t[0]<<" =  t0 of  "<<e<<"\n\n";
//for(i=0;i<N;i++){
//     cout<<t[i]<<" \n";
//  } 
//   double x0=1.0;
//   vector<double> x(N);
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


