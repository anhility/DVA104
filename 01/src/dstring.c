#include "dstring.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>


DString dstring_initialize(const char* str)
{
	// Precondition: str är ej NULL
  assert(str != NULL);
	/* Tips:
	   - Allokera tillräckligt med minne för att få plats med str
	   - Det är tillåtet att använda inbyggda strängfunktioner (som t.ex strcpy())
	   - Kom ihåg att använda assert() */
  char *p = malloc(strlen(str) + 1);
  assert(p != NULL);

  strcpy(p, str);
  printf("%s",p);

	// Postcondition: returvärdet innehåller samma sträng som 'str'
  assert(p == str);

  return p;
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination är ej NULL
	// Precondition: *destination är ej NULL
	// Precondition: source är ej NULL

	/* Tips: 
	   - Tänk på att *destination redan är en dynamiskt allokerad sträng
	   - Tänk på att vi kommer att behöva allokera mer minne för att få plats med den här längre strängen. 
	   */

	// Post condition: *destination innehåller den gamla strängen ihopslagen med source

	return -1; // Ersätt denna rad. Den är just nu med för att programmet ska kompilera.
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination är ej NULL, *destination är ej NULL

	/* Tips:
	   - Använd realloc för att frigöra det överflödiga minnet
	   - glöm inte nolltermineringen */

	// Postcondition: *destination är inte längre än 'truncatedLength' tecken
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile är inte NULL

	/* filpekaren får inte stängas, filen ska fungera som vanligt efter anropet */
}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete är inte NULL

	// Postcondition: *stringToDelete -ÄR- NULL
}
