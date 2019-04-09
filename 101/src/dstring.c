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
  DString p = (DString)malloc(strlen(str)+1);
  assert(p != NULL);

  strcpy(p, str);

	// Postcondition: returv�rdet inneh�ller samma str�ng som 'str'
  assert(strcmp(p, str) == 0);

  return p;
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination �r ej NULL
	// Precondition: *destination �r ej NULL
	// Precondition: source �r ej NULL
  assert(destination != NULL);
  assert(*destination != NULL);
  assert(source != NULL);

	/* Tips: 
	   - T�nk p� att *destination redan �r en dynamiskt allokerad str�ng
	   - T�nk p� att vi kommer att beh�va allokera mer minne f�r att f� plats med den h�r l�ngre str�ngen. 
	   */
  int s_size = strlen(*destination) + strlen(source) + 1;
  *destination = realloc(*destination, s_size);
  assert(destination != NULL);

  char tmp[s_size];
  strcpy(tmp, *destination);

  *destination = strcat(*destination, source);

	// Post condition: *destination inneh�ller den gamla str�ngen ihopslagen med source
  assert(strcmp(*destination, strcat(tmp, source)) == 0);

  return 1;
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination �r ej NULL, *destination �r ej NULL
  assert(destination != NULL);
  assert(*destination != NULL);

	/* Tips:
	   - Anv�nd realloc f�r att frig�ra det �verfl�diga minnet
	   - gl�m inte nolltermineringen */
  DString tmp = *destination;
  tmp[truncatedLength] = '\0';
  *destination = tmp;
  *destination = realloc(*destination, truncatedLength);
 
	// Postcondition: *destination �r inte l�ngre �n 'truncatedLength' tecken
  assert(strlen(*destination) == truncatedLength);
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile �r inte NULL
  assert(textfile != NULL);

	/* filpekaren f�r inte st�ngas, filen ska fungera som vanligt efter anropet */
  fprintf(textfile, "%s", str);

}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete �r inte NULL
  assert(stringToDelete != NULL);

  free(*stringToDelete);
  *stringToDelete = NULL;

	// Postcondition: *stringToDelete -�R- NULL
  assert(*stringToDelete == NULL);
}
