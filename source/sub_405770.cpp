//----- (00405770) --------------------------------------------------------
bool __thiscall sub_405770(FILE **self, unsigned int Buffer)
{
  _DWORD *v2; // edi
  void *v5; // eax
  size_t v6; // edx

  v2 = (_DWORD *)Buffer;
  Buffer = 0;
  *v2 = 0;
  if ( sub_4898CA(&Buffer, 4u, 1u, self[5]) != 1 )
    return 0;
  v5 = operator new(Buffer);
  v6 = Buffer;
  *v2 = v5;
  return sub_4898CA(v5, v6, 1u, self[5]) == 1;
}
