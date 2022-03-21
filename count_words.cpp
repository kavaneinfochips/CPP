#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main ()
{
  fstream f1;
  f1.open ("data.txt");
  int count = 0;
 
  char word[15];
  if (!f1)
 
    {
      cout << "error" << endl;
    }
  else
    {
      while (!f1.eof ())
	{
	  f1 >> word;	
      if(!strcmp(word,"the"))
            count++;
	}
    }
  cout << "Total words= " << count << "\n";

   f1.close();
}

