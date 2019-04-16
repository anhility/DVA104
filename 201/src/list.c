#include "list.h"
#include <stdlib.h>
#include <assert.h>

/* Det ar helt tillatet och rekommenderat att lagga till statiska hjalpfunktioner, men du far inte andra de funktioner som redan finns */

/* Hjalpfunktion till add-funktionerna
   Allokerar minne for en ny nod och returnerar den, nodens next-pekare ska vara NULL
   */
static Node* createListNode(const Data data)
{
    // Du kan valja om du ska se allokerad nod som ett post-condition eller returnera NULL vid misslyckande
    return NULL; //Ersatt med ratt returvarde
}

List createEmptyList(void)
{
	return 0; // Ersatt med ratt returvarde
}


int isEmptyList(const List list)
{
    return 0; //ersatt med ratt returvarde
}


void addFirst(List *list, const Data data)
{
    // Anropa createListNode for att skapa den nya noden
    // Om createListNode kan returnera NULL maste detta fall tas hand om

   /* Postcondition: Det nya datat ligger forst i listan (testa med assert, anvand funktionen getFirstElement()) */
}

void addLast(List *list, const Data data)
{

  /* Postcondition: Det nya datat ligger forst i listan (testa med assert, anvand funktionen getLastElement()) */
}

void removeFirst(List *list)
{
	/* Precondition: listan ar inte tom (testa med assert) */

	//Glom inte att frigora minnet for den nod som lankas ur listan.
}

void removeLast(List *list)
{
	/* Precondition: listan ar inte tom (testa med assert) */

    //Glom inte att frigora minnet for den nod som lankas ur listan.
}

int removeElement(List *list, const Data data)
{
	/* Precondition: listan ar inte tom (testa med assert) */

    return 0; //Ersatt med ratt returvarde
}

int searchList(const List list, const Data data)
{
    return 0; //Ersatt med ratt returvarde
}

int numberOfNodesInList(const List list)
{
    return 0; //Ersatt med ratt returvarde
}

void clearList(List *list)
{
    //Alla noder maste avallokeras en och en, det racker inte att endast frigora list!

	/* Postcondition: Listan ar tom (testa med assert) */
}

/*Skriv ut listan
  Vid anropet kan man ange stdout som argument 2 for att skriva ut på skarmen.
  Anvanda fprintf for att skriva ut.
  Den har typen av utskriftfunktion blir mer generell da man kan valja att skriva ut till skarmen eller till fil.*/
void printList(const List list, FILE *textfile)
{
    
}


Data getFirstElement(const List list)
{
    /* Precondition: listan ar inte tom (testa med assert) */

    return 0; //Ersatt med ratt returvarde
}


Data getLastElement(const List list)
{
	/*  Precondition: listan ar inte tom (testa med assert) */

    return 0; //Ersatt med ratt returvarde
}
