//----- (00428860) --------------------------------------------------------
_DWORD *__thiscall sub_428860(_DWORD *self, char *FileName)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  char *v9; // ebp
  char *v10; // eax
  char *v11; // eax
  int v13; // eax
  int v15; // [esp+Ch] [ebp-838h]
  int v16; // [esp+Ch] [ebp-838h]
  char Str[256]; // [esp+18h] [ebp-82Ch] BYREF
  char Source[256]; // [esp+118h] [ebp-72Ch] BYREF
  char v20[1024]; // [esp+218h] [ebp-62Ch] BYREF
  int v21; // [esp+840h] [ebp-4h]

  v2 = self;
  v3 = operator new(0x128u);
  v4 = v3;
  v21 = 0;
  if ( v3 )
  {
    *v3 = 0;
    v3[65] = 0;
    v3[66] = 0;
    v3[67] = 0;
    v3[68] = 0;
    v3[69] = 0;
    v3[70] = 0;
    sub_429DE0(FileName);
    LOBYTE(v21) = 3;
    v4[72] = 0;
    sub_429E70(v4 + 1, 256);
    if ( (unsigned __int8)sub_429E70(v20, 1024) )
    {
      do
      {
        if ( !strcmp(aPreferred, v20) )
        {
          sub_428D50(aLoad);
          sub_428D50(aAddress);
          sub_428D50(aIs);
          *v4 = sub_42A0E0(v4 + 71);
        }
        else if ( !strcmp(aStart, v20) )
        {
          sub_428D50(aLength);
          sub_428D50(aName);
          sub_428D50(aClass);
          sub_42A400(v4 + 71);
          if ( !sub_428C90(v4) )
          {
            do
            {
              v5 = sub_42A0E0(v4 + 71);
              sub_428DE0(58);
              v6 = sub_42A0E0(v4 + 71);
              v15 = sub_42A0E0(v4 + 71);
              sub_428DE0(72);
              sub_429E70(Source, 256);
              v7 = sub_429A90(v5, v6, v15, Source);
              sub_4291F0(v7);
            }
            while ( !(unsigned __int8)sub_428CD0(v4) && !sub_428C90(v4) );
          }
        }
        else if ( !strcmp(aAddress_0, v20) )
        {
          sub_428D50(aPublics);
          sub_428D50(aBy);
          sub_428D50(aValue);
          sub_428D50(aRvaBase);
          sub_428D50(aLibObject);
          sub_42A400(v4 + 71);
          if ( !sub_428C90(v4) )
          {
            do
            {
              v8 = sub_42A0E0(v4 + 71);
              sub_428DE0(58);
              v16 = sub_42A0E0(v4 + 71);
              sub_429E70(Str, 256);
              v9 = Str;
              v10 = strstr(Str, SubStr);
              if ( v10 )
                *v10 = 0;
              while ( isdigit(*v9) || *v9 == 63 || *v9 == 36 )
                ++v9;
              v11 = v9;
              if ( *v9 )
              {
                do
                {
                  if ( *v11 == 64 )
                    *v11 = 46;
                }
                while ( *++v11 );
              }
              v13 = sub_429A90(v8, v16, 0, v9);
              sub_4291F0(v13);
            }
            while ( !(unsigned __int8)sub_428CD0(v4) && !sub_428C90(v4) );
          }
        }
        else
        {
          sub_42A070(v4 + 71);
        }
      }
      while ( (unsigned __int8)sub_429E70(v20, 1024) );
      v2 = self;
    }
    sub_429310(v4[65], v4[65] + 272 * v4[66]);
    sub_429310(v4[68], v4[68] + 272 * v4[69]);
    *v2 = v4;
    return v2;
  }
  else
  {
    *v2 = 0;
    return v2;
  }
}
