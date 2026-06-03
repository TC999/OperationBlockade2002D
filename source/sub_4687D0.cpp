//----- (004687D0) --------------------------------------------------------
extern char aWater[];
extern char aWave[];
extern char aFoam[];

int __cdecl sub_4687D0(int *self, int a2, int a3)
{
  int result; // eax
  double v6; // st7
  int v7; // ecx
  int v8; // eax
  _DWORD **v9; // edx
  float v10[17]; // [esp+18h] [ebp-44h] BYREF
  int v11; // [esp+60h] [ebp+4h]
  int v12; // [esp+60h] [ebp+4h]

  if ( !_strnicmp(*(const char **)(a2 + 8), aWater, strlen(aWater)) )
  {
    (*(void (__cdecl **)(int *, int, _DWORD, _DWORD))*self)(self, a2, 0, 0);
    sub_41BEF0((_DWORD *)dword_520A50, 0, self[self[151] + 147], 1, 0);
    result = sub_406000((_DWORD *)a2, a3);
    v11 = result;
    if ( byte_520974 )
    {
      (*(void (__cdecl **)(int *, int, _DWORD, _DWORD))*self)(self, a2, 0, 0);
      v6 = (2.0 - *((float *)self + 153)) * 0.5;
      qmemcpy(v10, (const void *)(*(_DWORD *)(a2 + 52) + 4), sizeof(v10));
      v10[3] = v6;
      v10[7] = v6;
      (*(void (__stdcall **)(_DWORD, float *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v10);
      sub_41BEF0((_DWORD *)dword_520A50, 0, self[self[152] + 147], 1, 0);
      sub_41BC00((_DWORD *)dword_520A50, 0, 1, 0, 0, 1, -1, 1);
      return sub_406000((_DWORD *)a2, a3) + v11;
    }
  }
  else
  {
    if ( !_strnicmp(*(const char **)(a2 + 8), aWave, strlen(aWave))
      || !_strnicmp(*(const char **)(a2 + 8), aFoam, strlen(aFoam)) )
    {
      v7 = self[155];
      v8 = 0;
      v12 = 0;
      if ( v7 > 0 )
      {
        v9 = (_DWORD **)self[154];
        while ( **v9 != a2 )
        {
          ++v8;
          ++v9;
          if ( v8 >= v7 )
            goto LABEL_13;
        }
        v12 = *(_DWORD *)(self[154] + 4 * v8);
      }
LABEL_13:
      (*(void (__cdecl **)(int *, int, _DWORD, _DWORD))*self)(self, a2, 0, 0);
      if ( v12 )
      {
        qmemcpy(v10, (const void *)(*(_DWORD *)(a2 + 52) + 4), sizeof(v10));
        v10[7] = *(float *)(v12 + 24);
        v10[3] = v10[7];
        v10[15] = v10[7];
        v10[11] = v10[7];
        (*(void (__stdcall **)(_DWORD, float *))(**(_DWORD **)ArgList + 168))(*(_DWORD *)ArgList, v10);
        sub_41BC00((_DWORD *)dword_520A50, 0, 1, -1, -1, -1, -1, 1);
      }
    }
    else
    {
      (*(void (__cdecl **)(int *, int, _DWORD, _DWORD))*self)(self, a2, 0, 0);
    }
    return sub_406000((_DWORD *)a2, a3);
  }
  return result;
}
