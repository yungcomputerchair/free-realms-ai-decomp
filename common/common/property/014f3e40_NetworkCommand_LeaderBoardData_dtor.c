// addr: 0x014f3e40
// name: NetworkCommand_LeaderBoardData_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_LeaderBoardData_dtor(void * this) */

void __fastcall NetworkCommand_LeaderBoardData_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a NetworkCommand_LeaderBoardData object by restoring its vtable and
                       freeing six string/vector-like members. */
  puStack_8 = &LAB_016b263a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_LeaderBoardData::vftable;
  local_4 = 5;
  if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x58));
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  local_4 = 4;
  if (*(void **)((int)this + 0x48) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x48),*(void **)((int)this + 0x4c));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x48));
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_4 = 3;
  if (*(void **)((int)this + 0x38) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x38));
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
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

