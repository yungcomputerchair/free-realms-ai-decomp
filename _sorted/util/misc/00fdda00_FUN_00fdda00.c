// addr: 0x00fdda00
// name: FUN_00fdda00
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_two_owned_spans(void * obj) */

void __fastcall init_two_owned_spans(void *obj)

{
                    /* Initializes two span/buffer descriptors to empty owned state, setting
                       ownership flags at +0x10 and +0x24. Class identity is not evident. */
  *(undefined1 *)((int)obj + 0x10) = 1;
  *(undefined4 *)((int)obj + 0xc) = 0;
  *(undefined4 *)((int)obj + 4) = 0;
  *(undefined4 *)((int)obj + 8) = 0;
  *(undefined1 *)((int)obj + 0x24) = 1;
  *(undefined4 *)((int)obj + 0x20) = 0;
  *(undefined4 *)((int)obj + 0x18) = 0;
  *(undefined4 *)((int)obj + 0x1c) = 0;
  return;
}

