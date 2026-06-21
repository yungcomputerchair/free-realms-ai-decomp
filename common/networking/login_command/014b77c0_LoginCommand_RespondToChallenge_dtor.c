// addr: 0x014b77c0
// name: LoginCommand_RespondToChallenge_dtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_dtor(void * this) */

void __fastcall LoginCommand_RespondToChallenge_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LoginCommand_RespondToChallenge: installs the class vftable,
                       releases many string members, destroys the embedded tree container, and calls
                       the base destructor. The vftable symbol identifies the class. */
  puStack_8 = &LAB_016a84a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_RespondToChallenge::vftable;
  local_4 = 10;
  if (0xf < *(uint *)((int)this + 0x134)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x120));
  }
  *(undefined4 *)((int)this + 0x134) = 0xf;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x120) = 0;
  local_4 = 9;
  if (0xf < *(uint *)((int)this + 0x118)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x104));
  }
  *(undefined4 *)((int)this + 0x118) = 0xf;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  local_4 = 8;
  if (0xf < *(uint *)((int)this + 0xfc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xe8));
  }
  *(undefined4 *)((int)this + 0xfc) = 0xf;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0xe8) = 0;
  local_4 = 7;
  if (0xf < *(uint *)((int)this + 0xe0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xcc));
  }
  *(undefined4 *)((int)this + 0xe0) = 0xf;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xcc) = 0;
  local_4 = 6;
  if (0xf < *(uint *)((int)this + 0xc4)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xb0));
  }
  *(undefined4 *)((int)this + 0xc4) = 0xf;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0xa8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x94));
  }
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  local_4 = 4;
  if (0xf < *(uint *)((int)this + 0x8c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x78));
  }
  *(undefined4 *)((int)this + 0x8c) = 0xf;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  local_4 = 3;
  if (0xf < *(uint *)((int)this + 0x70)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x5c));
  }
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_4 = 0;
  LoginCommand_RbTree_destroy((void *)((int)this + 0x14));
  LoginCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

