//----- (00429B40) --------------------------------------------------------
int __cdecl sub_429B40(void **a1, int a2, int a3, int a4, char *a5, int a6)
{
  int *i; // esi
  int v7; // edi
  int v8; // esi
  void **v9; // ebp
  int v10; // ecx
  int result; // eax
  int v12; // esi
  int v13; // ebp
  int v14; // ebx
  void **v15; // edi
  int v16; // edx
  int v17; // eax
  bool v18; // cc
  const char *v19; // [esp-18h] [ebp-1E0h]
  int v20; // [esp-14h] [ebp-1DCh]
  int v21; // [esp-14h] [ebp-1DCh]
  int v22; // [esp+0h] [ebp-1C8h]
  int v23; // [esp+0h] [ebp-1C8h]
  int *v24; // [esp+4h] [ebp-1C4h]
  int v25; // [esp+8h] [ebp-1C0h]
  int *v26; // [esp+Ch] [ebp-1BCh]
  void *v27; // [esp+Ch] [ebp-1BCh]
  int v28; // [esp+10h] [ebp-1B8h]
  char Buffer[308]; // [esp+14h] [ebp-1B4h] BYREF
  char v30; // [esp+148h] [ebp-80h] BYREF

  if ( a4 > 32 )
    a4 = 32;
  v25 = 0;
  v22 = a3;
  if ( a3 < a4 )
  {
    for ( i = (int *)&v30; ; i = v26 )
    {
      v7 = sub_429DD0(v22);
      *i = v7;
      v26 = i + 1;
      v8 = 0;
      ++v25;
      if ( a2 <= 0 )
        break;
      v9 = a1;
      while ( sub_428F80(*v9, v7) == -1 )
      {
        ++v8;
        ++v9;
        if ( v8 >= a2 )
          goto LABEL_12;
      }
      if ( ++v22 >= a4 )
        break;
    }
  }
LABEL_12:
  v10 = a6;
  if ( a6 > 0 )
    *a5 = 0;
  result = 0;
  v28 = 0;
  v23 = a3;
  if ( a3 < v25 )
  {
    v24 = (int *)&Buffer[4 * (v25 - a3) + 304];
    do
    {
      v12 = 0;
      v13 = -1;
      v14 = *v24;
      v27 = 0;
      if ( a2 > 0 )
      {
        v15 = a1;
        while ( 1 )
        {
          v13 = sub_428F80(*v15, v14);
          if ( v13 != -1 )
            break;
          ++v12;
          ++v15;
          if ( v12 >= a2 )
            goto LABEL_22;
        }
        v27 = a1[v12];
      }
LABEL_22:
      Buffer[0] = 0;
      if ( a3 - 1 < v23 )
      {
        v16 = v23 - (a3 - 1);
        do
        {
          strcat(Buffer, asc_4A5C78);
          --v16;
        }
        while ( v16 );
      }
      v20 = *v24;
      if ( v27 )
      {
        v17 = sub_428EE0(v13);
        v19 = (const char *)sub_429B00(v17, v20);
        sprintf(&Buffer[strlen(Buffer)], "%s (%x)\n", v19, v21);
      }
      else
      {
        sprintf(&Buffer[strlen(Buffer)], a0xX, v20);
      }
      v28 += strlen(Buffer);
      if ( v28 < a6 )
        strcat(a5, Buffer);
      v18 = ++v23 < v25;
      --v24;
    }
    while ( v18 );
    result = v28;
    v10 = a6;
  }
  if ( result >= v10 )
  {
    if ( v10 > 0 )
      a5[v10 - 1] = 0;
  }
  else
  {
    a5[result] = 0;
  }
  return result;
}
