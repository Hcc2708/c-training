#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v1(10);
  vector<int>v2(10);
  for(int i=1; i<=9;i++)
  {
   v2[i]=i;
  }
  cout<<"size of vector \t"<<v1.size()<<"\n";
  for(int i=1; i<=9;i++)
  {
   v1[i]=i;
  }
  for(int i=1; i<=9;i++)
  {
    cout<<v1[i]<<"\t";
  }
  cout<<endl;
  vector<int>::iterator v = v1.begin();/// here now 0 will automatically assign as a first element of vector(but the size of vector will not increase )
                                     ///  and index value for all element will also change (it happens only with vector )
                                    /// if there is no extra place for 0 then last element of a vector will replace by its previous element and previous
                                    /// will be replace by its previous and so on.... and 0 will added at the beginning

  cout<<"size of vector \t"<<v1.size()<<"\n";
  v = v+3 ;
  v1.insert(v,200); /// insertion of element is only possible when we assign at least one element less in vector from its size
  v = v1.begin();
  for(int i=0; i<v1.size();i++)
  {
    cout<<*v<<"\t";
    v++;
  }
 /// v1.pop_front(); not work with vector
    cout<<"\n"<<v1.size()<<endl;

  v1.erase(v1.begin(), v1.begin()+5);/// it will erase 5 element from beginning // 0 1 2 200 3
  //v1.clear();
  v = v1.begin();
  for(int i=0; i<v1.size();i++)
  {
    cout<<*v<<"\t";
    v++;
  }
  ///v1.sort(); will not work
  /// v1.reverse(); will not work
  ///v1.merge(v2); will not work
  cout<<"\n"<<v1.size();
}
