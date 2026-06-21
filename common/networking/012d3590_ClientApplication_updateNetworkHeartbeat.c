// addr: 0x012d3590
// name: ClientApplication_updateNetworkHeartbeat
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_updateNetworkHeartbeat(void * this, int
   elapsedSeconds_) */

void __thiscall ClientApplication_updateNetworkHeartbeat(void *this,int elapsedSeconds_)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Accumulates heartbeat time, posts a warning after 60 seconds without server
                       response, and queues a NetworkCommand_Ping when networking is active.
                       Evidence: warning string mentions 60 seconds without server response and the
                       function constructs/queues NetworkCommand_Ping. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670253;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + elapsedSeconds_;
  if (*(int *)((int)this + 0x5c) == 0x3c) {
    elapsedSeconds_ = (int)Mem_Alloc(0x14);
    this_00 = (void *)0x0;
    local_4 = 0;
    if ((void *)elapsedSeconds_ != (void *)0x0) {
      this_00 = (void *)FUN_012f9eb0(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x18);
    DisplayActionBuilder_addCStringArg
              (this_00,
               "60 seconds have elapsed without a response from the server, you may have lost your connection, in which case you will need to reconnect."
              );
    iVar1 = *(int *)((int)this + 0x14);
    elapsedSeconds_ = (int)this_00;
    iVar3 = FUN_012d1bc0(iVar1,*(undefined4 *)(iVar1 + 4),&elapsedSeconds_);
    FUN_012d2590(1);
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  if (*(int *)((int)this + 4) != 0) {
    NetworkCommand_Ping_ctor(local_14);
    local_4 = 1;
    if (*(void **)((int)this + 8) != (void *)0x0) {
      NetworkService_queueCommand(*(void **)((int)this + 8),local_14);
    }
    local_4 = 0xffffffff;
    NetworkCommand_Ping_dtor(local_14);
  }
  ExceptionList = local_c;
  return;
}

