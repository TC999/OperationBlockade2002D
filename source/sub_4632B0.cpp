//----- (004632B0) --------------------------------------------------------
char __thiscall sub_4632B0(int self, int ArgList)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  _BYTE *v16; // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // ebx
  char *v27; // edx
  int v28; // eax
  const char *v30; // [esp-8h] [ebp-20h]
  int v31; // [esp-4h] [ebp-1Ch]
  int i; // [esp+10h] [ebp-8h]
  int ArgListb; // [esp+1Ch] [ebp+4h]
  int ArgLista; // [esp+1Ch] [ebp+4h]

  v3 = *(unsigned __int16 *)(ArgList + 12);
  v4 = *(_DWORD *)(ArgList + 16);
  if ( (unsigned __int16)v3 > 0x605u )
  {
    v22 = v3 - 65281;
    if ( v22 )
    {
      v7 = v22 - 1;
      if ( !v7 )
      {
        v23 = *(_DWORD *)(self + 520);
        v24 = 0;
        if ( v23 > 0 )
        {
          v7 = self + 888;
          while ( *(_DWORD *)v7 != *(_DWORD *)(*(_DWORD *)(v4 + 6) + 8) )
          {
            ++v24;
            v7 += 352;
            if ( v24 >= v23 )
              return v7;
          }
          if ( v24 > -1 )
          {
            v25 = 352 * v24 + self;
            *(_BYTE *)(v25 + 898) = 0;
            LOBYTE(v7) = *(_BYTE *)(dword_4F5CC4 + 936);
            if ( (_BYTE)v7 )
            {
              sub_4229D0("Deleting player '%s'", (const char *)(v25 + 899));
              v26 = v24;
              if ( v24 < *(_DWORD *)(self + 520) - 1 )
              {
                v27 = (char *)(v25 + 1232);
                do
                {
                  qmemcpy(v27 - 352, v27, 0x160u);
                  memset(v27, 0, 0x160u);
                  ++v26;
                  v27 += 352;
                }
                while ( v26 < *(_DWORD *)(self + 520) - 1 );
              }
              --*(_DWORD *)(self + 520);
              LOBYTE(v7) = sub_463180((_BYTE *)self);
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v7) = *(_BYTE *)(dword_4F5CC4 + 936);
      if ( (_BYTE)v7 )
      {
        v28 = *(_DWORD *)(self + 520);
        *(_DWORD *)(self + 520) = v28 + 1;
        *(_DWORD *)(352 * v28 + self + 888) = *(_DWORD *)(*(_DWORD *)(v4 + 6) + 8);
        strcpy((char *)(352 * v28 + self + 899), (const char *)(*(_DWORD *)(v4 + 6) + 12));
        *(_DWORD *)(352 * v28 + self + 924) = 0;
        *(_DWORD *)(352 * v28 + self + 928) = 0;
        *(_DWORD *)(352 * v28 + self + 1228) = 0;
        sub_4621B0((int *)self);
        LOBYTE(v7) = sub_463180((_BYTE *)self);
      }
    }
  }
  else if ( (unsigned __int16)v3 == 1541 )
  {
    LOBYTE(v7) = *(_BYTE *)(dword_4F5CC4 + 937);
    if ( (_BYTE)v7 )
      LOBYTE(v7) = sub_462520(
                     (_DWORD *)self,
                     *(_DWORD *)(*(_DWORD *)(self + 11780) + 4 * *(unsigned __int8 *)(v4 + 6)),
                     0);
  }
  else
  {
    v5 = v3 - 1537;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
        {
          v7 = sub_45E6F0((_DWORD *)self, *(_DWORD *)(ArgList + 4));
          if ( v7 > -1 )
          {
            v30 = (const char *)(352 * v7 + self + 899);
            v8 = sub_436A90(*(_DWORD *)(dword_520970 + 224));
            LOBYTE(v7) = sub_421190(v8, "%s: %s", v30, (const char *)(v4 + 6));
          }
        }
      }
      else
      {
        v7 = *(_DWORD *)(v4 + 6);
        if ( v7 >= 0 )
        {
          v9 = 352 * v7 + self + 880;
          v31 = *(_DWORD *)(v4 + 14);
          *(_DWORD *)(v9 + 348) = v31;
          v10 = *(_DWORD *)(352 * v7 + self + 884);
          ArgListb = *(int *)(v4 + 10);
          *(float *)(v9 + 48) = *(float *)&ArgListb;
          LOBYTE(v7) = sub_436EC0(*(_DWORD **)(dword_520970 + 224), v10, ArgListb, v31);
          v11 = *(_DWORD *)v9;
          if ( *(int *)v9 > -1 )
          {
            v7 = self + 4 * (v11 + 4 * (3 * v11 + 135) + 45);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 40) = *(_DWORD *)(self + 52 * v11 + 2372);
              v12 = *(_DWORD *)(v7 + 36);
              *(_DWORD *)(v7 + 44) = *(_DWORD *)(self + 52 * *(_DWORD *)v9 + 2368);
              *(_DWORD *)(v7 + 48) = v12;
              *(_DWORD *)(v7 + 32) = *(_DWORD *)(v4 + 18);
              *(_DWORD *)(v7 + 28) = *(_DWORD *)(v4 + 22);
              *(_DWORD *)(v7 + 36) = 0;
            }
          }
        }
      }
    }
    else
    {
      v13 = *(_DWORD *)(self + 524);
      *(_DWORD *)(self + 512) = -1;
      *(_DWORD *)(self + 516) = -1;
      *(_DWORD *)(self + 520) = *(char *)(v4 + 6);
      *(_BYTE *)(self + 472) = 0;
      v14 = *(unsigned __int8 *)(v4 + 7);
      if ( v13 != (char)v14 )
      {
        if ( (_BYTE)v14 )
          sub_45EA80(self, (char)v14);
        else
          sub_462F90((_DWORD *)self);
      }
      ArgLista = 0;
      if ( *(char *)(v4 + 6) > 0 )
      {
        v15 = v4 + 36;
        v16 = (_BYTE *)(self + 896);
        for ( i = v4 + 36; ; v15 = i )
        {
          v17 = *(_DWORD *)(v15 - 28);
          *((_DWORD *)v16 - 2) = v17;
          if ( v17 == *(_DWORD *)(dword_4F5CC4 + 84) )
          {
            *(_DWORD *)(self + 512) = ArgLista;
            *(_DWORD *)(self + 516) = *(char *)(v15 + 2);
          }
          *v16 = *(_BYTE *)v15;
          v16[2] = *(_BYTE *)(v15 + 1);
          *((_DWORD *)v16 - 1) = *(_DWORD *)(v15 + 3);
          strcpy(v16 + 3, (const char *)(v15 - 24));
          sub_4229D0("%d: %s", ArgLista, v16 + 3);
          v18 = ArgLista;
          *((_DWORD *)v16 - 3) = ArgLista;
          v19 = *(char *)(i + 2);
          *((_DWORD *)v16 - 4) = v19;
          if ( v19 > -1 )
            *(_DWORD *)(self + 4 * (v19 + 4 * (3 * v19 + 135) + 45)) = ArgLista;
          v16 += 352;
          ++ArgLista;
          i += 35;
          if ( v18 + 1 >= *(char *)(v4 + 6) )
            break;
        }
      }
      sub_436E20(*(_DWORD *)(dword_520970 + 224));
      v7 = *(_DWORD *)(self + 520);
      v20 = 0;
      if ( v7 > 0 )
      {
        v21 = self + 884;
        do
        {
          *(_DWORD *)v21 = sub_436E40(*(char **)(dword_520970 + 224), (const char *)(v21 + 15));
          v7 = *(_DWORD *)(self + 520);
          ++v20;
          v21 += 352;
        }
        while ( v20 < v7 );
      }
    }
  }
  return v7;
}
