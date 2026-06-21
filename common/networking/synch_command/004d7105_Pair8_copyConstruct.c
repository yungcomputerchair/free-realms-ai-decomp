// addr: 0x004d7105
// name: Pair8_copyConstruct
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair8_copyConstruct(void * dest, void * src) */

void __cdecl Pair8_copyConstruct(void *dest,void *src)

{
                    /* Constructs or copies one 8-byte pair-like element if the destination is
                       non-null. The body copies two adjacent 32-bit words from source to
                       destination. */
  if (dest != (void *)0x0) {
    *(undefined4 *)dest = *(undefined4 *)src;
    *(undefined4 *)((int)dest + 4) = *(undefined4 *)((int)src + 4);
  }
  return;
}

