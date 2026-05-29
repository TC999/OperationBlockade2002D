//----- (0043EB00) --------------------------------------------------------
char __thiscall sub_43EB00(int self, int a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  const char *v6; // esi
  const char *v7; // eax
  const char *v8; // esi
  const char *v9; // eax
  unsigned int v10; // edx
  char *v11; // edi
  char *v12; // esi
  char v13; // cl
  unsigned int v14; // eax
  const char *v15; // edi
  unsigned int v16; // edx
  char *v17; // edi
  char *v18; // esi
  char v19; // cl
  unsigned int v20; // eax
  int v22; // [esp+10h] [ebp-114h] BYREF
  char ArgList[4]; // [esp+14h] [ebp-110h] BYREF
  int v24; // [esp+18h] [ebp-10Ch] BYREF
  _WORD v25[3]; // [esp+1Ch] [ebp-108h] BYREF
  char v26[26]; // [esp+22h] [ebp-102h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 16);
  if ( (unsigned __int16)v3 > 0xFF01u )
  {
    if ( v3 == 65283 )
    {
      sub_411C50(dword_4F5CC4);
      sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
      sub_45ECB0(*(_DWORD *)(dword_520970 + 280));
      if ( byte_521684 )
      {
        v16 = strlen(aIpx) + 1;
        qmemcpy(byte_520D40, aIpx, 4 * (v16 >> 2));
        v18 = &aIpx[4 * (v16 >> 2)];
        v17 = &byte_520D40[4 * (v16 >> 2)];
        v19 = v16;
      }
      else
      {
        v20 = strlen(aTcpip_0) + 1;
        qmemcpy(byte_520D40, aTcpip_0, 4 * (v20 >> 2));
        v18 = &aTcpip_0[4 * (v20 >> 2)];
        v17 = &byte_520D40[4 * (v20 >> 2)];
        v19 = v20;
      }
      qmemcpy(v17, v18, v19 & 3);
      strcpy(byte_520D80, aHostLeftTheGam);
      v15 = AppName;
LABEL_34:
      strcpy(byte_521180, v15);
      LOBYTE(v3) = sub_4261C0(*(_DWORD **)(self + 40), aErrormsg, 0);
    }
  }
  else if ( (unsigned __int16)v3 == 65281 )
  {
    LOBYTE(v3) = *(_BYTE *)(dword_4F5CC4 + 936);
    if ( (_BYTE)v3 )
    {
      v3 = *(_DWORD *)(v4 + 6);
      if ( v3 )
        LOBYTE(v3) = sub_43E0C0((_DWORD *)self);
    }
  }
  else
  {
    v3 -= 1025;
    switch ( v3 )
    {
      case 0:
        v3 = sub_45E6F0(*(_DWORD *)(a2 + 4));
        if ( v3 > -1 )
          LOBYTE(v3) = sub_43EA00(
                         (_DWORD *)self,
                         (const char *)(v4 + 6),
                         *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 352 * v3 + 892),
                         *(_DWORD *)(a2 + 4),
                         1);
        break;
      case 1:
        LOBYTE(v3) = *(_BYTE *)(dword_4F5CC4 + 936);
        if ( !(_BYTE)v3 )
        {
          *(_DWORD *)(self + 100) = *(_DWORD *)(v4 + 6);
          *(_DWORD *)(self + 104) = *(_DWORD *)(v4 + 10);
          *(_DWORD *)(self + 108) = *(_DWORD *)(v4 + 14);
          v6 = sub_424350((_DWORD *)self, aMonth);
          v7 = (const char *)sub_45A870(*(_DWORD *)(self + 100));
          sub_421110(*((LPVOID **)v6 + 28), v7);
          v8 = sub_424350((_DWORD *)self, aTimeOfDay);
          v9 = (const char *)sub_464800(*(_DWORD *)(self + 104));
          sub_421110(*((LPVOID **)v8 + 28), v9);
          v3 = *(_DWORD *)(self + 108);
          if ( v3 )
          {
            if ( v3 == 1 )
            {
              LOBYTE(v3) = sub_421110(*(LPVOID **)(*(_DWORD *)(self + 88) + 112), aSoldier);
            }
            else if ( v3 == 2 )
            {
              LOBYTE(v3) = sub_421110(*(LPVOID **)(*(_DWORD *)(self + 88) + 112), aVeteran);
            }
          }
          else
          {
            LOBYTE(v3) = sub_421110(*(LPVOID **)(*(_DWORD *)(self + 88) + 112), aRecruit);
          }
        }
        break;
      case 2:
        LOBYTE(v3) = *(_BYTE *)(dword_4F5CC4 + 936);
        if ( (_BYTE)v3 )
        {
          v5 = sub_45E6F0(*(_DWORD *)(a2 + 4));
          if ( v5 > -1 )
            *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 352 * v5 + 896) = *(_BYTE *)(v4 + 6);
          LOBYTE(v3) = sub_463180(*(_DWORD *)(dword_520970 + 280));
        }
        break;
      case 3:
        sub_411C50(dword_4F5CC4);
        sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
        sub_45ECB0(*(_DWORD *)(dword_520970 + 280));
        if ( byte_521684 )
        {
          v10 = strlen(aIpx) + 1;
          qmemcpy(byte_520D40, aIpx, 4 * (v10 >> 2));
          v12 = &aIpx[4 * (v10 >> 2)];
          v11 = &byte_520D40[4 * (v10 >> 2)];
          v13 = v10;
        }
        else
        {
          v14 = strlen(aTcpip_0) + 1;
          qmemcpy(byte_520D40, aTcpip_0, 4 * (v14 >> 2));
          v12 = &aTcpip_0[4 * (v14 >> 2)];
          v11 = &byte_520D40[4 * (v14 >> 2)];
          v13 = v14;
        }
        qmemcpy(v11, v12, v13 & 3);
        strcpy(byte_520D80, aYouVeBeenKicke);
        v15 = (const char *)(v4 + 6);
        goto LABEL_34;
      case 4:
        LOBYTE(v3) = *(_BYTE *)(dword_4F5CC4 + 936);
        if ( (_BYTE)v3 )
        {
          sub_411EE0(dword_4F5CC4, self, ArgList, &v22, &v24);
          v3 = *(_DWORD *)(v4 + 10);
          if ( v3 != v24 || *(_DWORD *)(v4 + 14) != v22 || *(_DWORD *)(v4 + 6) != *(_DWORD *)ArgList )
          {
            sub_4229D0(
              "MP Checksum mismatch: numfiles is %d, should be %d; numbytes is %d, should be %d; checksum is 0x%08x, should be 0x%08x",
              *(_DWORD *)ArgList,
              *(_DWORD *)(v4 + 6),
              v24,
              v3,
              v22,
              *(_DWORD *)(v4 + 14));
            strcpy(v26, aGameDataIsOutO);
            LOBYTE(v3) = sub_411480((_DWORD *)dword_4F5CC4, (_DWORD *)0x404, *(_DWORD *)(a2 + 4), v25, 262, 7, 0);
          }
        }
        break;
      default:
        return v3;
    }
  }
  return v3;
}
