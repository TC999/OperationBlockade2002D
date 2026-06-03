//----- (00422080) --------------------------------------------------------
int __cdecl sub_422080(char *FileName, _DWORD *Buffer)
{
  _BYTE *v2; // esi
  _DWORD *v3; // ecx
  const char *v4; // edx
  FILE *v5; // eax
  FILE *v6; // edi
  void *v8; // esi

  v2 = (_BYTE *)Buffer;
  v3 = Buffer;
  v4 = FileName;
  *Buffer = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v5 = fopen(v4, (const char *)Mode);
  v6 = v5;
  if ( !v5 )
    return -1;
  sub_4898CA(&FileName, 1u, 1u, v5);
  sub_4898CA(&Buffer, 1u, 1u, v6);
  if ( (_BYTE)Buffer )
    v2[2] = 1;
  else
    v2[2] = 0;
  sub_4898CA(v2, 1u, 1u, v6);
  v2[1] = *v2 && *v2 <= 3u;
  sub_4898CA(v2 + 8, 2u, 1u, v6);
  sub_4898CA(v2 + 10, 2u, 1u, v6);
  sub_4898CA(v2 + 12, 1u, 1u, v6);
  sub_4898CA(v2 + 4, 2u, 1u, v6);
  sub_4898CA(v2 + 6, 2u, 1u, v6);
  sub_4898CA(v2 + 14, 2u, 1u, v6);
  sub_4898CA(v2 + 16, 2u, 1u, v6);
  sub_4898CA(v2 + 18, 1u, 1u, v6);
  if ( v2[2] )
    v2[18] = 8;
  sub_4898CA(&Buffer, 1u, 1u, v6);
  v8 = operator new((unsigned __int8)(int)FileName + 1);
  sub_4898CA(v8, (unsigned __int8)(int)FileName, 1u, v6);
  sub_4885A6(v8);
  fclose(v6);
  return 1;
}
