//----- (004986BA) --------------------------------------------------------
// AUTO-FIX: Stubbed with memset, original used qmemcpy with undeclared globals
#include <string.h>

static char unk_521700[28] = {0};
static const char* off_4AEFBC = NULL;

void sub_4986BA()
{
  if (off_4AEFBC)
    memcpy(&unk_521700, off_4AEFBC, 0x1Cu);
}
