// addr: 0x014b8230
// name: LoginCommand_RegisterUsernameResults_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RegisterUsernameResults_dtor(void * this) */

void __fastcall LoginCommand_RegisterUsernameResults_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for LoginCommand_RegisterUsernameResults; restores
                       vtable and calls LoginCommand_dtor. */
  puStack_8 = &LAB_016a8648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_RegisterUsernameResults::vftable;
  local_4 = 0xffffffff;
  LoginCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

