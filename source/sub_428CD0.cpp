//----- (00428CD0) --------------------------------------------------------
bool __cdecl sub_428CD0(char *self)
{
  char v2; // [esp+7h] [ebp-1h] BYREF

  sub_42A070((uint32*)(self + 284));
  while ( (unsigned __int8)sub_42A560((_DWORD*)(self + 284), (_BYTE*)&v2) )
  {
    if ( !isspace(v2) )
      break;
    if ( v2 == 10 )
      break;
    sub_42A4F0((_DWORD*)(self + 284), (_BYTE*)&v2);
  }
  return (unsigned __int8)sub_42A560((_DWORD*)(self + 284), (_BYTE*)&v2) && v2 == 10;
}
