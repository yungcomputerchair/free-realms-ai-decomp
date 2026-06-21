// addr: 0x013d4540
// name: PropertyVector16_clearAndFree
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector16_clearAndFree(void * self) */

void __fastcall PropertyVector16_clearAndFree(void *self)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a small vector-like object by freeing its heap storage at offset 8,
                       then zeroing the start/end/capacity fields. The SEH frame and _free call are
                       destructor-style cleanup. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_0168b66b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)self = 0;
  local_4 = 0xffffffff;
  if (*(void **)((int)self + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)self + 8));
  }
  *(undefined4 *)((int)self + 8) = 0;
  *(undefined4 *)((int)self + 0xc) = 0;
  *(undefined4 *)((int)self + 0x10) = 0;
  ExceptionList = pvVar1;
  return;
}

