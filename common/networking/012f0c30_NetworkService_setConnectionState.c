// addr: 0x012f0c30
// name: NetworkService_setConnectionState
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkService_setConnectionState(void * this, int state_) */

void __thiscall NetworkService_setConnectionState(void *this,int state_)

{
  int iVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Updates NetworkService connection state and, when entering the connected
                       state, flushes pending queued bytes and emits a RequestData/status command if
                       the state changed. Evidence: stores offset 0x68, moves pending buffer to send
                       buffer for state 5, constructs NetworkCommand_RequestData with code 0x9f3. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)((int)this + 0x68);
  *(int *)((int)this + 0x68) = state_;
  if (state_ == 5) {
    if (*(void **)((int)this + 0x60) != (void *)0x0) {
      NetworkService_appendBuffer
                ((char **)((int)this + 0x58),(int *)((int)this + 0x5c),*(void **)((int)this + 0x60),
                 *(uint *)((int)this + 100));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x60));
    }
    *(undefined4 *)((int)this + 100) = 0;
    if (iVar1 != state_) {
      NetworkCommand_RequestData_ctor(local_14);
      local_4 = 0;
      NetworkError_setCode(local_14,0x9f3);
      NetworkService_queueCommand(this,local_14);
      local_4 = 0xffffffff;
      NetworkCommand_RequestData_dtor(local_14);
    }
  }
  ExceptionList = local_c;
  return;
}

