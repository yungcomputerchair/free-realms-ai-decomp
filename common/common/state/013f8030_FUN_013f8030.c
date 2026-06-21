// addr: 0x013f8030
// name: FUN_013f8030
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013f8030(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168f90b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    uVar3 = GamePlayer_getPlayerId(uVar2);
    Game_logGeneral(*(void **)(param_1 + 4),"setActivePlayer %d",uVar3);
  }
  cVar1 = Game_shouldLogCommands();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      GamePlayer_getPlayerId(uVar2);
    }
    if (param_2 != 0) {
      GamePlayer_getPlayerId(uVar2);
    }
    TimeStamp_setCurrentFtime(local_14);
    WAErrorLog_write("%d: setActivePlayer: new: %d, old: %d");
  }
  if (*(int *)(param_1 + 4) != 0) {
    cVar1 = Game_shouldNotifyActivePlayerChanges();
    if (((cVar1 != '\0') && (*(int *)(param_1 + 8) != param_2)) &&
       (*(int *)(param_1 + 8) = param_2, param_2 != 0)) {
      iVar5 = **(int **)(param_1 + 4);
      uVar3 = GamePlayer_getPlayerId(uVar2);
      (**(code **)(iVar5 + 0x58))(uVar3);
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    pvVar4 = Mem_Alloc(0x14);
    uStack_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x7f);
    iVar5 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar4,iVar5);
    iVar5 = GamePlayer_getPlayerId();
    DisplayActionBuilder_addIntArg(pvVar4,iVar5);
    (**(code **)(**(int **)(param_1 + 4) + 0x154))(pvVar4);
  }
  ExceptionList = local_c;
  return;
}

