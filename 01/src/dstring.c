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
  DString p = (DString)malloc(strlen(str)+1);
  assert(p != NULL);

  strcpy(p, str);

	// Postcondition: returvärdet innehåller samma sträng som 'str'
  assert(strcmp(p, str) == 0);

  return p;
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination är ej NULL
	// Precondition: *destination är ej NULL
	// Precondition: source är ej NULL
  assert(destination != NULL);
  assert(*destination != NULL);
  assert(source != NULL);

	/* Tips: 
	   - Tänk på att *destination redan är en dynamiskt allokerad sträng
	   - Tänk på att vi kommer att behöva allokera mer minne för att få plats med den här längre strängen. 
	   */
  int s_size = strlen(*destination) + strlen(source) + 1;
  *destination = realloc(*destination, s_size);
  assert(destination != NULL);

  char tmp[s_size];
  strcpy(tmp, *destination);

  *destination = strcat(*destination, source);

	// Post condition: *destination innehåller den gamla strängen ihopslagen med source
  assert(strcmp(*destination, strcat(tmp, source)) == 0);

  return 1;
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination är ej NULL, *destination är ej NULL
  assert(destination != NULL);
  assert(*destination != NULL);

	/* Tips:
	   - Använd realloc för att frigöra det överflödiga minnet
	   - glöm inte nolltermineringen */
  DString tmp = *destination;
  tmp[truncatedLength] = '\0';
  *destination = tmp;
  *destination = realloc(*destination, truncatedLength);
 
	// Postcondition: *destination är inte längre än 'truncatedLength' tecken
  assert(strlen(*destination) == truncatedLength);
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile är inte NULL
  assert(textfile != NULL);

	/* filpekaren får inte stängas, filen ska fungera som vanligt efter anropet */
  fprintf(textfile, "%s", str);

}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete är inte NULL
  assert(stringToDelete != NULL);

  free(*stringToDelete);
  *stringToDelete = NULL;

	// Postcondition: *stringToDelete -ÄR- NULL
  assert(*stringToDelete == NULL);
}
