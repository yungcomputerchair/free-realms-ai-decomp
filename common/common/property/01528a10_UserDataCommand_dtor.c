// addr: 0x01528a10
// name: UserDataCommand_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_dtor(void * this) */

void __fastcall UserDataCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys UserDataCommand by installing the base UserDataCommand vtable and
                       calling its base destructor. */
  puStack_8 = &LAB_016b9938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = UserDataCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

