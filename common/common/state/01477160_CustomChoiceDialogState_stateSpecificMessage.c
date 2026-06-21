// addr: 0x01477160
// name: CustomChoiceDialogState_stateSpecificMessage
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CustomChoiceDialogState_stateSpecificMessage(void * this, int playerId_,
   void * key, void * value) */

uint __thiscall
CustomChoiceDialogState_stateSpecificMessage(void *this,int playerId_,void *key,void *value)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char *fmt;
  int iVar7;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Handles state-specific messages for CustomChoiceDialogState, validating
                       timing/player id and logging message details. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169fa00;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  pvVar3 = ValueData_toString(value,local_28);
  local_4 = 0;
  pvVar4 = ValueData_toString(key,local_44);
  local_4._0_1_ = 1;
  if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
    iVar6 = (int)pvVar3 + 4;
  }
  else {
    iVar6 = *(int *)((int)pvVar3 + 4);
  }
  if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
    iVar5 = (int)pvVar4 + 4;
  }
  else {
    iVar5 = *(int *)((int)pvVar4 + 4);
  }
  fmt = "CustomChoicedialogState::stateSpecificMessage %d, %s, %s";
  iVar7 = playerId_;
  pvVar3 = (void *)StateMachineState_getGame
                             ("CustomChoicedialogState::stateSpecificMessage %d, %s, %s",playerId_,
                              iVar5,iVar6,uVar2);
  Game_logGeneral(pvVar3,fmt,iVar7);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (playerId_ != *(int *)((int)this + 0xf8)) {
    pvVar3 = ValueData_toString(value,local_44);
    local_4 = 2;
    pvVar4 = ValueData_toString(key,local_28);
    local_4._0_1_ = 3;
    if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
      iVar6 = (int)pvVar3 + 4;
    }
    else {
      iVar6 = *(int *)((int)pvVar3 + 4);
    }
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    FUN_012f5dc0("cutomchoicedialog statespecific message came with wrong playerID! %d, %s, %s",
                 playerId_,iVar5,iVar6);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_40 = (void *)((uint)local_40 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_2c = 0xf;
  local_30 = 0;
  if (*(int *)((int)this + 0x124) != 6) {
    pvVar3 = ValueData_toString(value,local_44);
    local_4 = 4;
    pvVar4 = ValueData_toString(key,local_28);
    local_4._0_1_ = 5;
    if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
      iVar6 = (int)pvVar3 + 4;
    }
    else {
      iVar6 = *(int *)((int)pvVar3 + 4);
    }
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    FUN_012f5dc0("customchoicedialog statespecific message came at wrong time! %d, %s, %s",playerId_
                 ,iVar5,iVar6);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_40 = (void *)((uint)local_40 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_2c = 0xf;
  local_30 = 0;
  if (*(int *)((int)key + 4) != 2) {
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = *(int *)((int)key + 8);
  if (iVar6 == 0) {
LAB_014773ed:
    pcVar1 = *(code **)(*(int *)this + 0x3c);
    *(undefined4 *)((int)this + 0x124) = 2;
    uVar2 = (*pcVar1)();
  }
  else {
    if (iVar6 - 1U < 3) {
      *(int *)((int)this + 0x120) = iVar6;
      *(undefined4 *)((int)this + 0x124) = 4;
      if (*(char *)((int)this + 0x129) != '\0') goto LAB_014773ed;
    }
    else {
      *(undefined4 *)((int)this + 0x124) = 5;
    }
    uVar2 = (**(code **)(*(int *)this + 0x3c))();
  }
  ExceptionList = local_c;
  return uVar2;
}

