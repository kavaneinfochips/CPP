#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main ()
{
  fstream f2;
  f2.open ("data.txt");
  int count = 0;
 
  char word[20];
  if (!f2)
 
    {
      cout << "error" << "\n";
    }
  else
    {
      while (!f2.eof ())
	{
	  f2 >> word;	
	  if(strlen(word)>1)
	  {
      for(int i=0;i<word[i];i++)
            if(word[i]=='a')
                count++;
                continue;
	
	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words 'a'= " << count << endl;

   f2.close();
}

