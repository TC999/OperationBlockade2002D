//----- (0047CC85) --------------------------------------------------------
_DWORD *__cdecl sub_47CC85(_DWORD *a1)
{
  int v1; // edi
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edx

  a1[1] = 0;
  v1 = sub_47EE13(a1);
  result = (_DWORD *)sub_47EDD8((int)a1, 0x50u);
  if ( result )
  {
    *result = sub_47C2DF;
    result[1] = sub_47C3FD;
    result[2] = sub_47C4AC;
    result[3] = sub_47C53E;
    result[4] = sub_47C5DC;
    result[5] = sub_47C63D;
    result[6] = sub_47C69E;
    result[7] = sub_47C930;
    result[8] = sub_47CA4E;
    result[9] = sub_47CB71;
    result[10] = sub_47CC52;
    result[11] = v1;
    v3 = result + 15;
    v4 = 2;
    do
    {
      *(v3 - 2) = 0;
      *v3-- = 0;
      --v4;
    }
    while ( v4 );
    result[16] = 0;
    result[17] = 0;
    result[18] = 80;
    a1[1] = result;
  }
  else
  {
    nullsub_3(a1);
    *(_DWORD *)(*a1 + 20) = 53;
    *(_DWORD *)(*a1 + 24) = 0;
    return (_DWORD *)(*(int (__cdecl **)(_DWORD *))*a1)(a1);
  }
  return result;
}
