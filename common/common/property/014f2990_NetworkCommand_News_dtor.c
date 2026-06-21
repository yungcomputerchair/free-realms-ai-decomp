// addr: 0x014f2990
// name: NetworkCommand_News_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_News_dtor(void * this) */

void __fastcall NetworkCommand_News_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a NetworkCommand_News object by resetting its vtable and releasing
                       three owned string/buffer members. */
  puStack_8 = &LAB_016b2329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_News::vftable;
  local_4 = 2;
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 1;
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x18),*(void **)((int)this + 0x1c));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 8),*(void **)((int)this + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

