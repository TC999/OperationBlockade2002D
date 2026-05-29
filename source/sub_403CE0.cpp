//----- (00403CE0) --------------------------------------------------------
void __thiscall sub_403CE0(_DWORD *self)
{
  char *v2; // eax
  char *v3; // edi
  char *v4; // eax
  char *v5; // edi
  void *v6; // eax
  void *v7; // ecx
  char *v8; // eax
  char *v9; // edi

  v2 = (char *)self[1];
  self[2] = 0;
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator'(v2, 0xACu, *((_DWORD *)v2 - 1), sub_403A90);
    sub_4885A6(v3);
  }
  v4 = (char *)self[8];
  self[1] = 0;
  self[7] = 0;
  if ( v4 )
  {
    v5 = v4 - 4;
    `eh vector destructor iterator'(v4, 0xACu, *((_DWORD *)v4 - 1), sub_403A90);
    sub_4885A6(v5);
  }
  v6 = (void *)self[11];
  self[8] = 0;
  sub_4885A6(v6);
  v7 = (void *)self[12];
  self[11] = 0;
  sub_4885A6(v7);
  v8 = (char *)self[3];
  self[12] = 0;
  if ( v8 )
  {
    v9 = v8 - 4;
    `eh vector destructor iterator'(v8, 0x58u, *((_DWORD *)v8 - 1), sub_403AE0);
    sub_4885A6(v9);
  }
  self[3] = 0;
  self[4] = 0;
  self[13] = 0;
}
