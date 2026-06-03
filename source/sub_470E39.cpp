//----- (00470E39) --------------------------------------------------------
int __cdecl sub_470E39(int **self, int a2, int a3, int *a4)
{
  int *v5; // eax
  int *v6; // eax
  int v7; // ebx
  int *v8; // ecx

  self[1] = 0;
  *self = 0;
  self[2] = a4;
  if ( !((unsigned __int16)(unsigned int)a4) || (unsigned __int16)(unsigned int)a4 > 5u || ((unsigned int)a4 & 0xFFF00000) != 0 )
  {
    sub_46D8FD(0, (char *)"Invalid image filter");
    return -2005530516;
  }
  *(_DWORD *)(a2 + 64) = (unsigned int)a4 & 0x80000;
  v5 = (int *)sub_476468(a2);
  self[1] = v5;
  if ( !v5 || (v6 = (int *)sub_476468(a3), (*self = v6) == 0) )
  {
    sub_46D8FD(0, (char *)"Unsupported image format");
    goto LABEL_21;
  }
  if ( self[1][2] != v6[2] )
  {
    sub_46D8FD(0, (char *)"No conversion exists between source and destination image formats");
LABEL_21:
    v7 = -2147467259;
    goto LABEL_22;
  }
  if ( sub_46F6F9((uint32 *)(void*)self) < 0
    && sub_46F82B((uint32 *)(void*)self) < 0
    && sub_46F91C((uint32 *)(void*)self) < 0
    && sub_46FB1E((uint32 *)(void*)self) < 0
    && sub_46FD22((uint32 *)(void*)self) < 0
    && sub_470113((uint32 *)(void*)self) < 0
    && sub_470616(self) < 0
    && sub_470947((uint32 *)(void*)self) < 0
    && sub_46DE48((uint32 *)(void*)self) < 0
    && sub_46E258((uint32 *)(void*)self) < 0 )
  {
    sub_46D8FD(0, (char *)"No suitable image filter found");
    goto LABEL_21;
  }
  v7 = 0;
LABEL_22:
  v8 = self[1];
  if ( v8 )
  {
    (*(void (__cdecl **)(int *, int))*v8)(v8, 1);
    self[1] = 0;
  }
  if ( *self )
  {
    (*(void (__cdecl **)(int *, int))**self)(*self, 1);
    *self = 0;
  }
  return v7;
}
