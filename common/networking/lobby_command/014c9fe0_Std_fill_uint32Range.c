// addr: 0x014c9fe0
// name: Std_fill_uint32Range
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Std_fill_uint32Range(void * first, void * last, int value) */

void __cdecl Std_fill_uint32Range(void *first,void *last,int value)

{
  for (; first != last; first = (void *)((int)first + 4)) {
    *(undefined4 *)first = *(undefined4 *)value;
  }
  return;
}

