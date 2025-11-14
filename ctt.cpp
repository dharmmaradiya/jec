
#include <iostream>
using namespace std;
class timeconveter{
    public:
    int totalsecond;
    int hour;
    int minutes;
    int remindersecond;
    int second ;
    void showdetails(){
        cout<<hour<<":"<<minutes<<":"<<second<<endl;
        
    }
};
int main() {
  timeconveter s1;
  cout<<"enter the second:"<<endl;
  cin>> s1.totalsecond;
  s1.hour=s1.totalsecond/3600; 
   s1.remindersecond=s1.totalsecond%3600; 
    s1.minutes =s1.remindersecond/60; 
    s1.second =s1.remindersecond%60; 
  s1.showdetails();
    
    return 0;
}