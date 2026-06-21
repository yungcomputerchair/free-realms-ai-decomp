// addr: 0x01507590
// name: CommandObject_InstallAction_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_InstallAction_doCommand(void * this) */

bool __fastcall CommandObject_InstallAction_doCommand(void *this)

{
  undefined1 uVar1;
  char *formatText;
  char *formatText_00;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_EBP;
  undefined4 unaff_EDI;
  int iVar6;
  
                    /* Installs an action on the target card: resolves target/origin, looks up the
                       action id in ActionDB, appends the installed action to the card and game
                       action containers, and records action bookkeeping. Returns false if target or
                       action lookup fails. */
  Game_logGeneral(*(void **)((int)this + 0x30),"CommandObject_InstallAction::doCommand",unaff_EDI);
  pvVar3 = (void *)((int)this + 0x84);
  formatText = EvaluationEnvironment_getTargetCard(pvVar3);
  if (formatText == (char *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"Couldn\'t get target!",unaff_EDI);
    return false;
  }
  EvaluationEnvironment_logCardMessage(pvVar3,"targetCard: ",formatText,unaff_EBP);
  formatText_00 = EvaluationEnvironment_getOriginCard(pvVar3);
  EvaluationEnvironment_logCardMessage(pvVar3,"originCard: ",formatText_00,unaff_EBP);
  if (formatText_00 == (char *)0x0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"Couldn\'t get originCard!, redirecting to target."
                    ,unaff_EBP);
  }
  uVar2 = PackedActionId_getLow12Bits(*(undefined4 *)((int)this + 0x124));
  uVar2 = PackedActionId_getHighBits(*(undefined4 *)((int)this + 0x124),uVar2);
  Game_logGeneral(*(void **)((int)this + 0x30),"actionID: %d (%d)",uVar2);
  pvVar3 = EvaluationEnvironment_getGame(pvVar3);
  uVar2 = *(undefined4 *)((int)pvVar3 + 0x20);
  uVar5 = *(undefined4 *)((int)this + 0x124);
  ActionDB_ensureSingleton();
  iVar4 = ActionDB_getAction(uVar5,uVar2);
  if (iVar4 == 0) {
    Game_logGeneral(*(void **)((int)this + 0x30),"couldn\'t get action!",unaff_EBP);
    return false;
  }
  iVar6 = *(int *)(formatText + 0x48);
  uVar2 = PlayElement_getId();
  uVar2 = FUN_01322200(formatText,iVar4,uVar2);
  uVar2 = FUN_013221d0(uVar2);
  (**(code **)(iVar6 + 4))(uVar2);
  uVar2 = *(undefined4 *)((int)this + 0x124);
  uVar5 = PlayElement_getId(uVar2);
  FUN_013995b0(uVar5,uVar2);
  iVar6 = **(int **)((int)this + 0x30);
  uVar2 = PlayElement_getId();
  uVar2 = FUN_01322200(formatText,iVar4,uVar2);
  uVar2 = FUN_013221d0(uVar2);
  uVar1 = (**(code **)(iVar6 + 4))(uVar2);
  return (bool)uVar1;
}

