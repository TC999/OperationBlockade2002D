//----- (0041B710) --------------------------------------------------------
#include "common.h"

// Missing function pointers
int (__cdecl*__cdecl sub_478E09(void *p, int a, int b))(void *, int, unsigned int) { return 0; }
int (__cdecl*__cdecl sub_4791B0(void *p, int *a))(void *, int, unsigned int) { return 0; }

// Missing string constants
extern __declspec(selectany) const char * const aSoundsUiMusicW = "Sounds\\ui_music.wav";
extern __declspec(selectany) const char * const aCursor = "cursor";
extern __declspec(selectany) const char * const asc_4A4C9C = "\\";
extern __declspec(selectany) const char * const aSoundsClickWav = "Sounds\\click.wav";
extern __declspec(selectany) const char * const aSoundsRollover = "Sounds\\rollover.wav";
extern __declspec(selectany) const char * const aUiHiding = "ui_hiding";

int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v2 = a1[3];
  v3 = a2[3];
  if ( v2 > v3 )
    return -1;
  if ( v2 < v3 )
    return 1;
  if ( *a1 < *a2 )
    return -1;
  if ( *a1 > *a2 )
    return 1;
  v5 = a1[1];
  v6 = a2[1];
  if ( v6 <= v5 )
    return v6 < v5;
  else
    return -1;
}
