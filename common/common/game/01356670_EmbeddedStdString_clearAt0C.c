// addr: 0x01356670
// name: EmbeddedStdString_clearAt0C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EmbeddedStdString_clearAt0C(void * obj) */

void __fastcall EmbeddedStdString_clearAt0C(void *obj)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Frees an embedded MSVC small-string buffer when its capacity at +0x20 exceeds
                       15, then resets capacity/length and writes a NUL at +0x0c. No class evidence
                       is present, so the name is behavioral. */
  puStack_8 = &LAB_0167d96b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)obj + 0x20)) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)obj + 0xc));
  }
  *(undefined4 *)((int)obj + 0x20) = 0xf;
  *(undefined4 *)((int)obj + 0x1c) = 0;
  *(undefined1 *)((int)obj + 0xc) = 0;
  return;
}

