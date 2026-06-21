// addr: 0x0144f960
// name: FUN_0144f960
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_0144f960(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  uVar2 = get_field_8(pvVar1);
  if (uVar2 != 0) {
    pvVar1 = (void *)StateMachineState_getCurrentTurn();
    get_field_8(pvVar1);
    iVar3 = GamePlayer_getPlayerId();
    if (param_2 != iVar3) {
      uVar2 = (**(code **)(*param_1 + 0x88))();
      return uVar2 & 0xffffff00;
    }
  }
  uVar5 = StateMachineState_getGame
                    (param_3,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  pvVar1 = find_play_element_in_maps((void *)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  piVar4 = (int *)FUN_00d8d382(pvVar1);
  if (piVar4 == (int *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x88))();
    return uVar2 & 0xffffff00;
  }
  iVar3 = (**(code **)(*piVar4 + 0x28))();
  if (iVar3 != param_2) {
    uVar2 = (**(code **)(*param_1 + 0x88))();
    return uVar2 & 0xffffff00;
  }
  uVar2 = DoublePassState_beginCardPlayed(param_2,param_3,param_4);
  return uVar2;
}

