// addr: 0x014b9d80
// name: LoginCommand_DisplayMOTD_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_DisplayMOTD_dtor(void * this) */

void __fastcall LoginCommand_DisplayMOTD_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Non-deleting destructor for LoginCommand_DisplayMOTD; frees two string
                       members and calls LoginCommand_dtor. */
  puStack_8 = &LAB_016a8b3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginCommand_DisplayMOTD::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x40)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  LoginCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

