// addr: 0x01441c70
// name: LoginCommand_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_ctor(void * this) */

void * __fastcall LoginCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for LoginCommand. It initializes the
                       NetworkCommand/PersistentComponent base via FUN_0140c090 and installs
                       LoginCommand::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = LoginCommand::vftable;
  ExceptionList = local_c;
  return this;
}

