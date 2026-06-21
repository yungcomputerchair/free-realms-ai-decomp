// addr: 0x013f10f0
// name: StateMachine_dispatchUserInput
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachine_dispatchUserInput(void * this, int inputType_, void *
   inputData) */

int __thiscall StateMachine_dispatchUserInput(void *this,int inputType_,void *inputData)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  undefined4 extraout_EAX_08;
  undefined4 extraout_EAX_09;
  undefined4 extraout_EAX_10;
  int iVar4;
  undefined4 uVar5;
  
                    /* Dispatches a user-input event by input type to the appropriate StateMachine
                       virtual/input handler, logging when the input type is unknown. */
  bVar1 = unknown_getGameGuardFlag(*(void **)((int)this + 4));
  if (!bVar1) {
    switch(inputType_) {
    case 1:
      uVar3 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013ef980(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX,uVar3);
      return iVar4;
    case 2:
      uVar3 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013ef9b0(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_00,uVar3);
      return iVar4;
    default:
      Game_logGeneral(*(void **)((int)this + 4),"Couldn\'t find UserInput Type %d",inputType_);
switchD_013f1118_caseD_11:
      iVar4 = (**(code **)(*(int *)this + 0x3c))(0);
      return iVar4;
    case 4:
      uVar3 = *(undefined4 *)((int)inputData + 8);
      uVar5 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013efb40(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_01,uVar5,uVar3);
      return iVar4;
    case 5:
      uVar3 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013efb70(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_02,uVar3);
      return iVar4;
    case 6:
      uVar3 = StateMachine_cardDeselected(this,*(undefined4 *)inputData);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(uVar3);
      return iVar4;
    case 7:
      uVar3 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013efbd0(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_03,uVar3);
      return iVar4;
    case 8:
      uVar3 = *(undefined4 *)((int)inputData + 8);
      uVar5 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013efc00(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_04,uVar5,uVar3);
      return iVar4;
    case 9:
      StateMachine_sub_013efa20(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_05);
      return iVar4;
    case 10:
      StateMachine_sub_013efa50(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_06);
      return iVar4;
    case 0xb:
      uVar3 = StateMachine_buttonPressedWithText(this,*(undefined4 *)((int)inputData + 4));
      iVar4 = (**(code **)(*(int *)this + 0x3c))(uVar3);
      return iVar4;
    case 0xc:
      iVar4 = (int)inputData + 8;
      uVar3 = StateMachine_buttonPressedWithTextAndRevealID
                        (this,*(undefined4 *)((int)inputData + 4));
      iVar4 = (**(code **)(*(int *)this + 0x3c))(uVar3,iVar4);
      return iVar4;
    case 0xd:
      uVar3 = *(undefined4 *)((int)inputData + 8);
      uVar5 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013efae0(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_07,uVar5,uVar3);
      return iVar4;
    case 0xe:
      StateMachine_sub_013efb10(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_08);
      return iVar4;
    case 0xf:
      uVar3 = *(undefined4 *)((int)inputData + 4);
      StateMachine_sub_013ef950(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_09,uVar3);
      return iVar4;
    case 0x10:
      StateMachine_sub_013efc30(this);
      iVar4 = (**(code **)(*(int *)this + 0x3c))(extraout_EAX_10);
      return iVar4;
    case 0x11:
      goto switchD_013f1118_caseD_11;
    case 0x12:
      piVar2 = Game_getCurrentTurn(*(void **)((int)this + 4));
      uVar3 = (**(code **)(*piVar2 + 0x4c))(*(undefined4 *)((int)inputData + 4));
      iVar4 = (**(code **)(*(int *)this + 0x3c))(uVar3);
      return iVar4;
    }
  }
  return CONCAT31(extraout_var,1);
}

