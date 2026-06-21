// addr: 0x014f0560
// name: NetworkCommand_UpdateDataVersion_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_UpdateDataVersion_dtor(void * this) */

void __fastcall NetworkCommand_UpdateDataVersion_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a NetworkCommand_UpdateDataVersion by restoring its vtable and
                       freeing two string/range members before returning. */
  puStack_8 = &LAB_016b1c4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_UpdateDataVersion::vftable;
  local_4 = 1;
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x20));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0xc),*(void **)((int)this + 0x10));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

