// addr: 0x01028ab0
// name: FUN_01028ab0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_01028ab0(void * object) */

void __fastcall FUN_01028ab0(void *object)

{
                    /* Zeros five pointer/integer fields in a small structure. No class evidence is
                       present. */
  *(undefined4 *)((int)object + 8) = 0;
  *(undefined4 *)((int)object + 0xc) = 0;
  *(undefined4 *)object = 0;
  *(undefined4 *)((int)object + 4) = 0;
  *(undefined4 *)((int)object + 0x10) = 0;
  return;
}

