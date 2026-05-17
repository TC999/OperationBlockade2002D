//----- (004033A0) --------------------------------------------------------
int __thiscall sub_4033A0(int this)
{
  char *v2; // ebp
  _DWORD *v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // ecx
  char ArgList[4]; // [esp+8h] [ebp-174h] BYREF
  int v21; // [esp+Ch] [ebp-170h]
  char Buffer[64]; // [esp+10h] [ebp-16Ch] BYREF
  char v23[288]; // [esp+50h] [ebp-12Ch] BYREF
  int v24; // [esp+178h] [ebp-4h]

  sub_40A1D0(aDialogueIni);
  v2 = 0;
  v24 = 0;
  if ( (unsigned __int8)sub_40AAF0(aDialoguegroup, 0) )
  {
    while ( 1 )
    {
      v3 = operator new(0x50u);
      if ( v3 )
      {
        v3[16] = 0;
        v3[17] = 0;
        v3[18] = 0;
        *((_BYTE *)v3 + 76) = 0;
        v2 = (char *)v3;
      }
      sub_40AA40(aDialoguegroup);
      sub_40AFC0(aName, (int)ArgList);
      sub_4229D0(aLoadingDialogu, ArgList[0]);
      v4 = strlen(*(const char **)ArgList) + 1;
      v5 = *(_DWORD *)ArgList + v4;
      v21 = 1;
      qmemcpy(v2, *(const void **)ArgList, 4 * (v4 >> 2));
      qmemcpy(&v2[4 * (v4 >> 2)], (const void *)(v5 - v4 + 4 * (v4 >> 2)), v4 & 3);
      while ( 1 )
      {
        sprintf(Buffer, "Sound%d", v21);
        if ( !(unsigned __int8)sub_40ABC0(Buffer, 0) )
          break;
        sub_40AFC0(Buffer, (int)ArgList);
        sub_4229D0(aLoadingDialogu_0, ArgList[0]);
        v6 = sub_41E250(*(char **)ArgList);
        if ( !v6 )
        {
          v6 = sub_41DE10(*(char **)ArgList, 1, 0, 0, 1, 0);
          sub_4282E0(v6 != 0, aCouldnTLoadDia, ArgList[0]);
        }
        v7 = *((_DWORD *)v2 + 18);
        v8 = *((_DWORD *)v2 + 17) + 1;
        *((_DWORD *)v2 + 17) = v8;
        if ( v8 > v7 )
        {
          v9 = v7 + 8;
          *((_DWORD *)v2 + 18) = v9;
          v10 = sub_488DD7(*((LPVOID *)v2 + 16), 4 * v9);
          if ( v10 )
          {
            v11 = *((_DWORD *)v2 + 17);
            v12 = *((_DWORD *)v2 + 18) - v11;
            *((_DWORD *)v2 + 16) = v10;
            memset((void *)(v10 + 4 * v11), 0, 4 * v12);
          }
        }
        *(_DWORD *)(*((_DWORD *)v2 + 16) + 4 * *((_DWORD *)v2 + 17) - 4) = v6;
        ++v21;
      }
      v13 = *(_DWORD *)(this + 28);
      v14 = *(_DWORD *)(this + 24) + 1;
      *(_DWORD *)(this + 24) = v14;
      if ( v14 > v13 )
      {
        v15 = v13 + 8;
        *(_DWORD *)(this + 28) = v15;
        v16 = sub_488DD7(*(LPVOID *)(this + 20), 4 * v15);
        if ( v16 )
        {
          v17 = *(_DWORD *)(this + 24);
          v18 = *(_DWORD *)(this + 28) - v17;
          *(_DWORD *)(this + 20) = v16;
          memset((void *)(v16 + 4 * v17), 0, 4 * v18);
        }
      }
      *(_DWORD *)(*(_DWORD *)(this + 20) + 4 * *(_DWORD *)(this + 24) - 4) = v2;
      if ( !(unsigned __int8)sub_40AAF0(aDialoguegroup, 0) )
        break;
      v2 = 0;
    }
  }
  v24 = -1;
  return sub_40A830(v23);
}
