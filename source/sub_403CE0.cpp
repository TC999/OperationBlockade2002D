//----- (00403CE0) --------------------------------------------------------
void __thiscall sub_403CE0(_DWORD *this)
{
  char *v2; // eax
  char *v3; // edi
  char *v4; // eax
  char *v5; // edi
  void *v6; // eax
  void *v7; // ecx
  char *v8; // eax
  char *v9; // edi

  v2 = (char *)this[1];
  this[2] = 0;
  if ( v2 )
  {
    v3 = v2 - 4;
    `eh vector destructor iterator'(v2, 0xACu, *((_DWORD *)v2 - 1), sub_403A90);
    sub_4885A6(v3);
  }
  v4 = (char *)this[8];
  this[1] = 0;
  this[7] = 0;
  if ( v4 )
  {
    v5 = v4 - 4;
    `eh vector destructor iterator'(v4, 0xACu, *((_DWORD *)v4 - 1), sub_403A90);
    sub_4885A6(v5);
  }
  v6 = (void *)this[11];
  this[8] = 0;
  sub_4885A6(v6);
  v7 = (void *)this[12];
  this[11] = 0;
  sub_4885A6(v7);
  v8 = (char *)this[3];
  this[12] = 0;
  if ( v8 )
  {
    v9 = v8 - 4;
    `eh vector destructor iterator'(v8, 0x58u, *((_DWORD *)v8 - 1), sub_403AE0);
    sub_4885A6(v9);
  }
  this[3] = 0;
  this[4] = 0;
  this[13] = 0;
}
