/*
There are N frustrated coders standing in a circle with a gun in their hands. Each coder
has a skill value S[ i ] and he can only kill those coders that have strictly less skill than
him. One more thing, all the guns have only 1 bullet. This roulette can take place in
any random order. Fortunately, you have the time stone (haaan wo harre wala) and
you can see all possible outcomes of this scenario. Find the outcome where the total
sum of the remaining coder's skill is minimum. Print this sum.
Input Format
The first line contains N the no. of coders
The next line contains N elements where the ith element is theS[ i ] of ith coder.
Output Format
Print a single line containing the minimum sum.*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
int n;
cin>>n;
map<int,int,greater<int> > m;

for(int i=0;i<n;i++)
{
int a;
cin>>a;
if(m.find(a)==m.end())
m[a]=1;
else m[a]++;
}
int num=0;
int total=0;
bool check=false;
for(auto it=m.begin();it!=m.end();++it)
{
if(check){
if(num>=it->second){
continue;
}else{
total+=(it->second-num)*(it->first);
num=it->second;
}
}
else{
total+=(it->second)*(it->first);
num=it->second;
check=true;
}

}
cout<<total<<endl;

}