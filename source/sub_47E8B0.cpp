//----- (0047E8B0) --------------------------------------------------------
void __cdecl sub_47E8B0(jmp_buf Buf, int a2, size_t Size)
{
  int v3; // eax
  char v4; // al
  void *v5; // eax
  __int16 v6; // cx
  __int16 v7; // ax
  __int16 v8; // cx
  unsigned __int8 v9; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int8 v10; // [esp+Dh] [ebp-7h]
  unsigned __int8 v11; // [esp+Eh] [ebp-6h]
  unsigned __int8 v12; // [esp+Fh] [ebp-5h]
  unsigned __int8 v13; // [esp+10h] [ebp-4h]
  unsigned __int8 v14; // [esp+11h] [ebp-3h]

  v3 = Buf[22];
  if ( (v3 & 1) == 0 )
    sub_478AEB(Buf, (int)"Missing IHDR before tRNS");
  if ( (v3 & 4) != 0 )
  {
    sub_478B0A((int)Buf, (int)"Invalid tRNS after IDAT");
LABEL_27:
    sub_47E2BE(Buf, Size);
    return;
  }
  if ( a2 && (*(_BYTE *)(a2 + 8) & 0x10) != 0 )
  {
    sub_478B0A((int)Buf, (int)"Duplicate tRNS chunk");
    goto LABEL_27;
  }
  v4 = *((_BYTE *)Buf + 278);
  if ( v4 == 3 )
  {
    if ( (Buf[22] & 2) != 0 )
    {
      if ( Size > *((unsigned __int16 *)Buf + 132) )
      {
        sub_478B0A((int)Buf, (int)"Incorrect tRNS chunk length");
        sub_47E2BE(Buf, Size);
        return;
      }
    }
    else
    {
      sub_478B0A((int)Buf, (int)"Missing PLTE before tRNS");
    }
    if ( !Size )
    {
      sub_478B0A((int)Buf, (int)"Zero length tRNS chunk");
      sub_47E2BE(Buf, 0);
      return;
    }
    v5 = sub_47D91C(Buf, Size);
    *((_BYTE *)Buf + 93) |= 0x20u;
    Buf[87] = (int)v5;
    sub_47D9E9(Buf, (int)v5, Size);
    *((_WORD *)Buf + 133) = Size;
    goto LABEL_24;
  }
  if ( v4 != 2 )
  {
    if ( v4 )
    {
      sub_478B0A((int)Buf, (int)"tRNS chunk not allowed with alpha channel");
      goto LABEL_27;
    }
    if ( Size == 2 )
    {
      sub_47D9E9(Buf, (int)&v9, 2);
      *((_WORD *)Buf + 180) = v10 + (v9 << 8);
      goto LABEL_23;
    }
LABEL_21:
    sub_478B0A((int)Buf, (int)"Incorrect tRNS chunk length");
    goto LABEL_27;
  }
  if ( Size != 6 )
    goto LABEL_21;
  sub_47D9E9(Buf, (int)&v9, 6);
  v6 = v12;
  *((_WORD *)Buf + 177) = v10 + (v9 << 8);
  v7 = v6 + (v11 << 8);
  v8 = v14;
  *((_WORD *)Buf + 178) = v7;
  *((_WORD *)Buf + 179) = v8 + (v13 << 8);
LABEL_23:
  *((_WORD *)Buf + 133) = 1;
LABEL_24:
  if ( !sub_47E2BE(Buf, 0) )
    sub_47ADDF((int)Buf, a2, Buf[87], *((unsigned __int16 *)Buf + 133), (int)(Buf + 88));
}
