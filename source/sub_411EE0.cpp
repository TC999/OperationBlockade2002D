//----- (00411EE0) --------------------------------------------------------
int __cdecl sub_411EE0(int a1, char a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  signed int i; // esi
  char *v7; // ebx
  char *v8; // eax
  int v9; // edi
  bool v10; // cc
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int result; // eax

  if ( !*(_BYTE *)(a1 + 988) )
  {
    *(_BYTE *)(a1 + 988) = 1;
    sub_4229D0(aCheckingFileCh, a2);
    *(_DWORD *)(a1 + 996) = -1;
    *(_DWORD *)(a1 + 992) = 0;
    *(_DWORD *)(a1 + 1000) = 0;
    if ( byte_4F5CB4 )
    {
      for ( i = 0; i < (int)NumOfElements; ++i )
        sub_4885A6(*((LPVOID *)Base + i));
    }
    memset(Base, 0, 4 * NumOfElements);
    NumOfElements = 0;
    sub_488CEE(Base);
    dword_4F5CB0 = 0;
    Base = 0;
    sub_412140(".\\", aIni);
    sub_412140(".\\", aPf3);
    qsort(Base, NumOfElements, 4u, sub_412120);
    v7 = (char *)operator new(0x108u);
    strcpy(v7, *(const char **)dword_522340);
    *((_DWORD *)v7 + 65) = 0;
    if ( (int)++NumOfElements > dword_4F5CB0 )
    {
      dword_4F5CB0 += 8;
      v8 = (char *)sub_488DD7(Base, 4 * dword_4F5CB0);
      if ( v8 )
      {
        Base = v8;
        memset(&v8[4 * NumOfElements], 0, 4 * (dword_4F5CB0 - NumOfElements));
      }
    }
    v9 = 0;
    *((_DWORD *)Base + NumOfElements - 1) = v7;
    v10 = (int)NumOfElements <= 0;
    *(_DWORD *)(a1 + 992) = NumOfElements;
    if ( !v10 )
    {
      do
      {
        v11 = *((_DWORD *)Base + v9);
        v12 = sub_423340((char *)v11, *(_DWORD *)(a1 + 996));
        *(_DWORD *)(a1 + 996) = v12;
        sub_4229D0(a0x08xS, v12);
        v13 = *(_DWORD *)(a1 + 992);
        ++v9;
        *(_DWORD *)(a1 + 1000) += *(_DWORD *)(v11 + 260);
      }
      while ( v9 < v13 );
    }
  }
  sub_4229D0(aChecksumDFiles, *(_DWORD *)(a1 + 992));
  *a3 = *(_DWORD *)(a1 + 992);
  *a4 = *(_DWORD *)(a1 + 996);
  result = *(_DWORD *)(a1 + 1000);
  *a5 = result;
  return result;
}
