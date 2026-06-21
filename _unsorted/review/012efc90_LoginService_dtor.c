// addr: 0x012efc90
// name: LoginService_dtor
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginService_dtor(void * this) */

void __fastcall LoginService_dtor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a LoginService instance by installing the LoginService vtable,
                       clearing the global singleton if it points at this object, and releasing a
                       series of small-string-buffer fields. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_01673cbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LoginService::vftable;
  if (DAT_01cbd960 == this) {
    DAT_01cbd960 = (void *)0x0;
  }
  local_4 = 9;
  if (0xf < *(uint *)((int)this + 0x138)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x124));
  }
  *(undefined4 *)((int)this + 0x138) = 0xf;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x124) = 0;
  local_4 = 8;
  if (0xf < *(uint *)((int)this + 0x11c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x108));
  }
  *(undefined4 *)((int)this + 0x11c) = 0xf;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x108) = 0;
  local_4 = 7;
  if (0xf < *(uint *)((int)this + 0x100)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xec));
  }
  *(undefined4 *)((int)this + 0x100) = 0xf;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined1 *)((int)this + 0xec) = 0;
  local_4 = 6;
  if (0xf < *(uint *)((int)this + 0xe4)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xd0));
  }
  *(undefined4 *)((int)this + 0xe4) = 0xf;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0xd0) = 0;
  local_4 = 5;
  if (0xf < *(uint *)((int)this + 0xc4)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xb0));
  }
  *(undefined4 *)((int)this + 0xc4) = 0xf;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  local_4 = 4;
  if (0xf < *(uint *)((int)this + 0xa8)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x94));
  }
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  local_4 = 3;
  if (0xf < *(uint *)((int)this + 0x8c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x78));
  }
  *(undefined4 *)((int)this + 0x8c) = 0xf;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x70)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x5c));
  }
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x38) = 0xf;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  ExceptionList = pvVar1;
  return;
}

