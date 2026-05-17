//----- (00476415) --------------------------------------------------------
LPVOID __thiscall sub_476415(LPVOID *this)
{
  LPVOID *v2; // edi
  int v3; // ebx
  LPVOID result; // eax

  *this = &off_49A818;
  sub_475CAA(this);
  v2 = this + 1049;
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
  *this = &off_49A774;
  return result;
}
