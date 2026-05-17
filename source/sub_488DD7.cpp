//----- (00488DD7) --------------------------------------------------------
void *__cdecl sub_488DD7(LPVOID lpMem, SIZE_T dwBytes)
{
  void *v2; // ebx
  void *result; // eax
  SIZE_T v4; // esi
  int block; // eax
  size_t v6; // eax
  size_t v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v9; // edi
  size_t v10; // eax
  size_t v11; // eax
  int v12; // [esp+Ch] [ebp-38h] BYREF
  size_t v13; // [esp+10h] [ebp-34h]
  unsigned __int8 *v14; // [esp+14h] [ebp-30h]
  int v15; // [esp+18h] [ebp-2Ch] BYREF
  int v16; // [esp+1Ch] [ebp-28h]
  void *v17; // [esp+20h] [ebp-24h]
  size_t v18; // [esp+24h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v2 = lpMem;
  if ( !lpMem )
    return malloc(dwBytes);
  v4 = dwBytes;
  if ( dwBytes )
  {
    if ( dword_523A84 == 3 )
    {
      while ( 1 )
      {
        v17 = 0;
        if ( v4 <= 0xFFFFFFE0 )
        {
          _lock(9);
          ms_exc.registration.TryLevel = 0;
          block = __sbh_find_block(lpMem);
          v16 = block;
          if ( block )
          {
            if ( v4 <= dword_523A7C )
            {
              if ( ((int (__cdecl *)(int, LPVOID, SIZE_T))__sbh_resize_block)(block, lpMem, v4) )
              {
                v17 = lpMem;
              }
              else
              {
                v17 = (void *)((int (__cdecl *)(SIZE_T))__sbh_alloc_block)(v4);
                if ( v17 )
                {
                  v6 = *((_DWORD *)lpMem - 1) - 1;
                  v18 = v6;
                  if ( v6 >= v4 )
                    v6 = v4;
                  memcpy_0(v17, lpMem, v6);
                  v16 = __sbh_find_block(lpMem);
                  sub_48D6E8(v16, lpMem);
                }
              }
            }
            if ( !v17 )
            {
              if ( !v4 )
                v4 = 1;
              v4 = (v4 + 15) & 0xFFFFFFF0;
              v17 = HeapAlloc(hHeap, 0, v4);
              if ( v17 )
              {
                v7 = *((_DWORD *)lpMem - 1) - 1;
                v18 = v7;
                if ( v7 >= v4 )
                  v7 = v4;
                memcpy_0(v17, lpMem, v7);
                sub_48D6E8(v16, lpMem);
              }
            }
          }
          ms_exc.registration.TryLevel = -1;
          _unlock(9);
          if ( !v16 )
          {
            if ( !v4 )
              v4 = 1;
            v4 = (v4 + 15) & 0xFFFFFFF0;
            v17 = HeapReAlloc(hHeap, 0, lpMem, v4);
          }
        }
        result = v17;
        if ( v17 || !dword_522424 )
          break;
        if ( !_callnewh(v4) )
          return 0;
      }
    }
    else if ( dword_523A84 == 2 )
    {
      if ( dwBytes <= 0xFFFFFFE0 )
        v4 = (dwBytes + 15) & 0xFFFFFFF0;
      while ( 1 )
      {
        v17 = 0;
        if ( v4 <= 0xFFFFFFE0 )
        {
          _lock(9);
          ms_exc.registration.TryLevel = 1;
          v8 = (unsigned __int8 *)sub_48E418(v2, &v12, &v15);
          v9 = v8;
          v14 = v8;
          if ( v8 )
          {
            if ( v4 < dword_4B498C )
            {
              if ( sub_48E7E0(v12, v15, v8, v4 >> 4) )
              {
                v17 = lpMem;
              }
              else
              {
                v17 = (void *)sub_48E4B4(v4 >> 4);
                if ( v17 )
                {
                  v10 = 16 * *v9;
                  v13 = v10;
                  if ( v10 >= v4 )
                    v10 = v4;
                  memcpy_0(v17, lpMem, v10);
                  sub_48E46F(v12, v15, v9);
                }
              }
              v2 = lpMem;
            }
            if ( !v17 )
            {
              v17 = HeapAlloc(hHeap, 0, v4);
              if ( v17 )
              {
                v11 = 16 * *v9;
                v13 = v11;
                if ( v11 >= v4 )
                  v11 = v4;
                memcpy_0(v17, v2, v11);
                sub_48E46F(v12, v15, v9);
              }
            }
          }
          else
          {
            v17 = HeapReAlloc(hHeap, 0, v2, v4);
          }
          ms_exc.registration.TryLevel = -1;
          _unlock(9);
        }
        result = v17;
        if ( v17 || !dword_522424 )
          break;
        if ( !_callnewh(v4) )
          return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        result = 0;
        if ( v4 <= 0xFFFFFFE0 )
        {
          if ( !v4 )
            v4 = 1;
          v4 = (v4 + 15) & 0xFFFFFFF0;
          result = HeapReAlloc(hHeap, 0, lpMem, v4);
        }
        if ( result || !dword_522424 )
          break;
        if ( !_callnewh(v4) )
          return 0;
      }
    }
  }
  else
  {
    sub_488CEE(lpMem);
    return 0;
  }
  return result;
}
