// addr: 0x01445180
// name: LoginCommand_SendPassword_dtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_SendPassword_dtor(void * this) */

void __fastcall LoginCommand_SendPassword_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LoginCommand_SendPassword: installs the class vftable,
                       releases numerous std::string members, destroys the embedded tree container,
                       then calls the base NetworkCommand destructor. The vftable symbol provides
                       authoritative class evidence. */
  puStack_8 = &LAB_016995c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_SendPassword::vftable;
  local_4 = 9;
  if (0xf < *(uint *)((int)this + 0x10c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xf8));
  }
  *(undefined4 *)((int)this + 0x10c) = 0xf;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined1 *)((int)this + 0xf8) = 0;
  local_4 = 8;
  if (0xf < *(uint *)((int)this + 0xf0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xdc));
  }
  *(undefined4 *)((int)this + 0xf0) = 0xf;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  local_4 = 7;
  if (0xf < *(uint *)((int)this + 0xd4)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc0));
  }
  *(undefined4 *)((int)this + 0xd4) = 0xf;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  local_4 = 6;
  if (0xf < *(uint *)((int)this + 0xb8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa4));
  }
  *(undefined4 *)((int)this + 0xb8) = 0xf;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0x9c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x88));
  }
  *(undefined4 *)((int)this + 0x9c) = 0xf;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  local_4 = 4;
  if (0xf < *(uint *)((int)this + 0x7c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x68));
  }
  *(undefined4 *)((int)this + 0x7c) = 0xf;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  local_4 = 3;
  if (0xf < *(uint *)((int)this + 0x60)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  local_4 = 2;
  LoginCommand_RbTree_destroy((void *)((int)this + 0x3c));
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  LoginCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

