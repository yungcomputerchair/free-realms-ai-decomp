// addr: 0x0136ea70
// name: Game_updateNetworkCommands
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_updateNetworkCommands(void * this) */

void __fastcall Game_updateNetworkCommands(void *this)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *command;
  uint uStack_450;
  undefined1 local_420 [8];
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_40c;
  undefined4 local_408;
  void *local_404;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Updates the NetworkService, then when command dispatch is enabled queues
                       pending game commands to the network, deletes each command object, clears
                       queued commands for the local player, and invokes completion callbacks.
                       Evidence: calls NetworkService_update/queueCommand and
                       Game_getMyPlayerID/clearQueuedCommandsExcept. */
  puStack_3f8 = &LAB_01680873;
  local_3fc = ExceptionList;
  uStack_450 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_450;
  ExceptionList = &local_3fc;
  local_3f4 = 0;
  local_404 = this;
  local_8 = uStack_450;
  pvVar2 = NetworkService_getSingleton();
  NetworkService_update(pvVar2);
  if (*(char *)((int)this + 0x118) == '\x01') {
    iVar3 = Game_getMyPlayerID(this);
    Game_dispatchQueuedCommandsThunk(iVar3);
    local_40c = 0;
    local_418 = 0;
    puVar4 = (undefined4 *)FUN_01351160(local_420);
    local_418 = *puVar4;
    local_414 = puVar4[1];
    puVar4 = (undefined4 *)FUN_01351130(local_420);
    local_40c = *puVar4;
    local_408 = puVar4[1];
    while( true ) {
      cVar1 = FUN_0134d7d0(&local_418);
      if (cVar1 == '\0') break;
      piVar5 = (int *)FUN_0134d7a0();
      puVar4 = (undefined4 *)*piVar5;
      command = puVar4;
      pvVar2 = NetworkService_getSingleton();
      NetworkService_queueCommand(pvVar2,command);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      FUN_013511c0(local_420,0);
    }
    iVar3 = Game_getMyPlayerID(this);
    Game_clearQueuedCommandsExcept(this,iVar3);
    (**(code **)(*(int *)this + 0x5c))();
    (**(code **)(*(int *)this + 0x60))();
  }
  ExceptionList = local_3fc;
  return;
}

