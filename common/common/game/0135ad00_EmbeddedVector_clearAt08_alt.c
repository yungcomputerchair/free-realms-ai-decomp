// addr: 0x0135ad00
// name: EmbeddedVector_clearAt08_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EmbeddedVector_clearAt08_alt(void * obj) */

void __fastcall EmbeddedVector_clearAt08_alt(void *obj)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a vector-like embedded allocation at +8 by freeing begin and zeroing
                       begin/end/capacity. It is another instantiation/inlined helper with no class
                       evidence. */
  puStack_8 = &LAB_0167e23b;
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

