//----- (00421110) --------------------------------------------------------
int __cdecl sub_421110(LPVOID *self, const char *a2)
{
  signed int v3; // kr04_4

  v3 = strlen(a2) + 1;
  if ( v3 > (int)self[1] )
  {
    sub_4885A6(self[2]);
    self[2] = operator new(v3);
    self[1] = (LPVOID)v3;
  }
  strcpy((char *)self[2], a2);
  return sub_421AB0((int)*self, (char*)self[2], (float*)(self + 6), (_DWORD*)(self + 7));
}
