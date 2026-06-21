// addr: 0x00d0c820
// name: FUN_00d0c820
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00d0c820(void * this) */

void __fastcall FUN_00d0c820(void *this)

{
                    /* Clears four fields at regular intervals in a small structure. There is no
                       class, string, or caller evidence sufficient to name the type. */
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}

