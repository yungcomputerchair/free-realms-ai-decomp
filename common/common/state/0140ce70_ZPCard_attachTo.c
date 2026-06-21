// addr: 0x0140ce70
// name: ZPCard_attachTo
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall ZPCard_attachTo(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *unaff_EBX;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Implements the operation identified by referenced string 'DOING ATTACHTO'. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169209b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0,
                       DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  uVar3 = PlayElement_getId();
  uVar3 = PlayElement_getId(uVar3);
  Game_logGeneral((void *)param_1[0xc],"ZPCard::attachTo card: %d, dest: %d",uVar3);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x128))(param_2);
  }
  else {
    pvVar4 = Mem_Alloc(0x14);
    this = (void *)0x0;
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      this = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x73);
    iVar1 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(this,iVar1);
    iVar1 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(this,iVar1);
    iVar1 = (**(code **)(*param_1 + 0x30))();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x30))();
      iVar1 = PlayElement_getId();
    }
    DisplayActionBuilder_addIntArg(this,iVar1);
    iVar1 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(this,iVar1);
    DisplayActionBuilder_addIntArg(this,1);
    (**(code **)(*(int *)param_1[0xc] + 0x154))();
    uVar3 = (**(code **)(*param_1 + 0x30))();
    iVar1 = FUN_00d8d382(uVar3,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      Game_logGeneral((void *)param_1[0xc],"DOING ATTACHTO",this);
      (**(code **)(*(int *)param_1[0xc] + 0x168))(param_1);
    }
    PlayElement_changeParent(param_2,1);
    (**(code **)(*param_1 + 0x6c))(param_2,uVar2);
    uVar2 = 1;
  }
  ExceptionList = unaff_EBX;
  return uVar2;
}

