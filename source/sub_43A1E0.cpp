//----- (0043A1E0) --------------------------------------------------------
int __cdecl sub_43A1E0(int *self)
{
  int v2; // ebx
  int *v3; // esi
  int result; // eax

  v2 = 4;
  self[5] = -1;
  self[10] = 0;
  v3 = self + 6;
  do
  {
    result = *v3;
    if ( *v3 )
    {
      result = sub_4286C0((uint32*)self, *v3);
      if ( *v3 )
        result = (**(int (__cdecl ***)(int, int))*v3)(*v3, 1);
      *v3 = 0;
    }
    ++v3;
    --v2;
  }
  while ( v2 );
  return result;
}
