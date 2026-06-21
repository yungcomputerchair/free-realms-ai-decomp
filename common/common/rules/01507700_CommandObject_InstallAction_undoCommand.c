// addr: 0x01507700
// name: CommandObject_InstallAction_undoCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_InstallAction_undoCommand(void * this) */

bool __fastcall CommandObject_InstallAction_undoCommand(void *this)

{
  undefined1 uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int originId_;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 uVar7;
  char *fmt;
  
                    /* Undoes a previously installed action by resolving the ActionDB entry and
                       target card, removing the card/game installed-action records, and logging the
                       action id. Returns false if action, target, or origin card is unavailable. */
  Game_logGeneral(*(void **)((int)this + 0x30),"CommandObject_InstallAction::undoCommand",unaff_EDI)
  ;
  pvVar4 = (void *)((int)this + 0x84);
  pvVar2 = EvaluationEnvironment_getGame(pvVar4);
  uVar5 = *(undefined4 *)((int)pvVar2 + 0x20);
  uVar7 = *(undefined4 *)((int)this + 0x124);
  ActionDB_ensureSingleton();
  iVar3 = ActionDB_getAction(uVar7,uVar5);
  if (iVar3 == 0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"couldn\'t get action!",unaff_EDI);
    return false;
  }
  pvVar2 = EvaluationEnvironment_getTargetCard(pvVar4);
  if (pvVar2 == (void *)0x0) {
    fmt = "couldn\'t get target!";
  }
  else {
    pvVar4 = EvaluationEnvironment_getOriginCard(pvVar4);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_01321f20();
      Game_logGeneral(*(void **)((int)this + 0x30),"Removing Action: %d",uVar5);
      iVar6 = *(int *)((int)pvVar2 + 0x48);
      uVar5 = PlayElement_getId();
      uVar5 = FUN_01322200(pvVar2,iVar3,uVar5);
      originId_ = FUN_013221d0(uVar5);
      (**(code **)(iVar6 + 8))();
      iVar6 = *(int *)((int)this + 0x124);
      pvVar4 = (void *)PlayElement_getId();
      Card_removeActionOriginPair(pvVar2,pvVar4,iVar6,originId_);
      iVar6 = **(int **)((int)this + 0x30);
      uVar5 = PlayElement_getId();
      uVar5 = FUN_01322200(pvVar2,iVar3,uVar5);
      uVar5 = FUN_013221d0(uVar5);
      uVar1 = (**(code **)(iVar6 + 8))(uVar5);
      return (bool)uVar1;
    }
    fmt = "couldn\'t get originCard!";
  }
  pvVar4 = (void *)FUN_01340340();
  Game_logGeneral(pvVar4,fmt,unaff_EBX);
  return false;
}

