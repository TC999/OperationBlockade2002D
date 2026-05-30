//----- (00408960) --------------------------------------------------------
int __cdecl sub_408960(_DWORD *self, float a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ebp
  float *v6; // eax
  int v7; // ecx

  v3 = 0;
  result = self[5];
  if ( result > 0 )
  {
    v5 = 0;
    do
    {
      v6 = (float *)sub_407190(self, v3, 1);
      *((_BYTE *)v6 + 78) = 1;
      v6[20] = a2;
      v7 = *(_DWORD *)(self[6] + v5 + 88);
      if ( v7 )
      {
        if ( a2 == 1.0 )
          *(_DWORD *)(v7 + 12) = 2;
        else
          *(_DWORD *)(v7 + 12) = 4;
      }
      result = self[5];
      ++v3;
      v5 += 96;
    }
    while ( v3 < result );
  }
  return result;
}
