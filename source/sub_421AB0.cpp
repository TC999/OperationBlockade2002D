//----- (00421AB0) --------------------------------------------------------
char __stdcall sub_421AB0(int a1, char *a2, float *a3, _DWORD *a4)
{
  char *v4; // esi
  char result; // al
  int v6; // eax

  v4 = a2;
  *a4 = 0;
  *a3 = 0.0;
  for ( result = *a2; *v4; *a3 = *a3 - 2.0 )
  {
    v6 = (int)(intptr_t)sub_421DB0(a1, *v4);
    if ( v6 )
    {
      *a4 = *(_DWORD *)(v6 + 24);
      *a3 = *(float *)(v6 + 20) + *a3;
    }
    result = *++v4;
    if ( !result )
      break;
  }
  return result;
}
