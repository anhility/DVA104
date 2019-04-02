#include "dstring.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>


DString dstring_initialize(const char* str)
{
	// Precondition: str �r ej NULL
  assert(str != NULL);
	/* Tips:
	   - Allokera tillr�ckligt med minne f�r att f� plats med str
	   - Det �r till�tet att anv�nda inbyggda str�ngfunktioner (som t.ex strcpy())
	   - Kom ih�g att anv�nda assert() */
  char *p = malloc(strlen(str) + 1);
  assert(p != NULL);

  strcpy(p, str);
  printf("%s",p);

	// Postcondition: returv�rdet inneh�ller samma str�ng som 'str'
  assert(p == str);

  return p;
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination �r ej NULL
	// Precondition: *destination �r ej NULL
	// Precondition: source �r ej NULL

	/* Tips: 
	   - T�nk p� att *destination redan �r en dynamiskt allokerad str�ng
	   - T�nk p� att vi kommer att beh�va allokera mer minne f�r att f� plats med den h�r l�ngre str�ngen. 
	   */

	// Post condition: *destination inneh�ller den gamla str�ngen ihopslagen med source

	return -1; // Ers�tt denna rad. Den �r just nu med f�r att programmet ska kompilera.
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination �r ej NULL, *destination �r ej NULL

	/* Tips:
	   - Anv�nd realloc f�r att frig�ra det �verfl�diga minnet
	   - gl�m inte nolltermineringen */

	// Postcondition: *destination �r inte l�ngre �n 'truncatedLength' tecken
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile �r inte NULL

	/* filpekaren f�r inte st�ngas, filen ska fungera som vanligt efter anropet */
}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete �r inte NULL

	// Postcondition: *stringToDelete -�R- NULL
}
