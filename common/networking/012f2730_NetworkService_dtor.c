// addr: 0x012f2730
// name: NetworkService_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkService_dtor(void * this) */

void __fastcall NetworkService_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys NetworkService: disconnects, shuts down Winsock, clears singleton
                       global, and frees host string members. Evidence: NetworkService vtable, calls
                       close/reset helpers, Ordinal_116 WSACleanup-like call, and string cleanup. */
  puStack_8 = &LAB_01674156;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkService::vftable;
  local_4 = 1;
  NetworkService_logout(this);
  NetworkService_closeSocket(this,true);
  Ordinal_116(uVar1);
  if (DAT_01cbd970 == this) {
    DAT_01cbd970 = (void *)0x0;
  }
  local_4 = local_4 & 0xffffff00;
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
  ExceptionList = local_c;
  return;
}

