// addr: 0x00fdd850
// name: FUN_00fdd850
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_dual_owned_buffers(void * obj) */

void __fastcall init_dual_owned_buffers(void *obj)

{
                    /* Initializes two small owned-buffer descriptors and several counters/flags to
                       empty/default state. Owner class is not evident. */
  *(undefined1 *)((int)obj + 0x18) = 1;
  *(undefined4 *)((int)obj + 0x14) = 0;
  *(undefined4 *)((int)obj + 0xc) = 0;
  *(undefined4 *)((int)obj + 0x10) = 0;
  *(undefined1 *)((int)obj + 0x34) = 1;
  *(undefined4 *)((int)obj + 0x30) = 0;
  *(undefined4 *)((int)obj + 0x28) = 0;
  *(undefined4 *)((int)obj + 0x2c) = 0;
  *(undefined1 *)obj = 1;
  *(undefined4 *)((int)obj + 4) = 0;
  *(undefined4 *)((int)obj + 0x1c) = 0;
  *(undefined4 *)((int)obj + 0x20) = 0;
  return;
}

