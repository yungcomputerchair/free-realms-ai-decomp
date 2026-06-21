// addr: 0x014b6590
// name: LoginCommand_Results_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_Results_dtor(void * this) */

void __fastcall LoginCommand_Results_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for LoginCommand_Results; frees a vector/buffer
                       member and a string member before LoginCommand_dtor. */
  puStack_8 = &LAB_016a811e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_Results::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x40)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0xffffffff;
  LoginCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

