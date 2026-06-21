// addr: 0x013316f0
// name: StdFind_dword_returnPair
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdFind_dword_returnPair(void * out, void * tag, int * first, void *
   unused, int * last, int * needle) */

void __cdecl
StdFind_dword_returnPair(void *out,void *tag,int *first,void *unused,int *last,int *needle)

{
                    /* Searches a dword range for *needle and writes a two-field result containing
                       the supplied tag and the found/end iterator. */
  if (first != last) {
    do {
      if (*first == *needle) break;
      first = first + 1;
    } while (first != last);
  }
  *(void **)out = tag;
  *(int **)((int)out + 4) = first;
  return;
}

