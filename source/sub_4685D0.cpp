//----- (004685D0) --------------------------------------------------------
void __cdecl sub_4685D0(int a1, int a2, char *String2, int a4, float a5, float a6, float a7)
{
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  char *v12; // ecx
  float v13; // edx
  float *v14; // eax
  long double v15; // st6
  long double v16; // st7
  long double v17; // st7
  float v19; // [esp+18h] [ebp-10h]
  float v20; // [esp+20h] [ebp-8h] BYREF
  char *v21; // [esp+24h] [ebp-4h]
  char *retaddr; // [esp+28h] [ebp+0h]

  v8 = 0;
  v19 = 0.0;
  if ( *(int *)(a1 + 8) > 0 )
  {
    do
    {
      v9 = *(_DWORD *)(a1 + 4) + v8;
      if ( *(_BYTE *)(v9 + 81) && !_strnicmp(*(const char **)(v9 + 8), String2, strlen(String2)) )
      {
        v10 = *(_DWORD *)(v9 + 36);
        v11 = 0;
        v21 = 0;
        (*(void (__stdcall **)(int, _DWORD, _DWORD, float *, _DWORD, int))(*(_DWORD *)v10 + 44))(v10, 0, 0, &v20, 0, a2);
        v12 = v21;
        retaddr = v21;
        if ( *(int *)(v9 + 40) > 0 )
        {
          v13 = v20;
          do
          {
            v14 = (float *)&v12[*(_DWORD *)(LODWORD(v13) + 24)];
            v19 = v14[1];
            if ( a7 == 0.0 )
              v15 = 0.0;
            else
              v15 = (v19 * 3.1415927 + a5) / a7;
            v16 = *v14 + (sin(v15) * 0.30000001 + 0.69999999) * a6;
            *(float *)&v12[*(_DWORD *)(LODWORD(v13) + 20)] = v16;
            if ( a7 == 0.0 )
              v17 = 0.0;
            else
              v17 = (v16 * 3.1415927 + a5 * 1.23) / a7;
            *(float *)&retaddr[*(_DWORD *)(LODWORD(v20) + 20) + 4] = (cos(v17 * 0.86) * 0.30000001 + 0.69999999) * a6
                                                                   + v19;
            v13 = v20;
            v12 = &retaddr[*(_DWORD *)(LODWORD(v20) + 84)];
            ++v11;
            retaddr = v12;
          }
          while ( v11 < *(_DWORD *)(v9 + 40) );
        }
        a2 = *(_DWORD *)(v9 + 36);
        (*(void (**)(void))(*(_DWORD *)a2 + 48))();
      }
      v8 += 172;
      ++LODWORD(v19);
    }
    while ( SLODWORD(v19) < *(_DWORD *)(a1 + 8) );
  }
}
