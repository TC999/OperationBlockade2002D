//----- (00470E39) --------------------------------------------------------
int __thiscall sub_470E39(int **this, int a2, int a3, int *a4)
{
  int *v5; // eax
  int *v6; // eax
  int v7; // ebx
  int *v8; // ecx

  this[1] = 0;
  *this = 0;
  this[2] = a4;
  if ( !(_WORD)a4 || (unsigned __int16)a4 > 5u || ((unsigned int)a4 & 0xFFF00000) != 0 )
  {
    sub_46D8FD(0, "Invalid image filter");
    return -2005530516;
  }
  *(_DWORD *)(a2 + 64) = (unsigned int)a4 & 0x80000;
  v5 = (int *)sub_476468(a2);
  this[1] = v5;
  if ( !v5 || (v6 = (int *)sub_476468(a3), (*this = v6) == 0) )
  {
    sub_46D8FD(0, "Unsupported image format");
    goto LABEL_21;
  }
  if ( this[1][2] != v6[2] )
  {
    sub_46D8FD(0, "No conversion exists between source and destination image formats");
LABEL_21:
    v7 = -2147467259;
    goto LABEL_22;
  }
  if ( sub_46F6F9(this) < 0
    && sub_46F82B(this) < 0
    && sub_46F91C(this) < 0
    && sub_46FB1E(this) < 0
    && sub_46FD22(this) < 0
    && sub_470113(this) < 0
    && sub_470616(this) < 0
    && sub_470947(this) < 0
    && sub_46DE48(this) < 0
    && sub_46E258(this) < 0 )
  {
    sub_46D8FD(0, "No suitable image filter found");
    goto LABEL_21;
  }
  v7 = 0;
LABEL_22:
  v8 = this[1];
  if ( v8 )
  {
    (*(void (__thiscall **)(int *, int))*v8)(v8, 1);
    this[1] = 0;
  }
  if ( *this )
  {
    (*(void (__thiscall **)(int *, int))**this)(*this, 1);
    *this = 0;
  }
  return v7;
}
