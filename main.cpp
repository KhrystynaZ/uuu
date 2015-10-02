#include<iostream>
using namespace std;
 size_t Kilkist(const char* text)
{
    size_t count = 0;
   while(*text)
    {
        while(*text && isspace(*text) ) ++text;
   if(!(*text) ) break;
 
       
 ++count;
        while(*text && !isspace(*text) ) ++text;
        }
    return count;
}
int main()
{
    enum { eSIZE = 100};
    const char g[eSIZE] = "Zhuravliova Khrystyna SN-11";
  cout<<"Text:"<<g<<endl;
    cout<<"Kilkist sliv y radky= "<< Kilkist(g)<<endl<<endl;
     return 0;
}

