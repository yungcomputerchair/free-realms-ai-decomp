// addr: 0x00bc42e0
// name: SoeUtil_RefObjectPool_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoeUtil_RefObjectPool_ctor(void * this) */

void * __fastcall SoeUtil_RefObjectPool_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a RefObjectPool-style structure by clearing list/count fields and
                       setting a default capacity or block size of 4000. Evidence is repeated calls
                       from RefObjectPool-backed ClientRequirement pool wrapper constructors. */
  puStack_8 = &LAB_015eadb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  FUN_00fc4580(4000);
  ExceptionList = local_c;
  return this;
}

