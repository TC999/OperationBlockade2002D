//----- (0047D552) --------------------------------------------------------
int __cdecl sub_47D552(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // eax
  int v3; // ebx
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // ecx
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  int v8; // ebx
  unsigned __int8 *v9; // ecx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // ecx
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // ecx
  unsigned __int8 *v24; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // ecx
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // ecx
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // ecx
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // eax
  unsigned __int8 *v36; // ecx
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // eax
  int v40; // [esp+18h] [ebp+Ch]

  if ( !a1 )
    return -2;
  v2 = a1[7];
  if ( !v2 || !*a1 )
    return -2;
  v3 = -5;
  if ( a2 == 4 )
    v40 = -5;
  else
    v40 = 0;
  while ( 1 )
  {
    switch ( *(_DWORD *)v2 )
    {
      case 0:
        v4 = a1[1];
        if ( !v4 )
          return v3;
        v5 = a1[7];
        v3 = v40;
        ++a1[2];
        a1[1] = v4 - 1;
        *((_DWORD *)v5 + 1) = **a1;
        v6 = a1[7];
        ++*a1;
        if ( (*((_DWORD *)v6 + 1) & 0xF) == 8 )
        {
          if ( (unsigned int)((*((_DWORD *)v6 + 1) >> 4) + 8) <= *((_DWORD *)v6 + 4) )
          {
            *(_DWORD *)v6 = 1;
LABEL_14:
            v7 = a1[1];
            if ( !v7 )
              return v3;
            ++a1[2];
            a1[1] = v7 - 1;
            v8 = *(*a1)++;
            v9 = a1[7];
            if ( !((v8 + (*((_DWORD *)v9 + 1) << 8)) % 0x1Fu) )
            {
              v10 = (v8 & 0x20) == 0;
              v3 = v40;
              if ( v10 )
              {
                *(_DWORD *)v9 = 7;
                goto LABEL_37;
              }
              *(_DWORD *)a1[7] = 2;
LABEL_42:
              v26 = a1[1];
              if ( !v26 )
                return v3;
              v27 = a1[7];
              v3 = v40;
              ++a1[2];
              a1[1] = v26 - 1;
              *((_DWORD *)v27 + 2) = **a1 << 24;
              v28 = a1[7];
              ++*a1;
              *(_DWORD *)v28 = 3;
LABEL_44:
              v29 = a1[1];
              if ( !v29 )
                return v3;
              v30 = *a1;
              v3 = v40;
              ++a1[2];
              a1[1] = v29 - 1;
              *((_DWORD *)a1[7] + 2) += *v30 << 16;
              v31 = a1[7];
              ++*a1;
              *(_DWORD *)v31 = 4;
LABEL_46:
              v32 = a1[1];
              if ( !v32 )
                return v3;
              v33 = *a1;
              v3 = v40;
              ++a1[2];
              a1[1] = v32 - 1;
              *((_DWORD *)a1[7] + 2) += *v33 << 8;
              v34 = a1[7];
              ++*a1;
              *(_DWORD *)v34 = 5;
LABEL_48:
              v35 = a1[1];
              if ( !v35 )
                return v3;
              v36 = *a1;
              ++a1[2];
              a1[1] = v35 - 1;
              *((_DWORD *)a1[7] + 2) += *v36;
              v37 = a1[7];
              ++*a1;
              a1[12] = (unsigned __int8 *)*((_DWORD *)v37 + 2);
              *(_DWORD *)v37 = 6;
              return 2;
            }
            v3 = v40;
            *(_DWORD *)v9 = 13;
            a1[6] = (unsigned __int8*)"incorrect header check";
          }
          else
          {
            *(_DWORD *)v6 = 13;
            a1[6] = (unsigned __int8*)"invalid window size";
          }
        }
        else
        {
          *(_DWORD *)v6 = 13;
          a1[6] = (unsigned __int8*)"unknown compression method";
        }
LABEL_36:
        *((_DWORD *)a1[7] + 1) = 5;
LABEL_37:
        v2 = a1[7];
        break;
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_42;
      case 3:
        goto LABEL_44;
      case 4:
        goto LABEL_46;
      case 5:
        goto LABEL_48;
      case 6:
        *(_DWORD *)a1[7] = 13;
        v38 = a1[7];
        a1[6] = (unsigned __int8*)"need dictionary";
        *((_DWORD *)v38 + 1) = 0;
        return -2;
      case 7:
        v11 = sub_4847CB((int*)*((_DWORD *)a1[7] + 5), (int*)a1, v3);
        v3 = v11;
        if ( v11 == -3 )
        {
          *(_DWORD *)a1[7] = 13;
          *((_DWORD *)a1[7] + 1) = 0;
          goto LABEL_37;
        }
        if ( !v11 )
          v3 = v40;
        if ( v3 != 1 )
          return v3;
        v3 = v40;
        sub_4846D1((uint32*)*((_DWORD *)a1[7] + 5), (int)a1, (uint32*)(a1[7] + 4));
        v12 = a1[7];
        if ( *((_DWORD *)v12 + 3) )
        {
          *(_DWORD *)v12 = 12;
          goto LABEL_37;
        }
        *(_DWORD *)v12 = 8;
LABEL_27:
        v13 = a1[1];
        if ( !v13 )
          return v3;
        v14 = a1[7];
        v3 = v40;
        ++a1[2];
        a1[1] = v13 - 1;
        *((_DWORD *)v14 + 2) = **a1 << 24;
        v15 = a1[7];
        ++*a1;
        *(_DWORD *)v15 = 9;
LABEL_29:
        v16 = a1[1];
        if ( !v16 )
          return v3;
        v17 = *a1;
        v3 = v40;
        ++a1[2];
        a1[1] = v16 - 1;
        *((_DWORD *)a1[7] + 2) += *v17 << 16;
        v18 = a1[7];
        ++*a1;
        *(_DWORD *)v18 = 10;
LABEL_31:
        v19 = a1[1];
        if ( !v19 )
          return v3;
        v20 = *a1;
        v3 = v40;
        ++a1[2];
        a1[1] = v19 - 1;
        *((_DWORD *)a1[7] + 2) += *v20 << 8;
        v21 = a1[7];
        ++*a1;
        *(_DWORD *)v21 = 11;
LABEL_33:
        v22 = a1[1];
        if ( !v22 )
          return v3;
        v23 = *a1;
        v3 = v40;
        ++a1[2];
        a1[1] = v22 - 1;
        *((_DWORD *)a1[7] + 2) += *v23;
        v24 = a1[7];
        ++*a1;
        if ( *((_DWORD *)v24 + 1) != *((_DWORD *)v24 + 2) )
        {
          *(_DWORD *)v24 = 13;
          a1[6] = (unsigned __int8*)"incorrect data check";
          goto LABEL_36;
        }
        *(_DWORD *)a1[7] = 12;
        return 1;
      case 8:
        goto LABEL_27;
      case 9:
        goto LABEL_29;
      case 0xA:
        goto LABEL_31;
      case 0xB:
        goto LABEL_33;
      case 0xC:
        return 1;
      case 0xD:
        return -3;
      default:
        return -2;
    }
  }
}
