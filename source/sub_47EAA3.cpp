//----- (0047EAA3) --------------------------------------------------------
int __cdecl sub_47EAA3(int a1, jmp_buf Buf)
{
  int *v2; // esi
  int result; // eax
  unsigned __int8 v4; // bl
  unsigned int v5; // edx
  bool v6; // zf
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  const char *v11; // eax
  int v12; // [esp+4h] [ebp-4h] BYREF

  v2 = (int *)Buf;
  result = (int)((int *)Buf + 53);
  ++((int *)Buf)[53];
  if ( *(_DWORD *)result >= (unsigned int)v2[48] )
  {
    if ( *((_BYTE *)v2 + 275) )
    {
      *(_DWORD *)result = 0;
      sub_47D991(a1, (int)v2, (char *)v2[54], 0, v2[50] + 1);
      while ( 1 )
      {
        v4 = ++*((_BYTE *)v2 + 276);
        if ( v4 >= 7u )
          break;
        result = (v2[46] - ((int*)&dword_49C320)[v4] + ((int*)&dword_49C33C)[v4] - 1) / (unsigned int)((int*)&dword_49C33C)[v4];
        v5 = ((result * (unsigned int)*((unsigned __int8 *)v2 + 281) + 7) >> 3) + 1;
        v6 = (v2[24] & 2) == 0;
        v2[52] = result;
        v2[51] = v5;
        if ( v6 )
        {
          result = (v2[47] - ((int*)&dword_49C358)[v4] + ((int*)&dword_49C374)[v4] - 1) / (unsigned int)((int*)&dword_49C374)[v4];
          v6 = v2[52] == 0;
          v2[48] = result;
          if ( v6 )
            continue;
        }
        return result;
      }
    }
    if ( (v2[23] & 0x20) == 0 )
    {
      v2[28] = (int)&Buf + 3;
      v2[29] = 1;
      while ( 1 )
      {
        if ( !v2[26] )
        {
          while ( !v2[63] )
          {
            sub_47E2BE(Buf, 0);
            sub_47AE26(Buf, (int)&v12, 4);
            v2[63] = sub_47D9C3((unsigned __int8 *)&v12);
            sub_47AF37((int)v2);
            sub_47D9E9((int)v2, (int)(v2 + 67), 4);
            if ( v2[67] != *(_DWORD *)"IDAT" )
              sub_478AEB(Buf, (int)"Not enough image data");
          }
          v7 = v2[40];
          v8 = v2[63];
          v9 = v2[39];
          v2[26] = v7;
          v2[25] = v9;
          if ( v7 > v8 )
            v2[26] = v8;
          sub_47D9E9((int)v2, v9, v2[26]);
          v2[63] -= v2[26];
        }
        v10 = sub_47D552((unsigned __int8 **)v2 + 25, 1);
        if ( v10 == 1 )
          break;
        if ( v10 )
        {
          v11 = (const char *)v2[31];
          if ( !v11 )
            v11 = "Decompression Error";
          sub_478AEB(Buf, (int)v11);
        }
        if ( !v2[29] )
          sub_478AEB(Buf, (int)"Extra compressed data");
      }
      if ( !v2[29] || v2[26] || v2[63] )
        sub_478AEB(Buf, (int)"Extra compressed data");
      v2[22] |= 8u;
      v2[23] |= 0x20u;
      v2[29] = 0;
    }
    if ( v2[63] || v2[26] )
      sub_478AEB(Buf, (int)"Extra compression data");
    result = sub_47D3D1((uint32*)(v2 + 25));
    v2[22] |= 8u;
  }
  return result;
}
