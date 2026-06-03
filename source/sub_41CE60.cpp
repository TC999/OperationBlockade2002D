//----- (0041CE60) --------------------------------------------------------
char __cdecl sub_41CE60(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  char v3; // dl
  char *v4; // edi
  int v5; // eax
  unsigned int v6; // ecx
  char *v8; // [esp+30h] [ebp-1Ch] BYREF
  char v9[4]; // [esp+34h] [ebp-18h] BYREF
  char v10[14]; // [esp+38h] [ebp-14h] BYREF
  __int16 v11; // [esp+46h] [ebp-6h]

  v2 = a2;
  if ( (*(int (__stdcall **)(unsigned int, char *, int, char *))(*(_DWORD *)a2 + 20))(a2, v10, 18, v9) < 0
    || (*(int (__stdcall **)(unsigned int, _DWORD, _DWORD, char **, unsigned int *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 44))(
         v2,
         0,
         0,
         &v8,
         &a2,
         0,
         0,
         2) < 0 )
  {
    return 0;
  }
  v3 = a2;
  v4 = v8;
  a1 = v11 != 8 ? 0 : 0x80;
  BYTE1(a1) = (_BYTE)a1;
  v5 = a1 << 16;
  WORDn(v5, 0) = (_WORD)a1;
  v6 = a2 >> 2;
  memset32(v8, v5, a2 >> 2);
  memset(&v4[4 * v6], a1, v3 & 3);
  (*(void (__stdcall **)(unsigned int, char *, unsigned int, _DWORD, _DWORD))(*(_DWORD *)v2 + 76))(v2, v8, a2, 0, 0);
  return 1;
}
