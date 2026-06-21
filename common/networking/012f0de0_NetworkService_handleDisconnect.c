// addr: 0x012f0de0
// name: NetworkService_handleDisconnect
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_handleDisconnect(void * this, bool
   suppressLostConnectionNotice_) */

int __thiscall NetworkService_handleDisconnect(void *this,bool suppressLostConnectionNotice_)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a lost/disconnected socket by closing it, setting disconnected/error
                       state, and posting display actions for connection loss. Evidence: called from
                       connected-state failures, closes socket, sets state 7, and emits display
                       actions 0x13/0x89. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673f06;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  NetworkService_closeSocket(this,true);
  NetworkService_setConnectionState(this,7);
  DisplayActionManager_ensureSingleton();
  if (!suppressLostConnectionNotice_) {
    pvVar2 = Mem_Alloc(0x14);
    uVar3 = 0;
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x13);
    FUN_012d3550(uVar3);
  }
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x89);
  uVar3 = FUN_012d3550(uVar3);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

