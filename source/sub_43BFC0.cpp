#include "common.h"

extern char aCancelbutton[];
extern char aJoinbutton[];
extern char aCreatebutton[];
extern char aIpx[];
extern char aUnableToHost[];
extern char aErrormsg[];
extern char aUiIpxSuccessHo[];
extern char aStaging[];
extern char aNetnameentry[];
extern char aUnableToConnec[];
extern char aConnecting[];

//----- (0043BFC0) --------------------------------------------------------
char __cdecl sub_43BFC0(int self, char *String1, int a3)
{
  int v4; // eax
  char *v5; // ecx
  char *v7; // [esp-8h] [ebp-134h]
  int v8; // [esp+Ch] [ebp-120h] BYREF
  char *v9; // [esp+10h] [ebp-11Ch]
  int v10; // [esp+14h] [ebp-118h] BYREF
  LPVOID lpMem; // [esp+18h] [ebp-114h]
  char ArgList[260]; // [esp+1Ch] [ebp-110h] BYREF
  int v13; // [esp+128h] [ebp-4h]

  if ( String1 )
  {
    if ( _strcmpi(String1, aCancelbutton) )
    {
      if ( _strcmpi(String1, aJoinbutton) )
      {
        if ( _strcmpi(String1, aCreatebutton) )
          return 1;
        sub_4229D0((char*)"UI IPX: hosting game %s", String);
        sub_4246F0(*(LPVOID ***)(self + 40));
        sub_40FEE0(dword_4F5CC4, (uint32*)&v8);
        v13 = 1;
        if ( v8 )
        {
          sub_4229D0((char*)"UI IPX: unable to host game %s - %s", String, v9);
          strcpy(&byte_520D40, aIpx);
          strcpy(&byte_520D80, aUnableToHost);
          v7 = aErrormsg;
          strcpy(&byte_521180, v9);
        }
        else
        {
          sub_4229D0(aUiIpxSuccessHo);
          *(_BYTE *)(dword_4F5CC4 + 108) = 1;
          v7 = aStaging;
        }
        sub_4261C0(*(_DWORD **)(self + 40), v7, 0);
        v5 = v9;
      }
      else
      {
        sub_4246F0(*(LPVOID ***)(self + 40));
        v4 = *(_DWORD *)(*(_DWORD *)(self + 44) + 124);
        if ( v4 >= *(_DWORD *)(self + 112) )
          return 1;
        strcpy(ArgList, *(const char **)(self + 4 * v4 + 48));
        sub_4229D0((char*)"UI IPX: attempt to join host %s", ArgList);
        sub_40FDD0(dword_4F5CC4, (uint32*)&v10, ArgList);
        v13 = 0;
        if ( v10 )
        {
          sub_4229D0((char*)"UI IPX: failed to join host %s - %s", ArgList, (const char *)lpMem);
          strcpy(&byte_520D40, aIpx);
          strcpy(&byte_520D80, aUnableToConnec);
          strcpy(&byte_521180, (const char *)lpMem);
          sub_4261C0(*(_DWORD **)(self + 40), aErrormsg, 0);
        }
        else
        {
          sub_4261C0(*(_DWORD **)(self + 40), aConnecting, 0);
        }
        v5 = (char *)lpMem;
      }
      sub_488CEE(v5);
      return 1;
    }
    sub_4261C0(*(_DWORD **)(self + 40), aNetnameentry, 0);
  }
  return 1;
}
