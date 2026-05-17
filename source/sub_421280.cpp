//----- (00421280) --------------------------------------------------------
int __thiscall sub_421280(_DWORD *this)
{
  const char *v2; // esi
  unsigned int v3; // kr04_4

  v2 = (const char *)this[2];
  v3 = strlen(v2) + 1;
  if ( (int)(v3 - 1) > 0 )
    v2[v3 - 2] = 0;
  return sub_421AB0(*this, this[2], this + 6, this + 7);
}
