// addr: 0x014b91b0
// name: LoginCommand_ForgotPasswordResults_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_ForgotPasswordResults_dtor(void * this) */

void __fastcall LoginCommand_ForgotPasswordResults_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for LoginCommand_ForgotPasswordResults; restores
                       vtable and calls LoginCommand_dtor. */
  puStack_8 = &LAB_016a8908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_ForgotPasswordResults::vftable;
  local_4 = 0xffffffff;
  LoginCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

