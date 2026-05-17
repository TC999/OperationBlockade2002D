//----- (0041E250) --------------------------------------------------------
int __thiscall sub_41E250(_DWORD *this, char *String2)
{
  int v4; // esi
  int v5; // edi
  char *String2a; // [esp+14h] [ebp+4h]

  sub_4229D0(aFindsoundresou, (char)String2);
  v4 = 0;
  String2a = (char *)this[6];
  if ( (int)String2a <= 0 )
  {
LABEL_4:
    sub_4229D0(aFindsoundresou_0, (char)String2);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(this[5] + 4 * v4);
      if ( !_strcmpi((const char *)(v5 + 4), String2) )
        break;
      if ( ++v4 >= (int)String2a )
        goto LABEL_4;
    }
    sub_4229D0(aFindsoundresou_1, (char)String2);
    return v5;
  }
}
