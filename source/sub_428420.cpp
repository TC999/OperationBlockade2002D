//----- (00428420) --------------------------------------------------------
int sub_428420()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _BYTE v5[4]; // [esp+0h] [ebp-460h] BYREF
  _BYTE *v6; // [esp+4h] [ebp-45Ch] BYREF
  CHAR Filename[500]; // [esp+8h] [ebp-458h] BYREF
  char Buffer[600]; // [esp+1FCh] [ebp-264h] BYREF
  int v9; // [esp+45Ch] [ebp-4h]

  sub_429090(Filename, 500);
  sub_428860(Filename);
  v9 = 0;
  v0 = sub_428F20(v5) - 1;
  if ( v0 )
  {
    v1 = v0 - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v2 = sub_428F60(v5);
        sprintf(Buffer, "Parse error in map file %s(%i)\n", Filename, v2);
      }
    }
    else
    {
      v3 = sub_428F60(v5);
      sprintf(Buffer, "Error while reading map file %s(%i)\n", Filename, v3);
    }
  }
  else
  {
    sprintf(Buffer, "Failed to open map file %s\n", Filename);
  }
  if ( !sub_428F20(v5) )
  {
    v6 = v5;
    sub_429B40(&v6, 1, 1, 16, Buffer, 600);
  }
  sub_4229D0("Stack Trace:\n%s", Buffer);
  v9 = -1;
  return sub_428E30(v5);
}
