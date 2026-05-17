//----- (00422F40) --------------------------------------------------------
char __cdecl sub_422F40(const char *a1)
{
  int v1; // ebx
  CHAR RootPathName[3]; // [esp+10h] [ebp-110h] BYREF
  int v4; // [esp+13h] [ebp-10Dh]
  char v5; // [esp+17h] [ebp-109h]
  DWORD LogicalDrives; // [esp+18h] [ebp-108h]
  char v7[260]; // [esp+1Ch] [ebp-104h] BYREF

  LogicalDrives = GetLogicalDrives();
  v4 = 0;
  strcpy(RootPathName, "C:");
  v5 = 0;
  v1 = 4;
  while ( 1 )
  {
    if ( (v1 & LogicalDrives) != 0 && GetDriveTypeA(RootPathName) == 5 )
    {
      strcpy(v7, RootPathName);
      strcat(v7, a1);
      if ( sub_422AE0(v7) )
        break;
    }
    v1 *= 2;
    ++RootPathName[0];
    if ( !v1 )
      return 0;
  }
  return 1;
}
