//----- (00403620) --------------------------------------------------------
char *__thiscall sub_403620(_DWORD *this, char *String2)
{
  int v3; // edi
  char *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  void *v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx

  v3 = 0;
  if ( (int)this[10] <= 0 )
  {
LABEL_4:
    v5 = (char *)operator new(0x6Cu);
    if ( v5 )
      v4 = sub_402C60(v5, String2);
    else
      v4 = 0;
    v6 = this[11];
    v7 = this[10] + 1;
    this[10] = v7;
    if ( v7 > v6 )
    {
      v8 = (void *)this[9];
      v9 = v6 + 8;
      this[11] = v9;
      v10 = sub_488DD7(v8, 4 * v9);
      if ( v10 )
      {
        v11 = this[10];
        v12 = this[11] - v11;
        this[9] = v10;
        memset((void *)(v10 + 4 * v11), 0, 4 * v12);
      }
    }
    *(_DWORD *)(this[9] + 4 * this[10] - 4) = v4;
  }
  else
  {
    while ( 1 )
    {
      v4 = *(char **)(this[9] + 4 * v3);
      if ( !_strcmpi(v4, String2) )
        break;
      if ( ++v3 >= this[10] )
        goto LABEL_4;
    }
  }
  return v4;
}
