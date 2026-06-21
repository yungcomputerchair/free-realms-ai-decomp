// addr: 0x014698a0
// name: MultiPlayerState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MultiPlayerState_updateState(void * this) */

int __fastcall MultiPlayerState_updateState(void *this)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
                    /* Updates MultiPlayerState through initial, do-effect, and finish phases,
                       logging invalid or phase-specific transitions. */
  uVar4 = *(undefined4 *)((int)this + 0x104);
  switch(uVar4) {
  case 0:
  case 2:
    pcVar7 = "MultiPlayerState::updateState - invalidState %d";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar7,uVar4);
    return 2;
  case 1:
    pcVar7 = "MultiPlayerState::updateState - Initial State";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar7,unaff_ESI);
    puVar3 = (undefined4 *)FUN_014693d0(local_18);
    *(undefined4 *)((int)this + 0x118) = *puVar3;
    *(undefined4 *)((int)this + 0x11c) = puVar3[1];
    *(undefined4 *)((int)this + 0x120) = puVar3[2];
    pcVar1 = *(code **)(*(int *)this + 0x3c);
    *(undefined4 *)((int)this + 0x104) = 3;
    iVar5 = (*pcVar1)();
    return iVar5;
  case 3:
    break;
  case 4:
    pcVar7 = "MultiPlayerState::updateState - finish";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar7,unaff_ESI);
    return 1;
  default:
    return 2;
  }
  pcVar7 = "MultiPlayerState::updateState - do Effect";
  pvVar6 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar6,pcVar7,unaff_ESI);
  uVar4 = FUN_01469400(local_c);
  cVar2 = FUN_014694a0((int)this + 0x118,uVar4);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*(int *)this + 0x3c);
    *(undefined4 *)((int)this + 0x104) = 4;
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  *(undefined4 *)((int)this + 0x104) = 3;
  iVar5 = MultiPlayerState_doEffect();
  return iVar5;
}

