// addr: 0x013ffdb0
// name: FUN_013ffdb0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_013ffdb0(void * unused, int fields_) */

void __cdecl sub_013ffdb0(void *unused,int fields_)

{
  bool bVar1;
  
                    /* Conditionally processes two adjacent 4-byte fields, calling the same helper
                       on the first field and then the second only if the first succeeds. */
  bVar1 = Deserializer_readInteger(unused,(int *)fields_);
  if (!bVar1) {
    return;
  }
  Deserializer_readInteger(unused,(int *)(fields_ + 4));
  return;
}

