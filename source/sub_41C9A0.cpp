//----- (0041C9A0) --------------------------------------------------------
char __thiscall sub_41C9A0(char *self, char *a2)
{
  if ( ppDS->lpVtbl->DuplicateSoundBuffer(
         ppDS,
         (LPDIRECTSOUNDBUFFER)*((_DWORD *)a2 + 8),
         (LPDIRECTSOUNDBUFFER *)(self + 32)) >= 0 )
  {
    strcpy(self + 40, a2 + 40);
    *self = *a2;
    *((_DWORD *)self + 1) = *((_DWORD *)a2 + 1);
    *((_DWORD *)self + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)self + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)self + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)self + 6) = *((_DWORD *)a2 + 6);
    sub_4229D0(aSoundDuplicate, (_BYTE)a2 + 40);
    return 1;
  }
  else
  {
    sub_4229D0(aSoundCouldnTDu, (_BYTE)a2 + 40);
    return 0;
  }
}
