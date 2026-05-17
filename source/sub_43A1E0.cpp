//----- (0043A1E0) --------------------------------------------------------
int __thiscall sub_43A1E0(int *this)
{
  int v2; // ebx
  int *v3; // esi
  int result; // eax

  v2 = 4;
  this[5] = -1;
  this[10] = 0;
  v3 = this + 6;
  do
  {
    result = *v3;
    if ( *v3 )
    {
      result = sub_4286C0(this, *v3);
      if ( *v3 )
        result = (**(int (__thiscall ***)(int, int))*v3)(*v3, 1);
      *v3 = 0;
    }
    ++v3;
    --v2;
  }
  while ( v2 );
  return result;
}
