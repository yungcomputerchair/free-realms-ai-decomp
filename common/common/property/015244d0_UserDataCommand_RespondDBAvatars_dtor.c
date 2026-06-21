// addr: 0x015244d0
// name: UserDataCommand_RespondDBAvatars_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondDBAvatars_dtor(void * this) */

void __fastcall UserDataCommand_RespondDBAvatars_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a RespondDBAvatars object by restoring its vtable and freeing four
                       owned string/vector-style buffers. */
  puStack_8 = &LAB_016b8ee4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = UserDataCommand_RespondDBAvatars::vftable;
  local_4 = 3;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x40),*(void **)((int)this + 0x44));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = 2;
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x30),*(void **)((int)this + 0x34));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x30));
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = 1;
  if (*(void **)((int)this + 0x20) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x20),*(void **)((int)this + 0x24));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

