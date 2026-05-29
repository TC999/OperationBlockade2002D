//----- (00403D90) --------------------------------------------------------
char *__thiscall sub_403D90(char *self, const char *a2)
{
  char *v2; // ebx
  char *result; // eax

  v2 = self + 320;
  strcpy(self + 60, a2);
  strcpy(self + 320, self + 60);
  result = strrchr(self + 320, 92);
  if ( result )
  {
    result[1] = 0;
  }
  else
  {
    result = (char *)(strlen(".\\") + 1);
    qmemcpy(v2, ".\\", (unsigned int)result);
  }
  return result;
}
