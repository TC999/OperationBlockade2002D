//----- (0043C290) --------------------------------------------------------
char __thiscall sub_43C290(int this, int a2)
{
  double v3; // st7
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  const char **v10; // [esp+4h] [ebp-10Ch]
  int v11; // [esp+8h] [ebp-108h]
  char v12[260]; // [esp+Ch] [ebp-104h] BYREF

  v3 = *(float *)(this + 116) - *(float *)(dword_520970 + 68);
  *(float *)(this + 116) = v3;
  if ( v3 < 0.0 )
  {
    v4 = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 116) = 0x40000000;
    strcpy(v12, *(const char **)(this + 4 * *(_DWORD *)(v4 + 124) + 48));
    v5 = sub_40FD50((struct _RTL_CRITICAL_SECTION *)dword_4F5CC4, (char **)(this + 48), 16);
    v6 = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 112) = v5;
    v7 = 0;
    *(_DWORD *)(v6 + 132) = v5;
    v11 = 0;
    *(_BYTE *)(*(_DWORD *)(this + 44) + 136) = 1;
    v8 = *(_DWORD *)(this + 112);
    if ( v8 > 0 )
    {
      v10 = (const char **)(this + 48);
      do
      {
        if ( !strcmp(*v10, v12) )
          v11 = v7;
        ++v7;
        ++v10;
      }
      while ( v7 < v8 );
    }
    *(_DWORD *)(*(_DWORD *)(this + 44) + 124) = v11;
  }
  return sub_428620((_DWORD *)this, a2);
}
