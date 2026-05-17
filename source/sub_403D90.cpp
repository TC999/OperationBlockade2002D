//----- (00403D90) --------------------------------------------------------
char *__thiscall sub_403D90(char *this, const char *a2)
{
  char *v2; // ebx
  char *result; // eax

  v2 = this + 320;
  strcpy(this + 60, a2);
  strcpy(this + 320, this + 60);
  result = strrchr(this + 320, 92);
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
