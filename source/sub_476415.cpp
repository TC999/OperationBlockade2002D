//----- (00476415) --------------------------------------------------------
LPVOID __thiscall sub_476415(LPVOID *self)
{
  LPVOID *v2; // edi
  int v3; // ebx
  LPVOID result; // eax

  *self = &off_49A818;
  sub_475CAA(self);
  v2 = self + 1049;
  v3 = 4;
  do
  {
    result = *v2;
    if ( *v2 )
      result = (LPVOID)sub_4885A6(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  *self = &off_49A774;
  return result;
}
