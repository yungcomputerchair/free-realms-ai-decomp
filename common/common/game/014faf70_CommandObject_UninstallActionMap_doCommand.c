// addr: 0x014faf70
// name: CommandObject_UninstallActionMap_doCommand
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall CommandObject_UninstallActionMap_doCommand(int param_1)

{
  int iVar1;
  uint extraout_EAX;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int actionId_;
  int key_;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
                    /* Removes an action from a card/action map, logging the packed action id and
                       reporting failure when no action is present. Evidence: 'Removing Action' and
                       'Couldn’t get action!' strings plus Card_removeAction. */
  if (*(int *)(param_1 + 0x124) == 0) {
    Game_logGeneral(*(void **)(param_1 + 0x30),"Couldn\'t get action!",unaff_ESI);
    return extraout_EAX & 0xffffff00;
  }
  uVar2 = FUN_01321f20();
  uVar2 = PackedActionId_getLow12Bits(uVar2);
  uVar2 = FUN_01321f20(uVar2);
  uVar2 = PackedActionId_getHighBits(uVar2);
  Game_logGeneral(*(void **)(param_1 + 0x30),"Removing Action: %d (%d)",uVar2);
  removeValueFromObjectVector(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x128),unaff_EDI);
  FUN_01321f20();
  pvVar3 = Card_getActionByID(*(void **)(param_1 + 0x128),actionId_);
  if (pvVar3 == *(void **)(param_1 + 0x124)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x124);
    uVar4 = PlayElement_getId();
    uVar2 = FUN_01322200(*(undefined4 *)(param_1 + 0x128),uVar2,uVar4);
    uVar2 = FUN_013221d0(uVar2);
    (**(code **)(iVar1 + 8))(uVar2);
  }
  Card_removeAction(*(void **)(param_1 + 0x128),*(void **)(param_1 + 0x124));
  FUN_01321f20();
  Game_verifyOrUpdateIntKeyEntry(*(void **)(param_1 + 0x30),key_);
  iVar1 = **(int **)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x124);
  uVar4 = PlayElement_getId();
  uVar2 = FUN_01322200(*(undefined4 *)(param_1 + 0x128),uVar2,uVar4);
  uVar2 = FUN_013221d0(uVar2);
  uVar5 = (**(code **)(iVar1 + 8))(uVar2);
  return uVar5;
}

