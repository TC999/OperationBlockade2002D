//----- (004050B0) --------------------------------------------------------
int __cdecl sub_4050B0(_DWORD *self)
{
  _DWORD *v1; // edi
  int result; // eax
  int *v3; // ebp
  int v4; // ebx
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+Ch] [ebp-8h]

  v1 = self;
  v12 = 0;
  result = self[7];
  if ( result > 0 )
  {
    v3 = (int *)(self[8] + 12);
    do
    {
      v4 = v1[1];
      v5 = 0;
      if ( (int)v1[2] <= 0 )
      {
LABEL_6:
        sub_4229D0(aNoMatchForNode, *(v3 - 1));
        if ( *v3 > 1 )
          sub_4229D0(aWarningCanTFin, *(v3 - 1));
      }
      else
      {
        while ( _strcmpi(*(const char **)(v4 + 8), (const char *)*(v3 - 1)) )
        {
          v4 += 172;
          if ( ++v5 >= v1[2] )
            goto LABEL_6;
        }
        v6 = *(_DWORD *)(v4 + 12);
        v7 = *v3 + v6;
        *(_DWORD *)(v4 + 12) = v7;
        v8 = sub_488DD7(*(LPVOID *)(v4 + 16), 40 * v7);
        v9 = 0;
        if ( v8 )
        {
          *(_DWORD *)(v4 + 16) = v8;
          v11 = 0;
          if ( *v3 > 0 )
          {
            v10 = 40 * v6;
            do
            {
              qmemcpy((void *)(v10 + *(_DWORD *)(v4 + 16)), (const void *)(v3[1] + v9), 0x28u);
              v9 += 40;
              v10 += 40;
              ++v11;
            }
            while ( v11 < *v3 );
            v1 = self;
          }
        }
      }
      v3 += 43;
      result = ++v12;
    }
    while ( v12 < v1[7] );
  }
  return result;
}
