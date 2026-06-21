// addr: 0x014b8860
// name: LoginCommand_GuestLogin_dtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_GuestLogin_dtor(void * this) */

void __fastcall LoginCommand_GuestLogin_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LoginCommand_GuestLogin: installs the GuestLogin vftable,
                       releases the string member, destroys the embedded tree container, and calls
                       the base destructor. The vftable symbol gives the class evidence. */
  puStack_8 = &LAB_016a874e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_GuestLogin::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = 0;
  LoginCommand_RbTree_destroy((void *)((int)this + 4));
  LoginCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

