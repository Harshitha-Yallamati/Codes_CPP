#include<iostream>
using namespace std;

struct book{
  string title;
  string author;
  int pages;
};

int main()
{
  int n;
  cin>>n;
  struct book b[n];
  for(int i=0;i<n;i++) {
    cin>>b[i].title;
    cin>>b[i].author;
    cin>>b[i].pages;
  }
  for(int i=0;i<n;i++) {
    cout<<"Title of the Book "<<i<<" : "<<b[i].title<<endl;
    cout<<"Author : "<<b[i].author<<endl;
    cout<<"No. of pages : "<<b[i].pages<<endl;
  }
}
