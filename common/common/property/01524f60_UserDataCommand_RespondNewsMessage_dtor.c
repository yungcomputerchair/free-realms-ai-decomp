// addr: 0x01524f60
// name: UserDataCommand_RespondNewsMessage_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondNewsMessage_dtor(void * this) */

void __fastcall UserDataCommand_RespondNewsMessage_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a RespondNewsMessage object by restoring its vtable and freeing four
                       contiguous string/vector-style member groups. */
  puStack_8 = &LAB_016b9014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = UserDataCommand_RespondNewsMessage::vftable;
  local_4 = 3;
  if (*(void **)((int)this + 0x3c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x3c),*(void **)((int)this + 0x40));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c));
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 2;
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x2c),*(void **)((int)this + 0x30));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
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
  UserDataCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

