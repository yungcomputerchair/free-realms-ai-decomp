// addr: 0x014127b0
// name: HandleResponseState_getPushClass
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall HandleResponseState_getPushClass(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'HandleResponseState::getPushClass %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692a36;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pcVar3 = "HandleResponseState::getPushClass %d";
  uVar4 = param_2;
  pvVar2 = (void *)StateMachineState_getGame("HandleResponseState::getPushClass %d",param_2,uVar1);
  Game_logGeneral(pvVar2,pcVar3,uVar4);
  switch(param_2) {
  case 0xf7:
    pvVar2 = Mem_Alloc(0xfc);
    local_4 = 0xf;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = PlayCardState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  default:
    pcVar3 = "Couldn\'t get pushClass %d";
    pvVar2 = (void *)StateMachineState_getGame("Couldn\'t get pushClass %d",param_2,uVar1);
    Game_logGeneral(pvVar2,pcVar3,param_2);
    ExceptionList = local_c;
    return (void *)0x0;
  case 0xfa:
    EvaluationEnvironment_setTarget1Return(1);
    pvVar2 = Mem_Alloc(0x13c);
    local_4 = 5;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = GetTargetState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0xfb:
    pvVar2 = Mem_Alloc(0x19c);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = ActionPlayedState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0xfe:
    pvVar2 = Mem_Alloc(0x178);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = MultiActionState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0xff:
    *(undefined4 *)(param_1 + 0x120) = 8;
    pvVar2 = Mem_Alloc(0x15c);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = RevealState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x100:
    pvVar2 = Mem_Alloc(0x148);
    local_4 = 4;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)ChainedActionState_ctorWithMachine(*(undefined4 *)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x102:
    pvVar2 = Mem_Alloc(300);
    local_4 = 6;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)CustomChoiceDialogState_ctorWithMachine(*(undefined4 *)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x103:
    pvVar2 = Mem_Alloc(0x128);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = MultiPlayerState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x113:
    pvVar2 = Mem_Alloc(0x194);
    local_4 = 7;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = AlternateMultiActionState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x136:
    pvVar2 = Mem_Alloc(0x114);
    local_4 = 8;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = ReshuffleState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x13d:
    pvVar2 = Mem_Alloc(0x108);
    local_4 = 9;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)CloneState_ctorWithMachine(*(undefined4 *)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x13e:
    pvVar2 = Mem_Alloc(0x14c);
    local_4 = 10;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = PickListState_ctorWithMachine(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x14a:
    pvVar2 = Mem_Alloc(0x128);
    local_4 = 0xb;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)DiscardCardState_ctorWithMachine(*(undefined4 *)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x14b:
    pvVar2 = Mem_Alloc(0x108);
    local_4 = 0xc;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = PlaySingleCardState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x16d:
    pvVar2 = Mem_Alloc(0x128);
    local_4 = 0xd;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DrawCardState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x174:
    pvVar2 = Mem_Alloc(0xf8);
    local_4 = 0xe;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = IntroduceCardState_ctorWithMachine(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x196:
    pvVar2 = Mem_Alloc(0x13c);
    local_4 = 0x10;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = WhileState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0x1b4:
    pvVar2 = Mem_Alloc(0xfc);
    local_4 = 0x11;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = GetTopCardState_copy_ctor(pvVar2,*(void **)(param_1 + 8));
      ExceptionList = local_c;
      return pvVar2;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

