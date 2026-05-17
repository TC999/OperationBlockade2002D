//----- (0041C9A0) --------------------------------------------------------
char __thiscall sub_41C9A0(char *this, char *a2)
{
  if ( ppDS->lpVtbl->DuplicateSoundBuffer(
         ppDS,
         (LPDIRECTSOUNDBUFFER)*((_DWORD *)a2 + 8),
         (LPDIRECTSOUNDBUFFER *)(this + 32)) >= 0 )
  {
    strcpy(this + 40, a2 + 40);
    *this = *a2;
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    sub_4229D0(aSoundDuplicate, (_BYTE)a2 + 40);
    return 1;
  }
  else
  {
    sub_4229D0(aSoundCouldnTDu, (_BYTE)a2 + 40);
    return 0;
  }
}
