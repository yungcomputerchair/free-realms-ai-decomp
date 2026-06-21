// addr: 0x01357d40
// name: EmbeddedVector_clearAt08
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EmbeddedVector_clearAt08(void * obj) */

void __fastcall EmbeddedVector_clearAt08(void *obj)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a vector-like embedded allocation at +8 by freeing begin and zeroing
                       begin/end/capacity. No class-specific evidence is available. */
  puStack_8 = &LAB_0167da9b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)((int)obj + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)obj + 8));
  }
  *(undefined4 *)((int)obj + 8) = 0;
  *(undefined4 *)((int)obj + 0xc) = 0;
  *(undefined4 *)((int)obj + 0x10) = 0;
  return;
}

