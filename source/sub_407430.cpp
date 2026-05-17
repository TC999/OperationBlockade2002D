//----- (00407430) --------------------------------------------------------
char *__thiscall sub_407430(_DWORD *this, int a2, char *a3)
{
  char *result; // eax

  result = (char *)sub_407190(this, a2, 1);
  result[2] = 1;
  qmemcpy(a3, result + 4, 0x40u);
  return result;
}
