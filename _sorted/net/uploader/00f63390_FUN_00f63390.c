// addr: 0x00f63390
// name: FUN_00f63390
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00f63390(void * object) */

void __fastcall FUN_00f63390(void *object)

{
                    /* Clears four consecutive fields after the leading word. No strings or type
                       evidence identify the class; likely a small initializer for an aggregate. */
  *(undefined4 *)((int)object + 4) = 0;
  *(undefined4 *)((int)object + 8) = 0;
  *(undefined4 *)((int)object + 0xc) = 0;
  *(undefined4 *)((int)object + 0x10) = 0;
  return;
}

