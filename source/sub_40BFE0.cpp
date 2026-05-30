//----- (0040BFE0) --------------------------------------------------------
_DWORD *__cdecl sub_40BFE0(_BYTE *self, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  char *v9; // eax
  char *v10; // edx
  char v12; // [esp+0h] [ebp-28h]
  char v13; // [esp+0h] [ebp-28h]
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  char *Source; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h] BYREF
  char *v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+24h] [ebp-4h]

  v14 = 0;
  v6 = ((int (__stdcall *)(int, int, _BYTE *, _DWORD))DirectInputCreateA)(a3, 768, self + 8, 0);
  if ( v6 >= 0 )
  {
    sub_40C130(self, &v14, a4, a5);
    v18 = 0;
    if ( v14 )
    {
      v7 = a2;
      *a2 = v14;
      v8 = Source;
      if ( Source )
      {
        a2[1] = _strdup(Source);
        v8 = Source;
      }
      sub_488CEE(v8);
    }
    else
    {
      sub_4229D0(aInitializedKey, v12);
      sub_40C1F0(self, &v16, a4, a5);
      LOBYTE(v18) = 1;
      if ( v16 )
      {
        v7 = a2;
        *a2 = v16;
        v9 = v17;
        if ( v17 )
        {
          a2[1] = _strdup(v17);
          v9 = v17;
        }
        sub_488CEE(v9);
        sub_488CEE(Source);
      }
      else
      {
        sub_4229D0(aInitializedMou, v13);
        v10 = v17;
        self[292] = 1;
        v7 = a2;
        *a2 = 0;
        a2[1] = 0;
        sub_488CEE(v10);
        sub_488CEE(Source);
      }
    }
  }
  else
  {
    v7 = a2;
    sub_403A30(a2, v6, aCanTRegisterWi);
  }
  return v7;
}
