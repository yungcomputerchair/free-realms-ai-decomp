// addr: 0x012f23e0
// name: NetworkService_updateConnected
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_updateConnected(void * this) */

int __fastcall NetworkService_updateConnected(void *this)

{
  int iVar1;
  int iVar2;
  
                    /* Main connected-state update: polls socket readiness, flushes outgoing data,
                       reads incoming bytes, processes queued packets until exhausted, and
                       disconnects on socket errors. Evidence: calls pollSocketReady,
                       flushSendBuffer, readSocket, and NetworkCommandStream_processNextPacket. */
  iVar1 = NetworkService_pollSocketReady(this);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
LAB_012f245d:
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    iVar1 = NetworkService_flushSendBuffer(this);
    if (iVar1 == -1) {
      iVar1 = NetworkService_handleDisconnect(this,false);
      return iVar1;
    }
    iVar1 = NetworkService_readSocket(this);
    while (iVar1 == 0x1000) {
      iVar1 = NetworkService_readSocket(this);
    }
    if (iVar1 != -1) {
      iVar2 = 0;
      iVar1 = *(int *)((int)this + 0x54);
      while ((0 < iVar1 && (iVar2 == 0))) {
        iVar2 = NetworkCommandStream_processNextPacket(this);
        iVar1 = *(int *)((int)this + 0x54);
      }
      iVar1 = NetworkService_flushSendBuffer(this);
      if (iVar1 != -1) goto LAB_012f245d;
    }
  }
  iVar1 = NetworkService_handleDisconnect(this,false);
  return iVar1;
}

