//----- (00410AB0) --------------------------------------------------------
int __cdecl sub_410AB0(int self, unsigned int a2, float a3)
{
  int v4; // eax
  void *v5; // ebx
  unsigned int v6; // eax
  const void *v7; // eax
  unsigned int v8; // ecx
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  const void *v13; // esi
  float v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  const char *v19; // eax
  void *v20; // edx
  _DWORD *v21; // eax
  const char *v22; // eax
  _DWORD *v23; // eax
  const char *v24; // eax
  int result; // eax
  float v26; // ecx
  int v27; // eax
  _DWORD *v28; // eax
  const char *v29; // eax
  _DWORD *v30; // eax
  const char *v31; // eax
  _DWORD *v32; // eax
  const char *v33; // eax
  _DWORD *v34; // eax
  const char *v35; // eax
  float v36; // ebx
  int v37; // edx
  struct _RTL_CRITICAL_SECTION *v38; // edx
  CHAR *v39; // eax
  CHAR *v40; // ebx
  float v41; // ecx
  int v42; // ecx
  struct _RTL_CRITICAL_SECTION *v43; // esi
  float v44; // edi
  int v45; // eax
  _DWORD *v46; // edi
  float *v47; // eax
  float v48; // esi
  float *v49; // edi
  long double v50; // st7
  float **v51; // eax
  int v52; // ecx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+54h] [ebp-4Ch]
  LPCRITICAL_SECTION lpCriticalSectiona; // [esp+54h] [ebp-4Ch]
  float lpCriticalSectionb; // [esp+54h] [ebp-4Ch]
  float v56; // [esp+58h] [ebp-48h]
  int v57[2]; // [esp+5Ch] [ebp-44h] BYREF
  int v58[2]; // [esp+64h] [ebp-3Ch] BYREF
  int v59[2]; // [esp+6Ch] [ebp-34h] BYREF
  int v60[2]; // [esp+74h] [ebp-2Ch] BYREF
  int v61[2]; // [esp+7Ch] [ebp-24h] BYREF
  int v62[2]; // [esp+84h] [ebp-1Ch] BYREF
  int v63[2]; // [esp+8Ch] [ebp-14h] BYREF
  char v64[4]; // [esp+94h] [ebp-Ch] BYREF
  _WORD v65[3]; // [esp+98h] [ebp-8h]

  v4 = *(_DWORD *)(self + 24);
  if ( !v4 )
    return 0;
  switch ( a2 )
  {
    case 0xFFFF0005:
      if ( !*(_BYTE *)(self + 938) )
        return 0;
      v26 = a3;
      *(_BYTE *)(self + 938) = 0;
      v27 = *(_DWORD *)(LODWORD(v26) + 12);
      if ( v27 >= 0 )
      {
        *(_BYTE *)(self + 936) = 0;
        *(_BYTE *)(self + 937) = 1;
        *(_DWORD *)(self + 940) = 1;
        sub_488CEE(0);
        return 0;
      }
      else
      {
        switch ( v27 )
        {
          case -2146073072:
            v28 = sub_403A30(v60, 2, aSessionIsFull);
            *(_DWORD *)(self + 940) = *v28;
            v29 = (const char *)v28[1];
            if ( v29 )
              *(_DWORD *)(self + 944) = _strdup(v29);
            sub_488CEE((LPVOID)v60[1]);
            return 0;
          case -2146074016:
            v30 = sub_403A30(v61, 2, aHostRejectedTh);
            *(_DWORD *)(self + 940) = *v30;
            v31 = (const char *)v30[1];
            if ( v31 )
              *(_DWORD *)(self + 944) = _strdup(v31);
            sub_488CEE((LPVOID)v61[1]);
            return 0;
          case -2146073200:
            v32 = sub_403A30(v62, 2, aPlayerNotReach);
            *(_DWORD *)(self + 940) = *v32;
            v33 = (const char *)v32[1];
            if ( v33 )
              *(_DWORD *)(self + 944) = _strdup(v33);
            sub_488CEE((LPVOID)v62[1]);
            return 0;
          default:
            v34 = sub_403A30(v63, 2, aConnectionFail);
            *(_DWORD *)(self + 940) = *v34;
            v35 = (const char *)v34[1];
            if ( v35 )
              *(_DWORD *)(self + 944) = _strdup(v35);
            sub_488CEE((LPVOID)v63[1]);
            return 0;
        }
      }
    case 0xFFFF0007:
      v36 = a3;
      v37 = *(_DWORD *)(LODWORD(a3) + 4);
      a2 = 0;
      result = (*(int (__stdcall **)(int, int, _DWORD, unsigned int *, _DWORD))(*(_DWORD *)v4 + 84))(v4, v37, 0, &a2, 0);
      if ( result >= 0 || result == -2146074368 )
      {
        v38 = (struct _RTL_CRITICAL_SECTION *)operator new(a2);
        memset(v38, 0, a2);
        v38->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)24;
        lpCriticalSectiona = v38;
        result = (*(int (__stdcall **)(_DWORD, _DWORD, struct _RTL_CRITICAL_SECTION *, unsigned int *, _DWORD))(**(_DWORD **)(self + 24) + 84))(
                   *(_DWORD *)(self + 24),
                   *(_DWORD *)(LODWORD(v36) + 4),
                   v38,
                   &a2,
                   0);
        if ( result >= 0 )
        {
          v39 = (CHAR *)operator new(0x2078u);
          if ( v39 )
          {
            v40 = v39;
            *((_DWORD *)v39 + 2062) = 0;
            *((_DWORD *)v39 + 2063) = 0;
            *((_DWORD *)v39 + 2064) = 0;
            v39[8260] = 0;
            *((_DWORD *)v39 + 2069) = 0;
            *((_DWORD *)v39 + 2070) = 0;
            *((_DWORD *)v39 + 2071) = 0;
            v39[8288] = 0;
            *((_DWORD *)v39 + 2073) = 0;
            *((_DWORD *)v39 + 2074) = 0;
            *((_DWORD *)v39 + 2075) = 0;
            v39[8304] = 0;
          }
          else
          {
            v40 = 0;
          }
          memset(v40, 0, 0x2078u);
          v41 = a3;
          *(_DWORD *)v40 = 1;
          v40[53] = 0;
          v40[52] = 0;
          *((_DWORD *)v40 + 2077) = 0;
          v42 = *(_DWORD *)(LODWORD(v41) + 4);
          *((_DWORD *)v40 + 2068) = 1;
          *((_DWORD *)v40 + 2067) = 1;
          *((_DWORD *)v40 + 2066) = 1;
          *((_DWORD *)v40 + 2) = v42;
          if ( lpCriticalSectiona->LockSemaphore )
            strcpy(v40 + 36, (const char *)lpCriticalSectiona->OwningThread);
          sub_428840(v40 + 12, (wchar_t *)lpCriticalSectiona->RecursionCount, 24);
          if ( (lpCriticalSectiona->SpinCount & 2) != 0 )
          {
            *(_DWORD *)(self + 84) = *(_DWORD *)(LODWORD(a3) + 4);
            v40[53] = 1;
          }
          if ( (lpCriticalSectiona->SpinCount & 4) != 0 )
          {
            *(_DWORD *)(self + 88) = *(_DWORD *)(LODWORD(a3) + 4);
            v40[52] = 1;
          }
          if ( lpCriticalSectiona )
            sub_4885A6(lpCriticalSectiona);
          v43 = (struct _RTL_CRITICAL_SECTION *)(self + 112);
          LODWORD(a3) = self + 112;
          EnterCriticalSection((LPCRITICAL_SECTION)(self + 112));
          if ( v40[52] )
          {
            strcpy((char *)(self + 920), v40 + 36);
            v43 = (struct _RTL_CRITICAL_SECTION *)LODWORD(a3);
          }
          InterlockedIncrement((volatile LONG *)(self + 100));
          *((_DWORD *)v40 + 2077) = *(_DWORD *)(self + 136);
          *(_DWORD *)(self + 136) = v40;
          *(_DWORD *)&v65[1] = v40;
          ++*(_DWORD *)v40;
          sub_411820(65281, v64, 10);
          LeaveCriticalSection(v43);
          return 0;
        }
      }
      return result;
    case 0xFFFF0009:
      v44 = a3;
      *(_DWORD *)&v65[1] = sub_411B60(*(_DWORD *)(LODWORD(a3) + 4));
      EnterCriticalSection((LPCRITICAL_SECTION)(self + 112));
      *(_BYTE *)(*(_DWORD *)&v65[1] + 4) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(self + 112));
      sub_411820(65282, v64, 10);
      sub_411BB0(*(_DWORD *)(LODWORD(v44) + 4));
      return 0;
    case 0xFFFF000B:
      lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(self + 960);
      EnterCriticalSection((LPCRITICAL_SECTION)(self + 960));
      v5 = *(void **)(self + 956);
      v6 = *(_DWORD *)(LODWORD(a3) + 12);
      a2 = v6;
      if ( !v5 )
        goto LABEL_7;
      v7 = (const void *)(v6 + 8);
      break;
    case 0xFFFF000D:
      if ( *(_DWORD *)(LODWORD(a3) + 4) != *(_DWORD *)(self + 84) )
        return 0;
      *(_BYTE *)(self + 936) = 1;
      *(_BYTE *)(self + 937) = 0;
      return 0;
    case 0xFFFF000E:
      if ( *(_BYTE *)(self + 108) && *(_DWORD *)(self + 100) < *(_DWORD *)(self + 104) )
        return 0;
      return -2146074016;
    case 0xFFFF0011:
      v47 = (float *)sub_40E8E0(20);
      v48 = a3;
      v49 = v47;
      sub_40F4C0(v47, *(_DWORD *)(LODWORD(a3) + 4), *(_DWORD *)(LODWORD(a3) + 16), *(_WORD **)(LODWORD(a3) + 12));
      if ( (*(_BYTE *)(*((_DWORD *)v49 + 4) + 2) & 8) == 0 && *((_DWORD *)v49 + 1) != *(_DWORD *)(self + 84) )
      {
        if ( flt_4F5CBC > 0.0 )
        {
          a3 = flt_4F5CB8;
          v56 = *(float *)(dword_520970 + 76);
          lpCriticalSectionb = flt_4F5CBC;
          if ( flt_4F5CB8 == flt_4F5CBC )
          {
            v50 = flt_4F5CB8;
          }
          else
          {
            a2 = rand();
            v50 = fabs((double)(int)a2 * 0.000030518509) * (lpCriticalSectionb - a3) + a3;
          }
          *v49 = v50 + v56;
        }
        if ( flt_4F5CC0 > 0.0 )
        {
          a3 = COERCE_FLOAT(rand());
          if ( fabs((double)SLODWORD(a3) * 0.000030518509) < flt_4F5CC0 )
          {
            sub_4113D0(v49);
            return 0;
          }
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(self + 44));
      v51 = *(float ***)(self + 28);
      if ( v51 )
      {
        *(_DWORD *)(self + 28) = v51[1];
      }
      else
      {
        v51 = (float **)operator new(8u);
        *v51 = 0;
      }
      v51[1] = 0;
      *v51 = v49;
      v51[1] = 0;
      if ( *(_DWORD *)(self + 32) )
        *(_DWORD *)(*(_DWORD *)(self + 36) + 4) = v51;
      else
        *(_DWORD *)(self + 32) = v51;
      v52 = *(_DWORD *)(self + 40) + 1;
      *(_DWORD *)(self + 36) = v51;
      *(_DWORD *)(self + 40) = v52;
      LeaveCriticalSection((LPCRITICAL_SECTION)(self + 44));
      *(float *)dword_520A28 = *(float *)dword_520A28 + 1.0;
      *(float *)dword_520890 = (double)*(int *)(LODWORD(v48) + 16) + *(float *)dword_520890;
      return 0;
    case 0xFFFF0016:
      v45 = *(_DWORD *)(self + 100);
      v46 = (_DWORD *)(self + 100);
      *(_BYTE *)(self + 937) = 0;
      *(_BYTE *)(self + 936) = 0;
      if ( v45 )
      {
        do
          InterlockedDecrement((volatile LONG *)(self + 100));
        while ( *v46 );
      }
      *(_DWORD *)&v65[1] = 0;
      sub_411820(65283, v64, 10);
      return 0;
    default:
      return 0;
  }
  while ( memcmp(v7, (const void *)(*((_DWORD *)v5 + 65) + 8), 0x10u) )
  {
    v5 = (void *)*((_DWORD *)v5 + 69);
    if ( !v5 )
    {
LABEL_7:
      v5 = operator new(0x118u);
      memset(v5, 0, 0x118u);
      *((_DWORD *)v5 + 69) = *(_DWORD *)(self + 956);
      *(_DWORD *)(self + 956) = v5;
      break;
    }
  }
  v8 = a2;
  *((_DWORD *)v5 + 68) = 0;
  v9 = *(wchar_t **)(v8 + 48);
  if ( v9 )
    sub_428840((LPSTR)v5, v9, -1);
  sub_4885A6(*((LPVOID *)v5 + 65));
  v10 = *((_DWORD *)v5 + 66);
  *((_DWORD *)v5 + 65) = 0;
  if ( v10 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    *((_DWORD *)v5 + 66) = 0;
  }
  v11 = *((_DWORD *)v5 + 67);
  if ( v11 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11 + 8))(*((_DWORD *)v5 + 67));
    *((_DWORD *)v5 + 67) = 0;
  }
  v12 = operator new(0x48u);
  v13 = (const void *)a2;
  *((_DWORD *)v5 + 65) = v12;
  memset(v12, 0, 0x48u);
  qmemcpy(*((void **)v5 + 65), v13, 0x48u);
  v14 = a3;
  *(_DWORD *)(*((_DWORD *)v5 + 65) + 48) = 0;
  v15 = *(_DWORD *)(LODWORD(v14) + 4);
  if ( v15 )
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v15 + 20))(v15, (int)v5 + 264);
  v16 = *(_DWORD *)(LODWORD(a3) + 8);
  if ( v16 )
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v16 + 20))(v16, (int)v5 + 268);
  if ( *(_DWORD *)(self + 984) )
    SetEvent(*(HANDLE *)(self + 984));
  if ( *(_BYTE *)(self + 938) )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(self + 24) + 20))(*(_DWORD *)(self + 24), 0, 2);
    v17 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, float *, _DWORD))(**(_DWORD **)(self + 24) + 24))(
            *(_DWORD *)(self + 24),
            *((_DWORD *)v5 + 65),
            *((_DWORD *)v5 + 66),
            *((_DWORD *)v5 + 67),
            0,
            0,
            0,
            0,
            0,
            0,
            &a3,
            0);
    if ( v17 < 0 )
    {
      if ( v17 == -2146073072 )
      {
        v18 = sub_403A30(v57, 2, aSessionIsFull);
        *(_DWORD *)(self + 940) = *v18;
        v19 = (const char *)v18[1];
        if ( v19 )
          *(_DWORD *)(self + 944) = _strdup(v19);
        v20 = (void *)v57[1];
      }
      else if ( v17 == -2146074016 )
      {
        v21 = sub_403A30(v58, 2, aHostRejectedTh);
        *(_DWORD *)(self + 940) = *v21;
        v22 = (const char *)v21[1];
        if ( v22 )
          *(_DWORD *)(self + 944) = _strdup(v22);
        v20 = (void *)v58[1];
      }
      else
      {
        v23 = sub_403A30(v59, 2, aConnectionFail);
        *(_DWORD *)(self + 940) = *v23;
        v24 = (const char *)v23[1];
        if ( v24 )
          *(_DWORD *)(self + 944) = _strdup(v24);
        v20 = (void *)v59[1];
      }
      sub_488CEE(v20);
      *(_BYTE *)(self + 938) = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}
