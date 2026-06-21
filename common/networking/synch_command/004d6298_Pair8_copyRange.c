// addr: 0x004d6298
// name: Pair8_copyRange
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair8_copyRange(void * first, void * last, void * dest) */

void __cdecl Pair8_copyRange(void *first,void *last,void *dest)

{
  for (; first != last; first = (void *)((int)first + 8)) {
    *(undefined4 *)dest = *(undefined4 *)first;
    *(undefined4 *)((int)dest + 4) = *(undefined4 *)((int)first + 4);
    dest = (void *)((int)dest + 8);
  }
  return;
}

