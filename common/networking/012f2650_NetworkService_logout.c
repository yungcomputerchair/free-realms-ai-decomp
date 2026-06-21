// addr: 0x012f2650
// name: NetworkService_logout
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void NetworkService_logout(void * this) */

void __fastcall NetworkService_logout(void *this)

{
  uint uVar1;
  int iVar2;
  undefined1 local_30 [32];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Queues a NetworkCommand_Disconnect with reason "logout", flushes the send
                       buffer several times, switches back to gateway/default endpoint handling,
                       resets state to idle, and clears pending data. Evidence: referenced string
                       'logout' and calls Disconnect ctor/setReason/queueCommand/flushSendBuffer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674118;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_30;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 != 0) {
    NetworkCommand_Disconnect_ctor(local_30);
    local_4 = 0;
    NetworkCommand_Disconnect_setReason(local_30,"logout");
    NetworkService_queueCommand(this,local_30);
    NetworkService_flushSendBuffer(this);
    NetworkService_flushSendBuffer(this);
    NetworkService_flushSendBuffer(this);
    NetworkService_useGatewayEndpoint(this);
    NetworkService_setConnectionState(this,0);
    if (*(void **)((int)this + 0x60) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x60));
    }
    *(undefined4 *)((int)this + 100) = 0;
    local_4 = 0xffffffff;
    NetworkCommand_Disconnect_dtor(local_30);
  }
  ExceptionList = local_c;
  return;
}

