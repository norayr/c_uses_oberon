/* build with
cc -o test test.c m.o /opt/voc/lib/libvoc-O2.a -I /opt/voc/2/include
*/
#include <stdio.h>
#include "SYSTEM.h"

INT16 m_add (INT16 i, INT16 j);

short main()
{

short i=40; short j=2;

short k=m_add(i, j);

printf("res=%i\n", k);


}
