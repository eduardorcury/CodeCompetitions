#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  int cases;
  int size;
  string lydia;
  cin >> cases;

  for (int i = 0; i < cases; i++)
    {
      cin >> size;
      cin >> lydia;
      string resposta (2 * size - 2, 'E');
      int z = 0;

      while (z < lydia.length ())
	{
	  if (lydia[z] == 'E')
	    {
	      resposta[z] = 'S';
	    }
	  z++;
	}
      cout << "Case #" << i + 1 << ": " << resposta << endl;
    }
}
