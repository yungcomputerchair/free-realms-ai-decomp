// addr: 0x01470690
// name: GetTopCardState_stateSpecificMessage
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0147078e) */
/* Setting prototype: uint GetTopCardState_stateSpecificMessage(void * this, int playerId_, void *
   key, void * value) */

uint __thiscall GetTopCardState_stateSpecificMessage(void *this,int playerId_,void *key,void *value)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *fmt;
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
  
                    /* Handles GetTopCardState-specific messages, logging player/key/value and
                       creating follow-up state-machine responses. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169eedb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  pvVar2 = ValueData_toString(value,local_28);
  local_4 = 0;
  pvVar3 = ValueData_toString(key,local_44);
  local_4._0_1_ = 1;
  if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
    iVar7 = (int)pvVar2 + 4;
  }
  else {
    iVar7 = *(int *)((int)pvVar2 + 4);
  }
  if (*(uint *)((int)pvVar3 + 0x18) < 0x10) {
    iVar4 = (int)pvVar3 + 4;
  }
  else {
    iVar4 = *(int *)((int)pvVar3 + 4);
  }
  fmt = "GetTopCardState::stateSpecificMessage %d, %s, %s";
  pvVar2 = (void *)StateMachineState_getGame
                             ("GetTopCardState::stateSpecificMessage %d, %s, %s",playerId_,iVar4,
                              iVar7,uVar1);
  Game_logGeneral(pvVar2,fmt,playerId_);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_2c < 0x10) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    local_4 = 0xffffffff;
    if (local_10 < 0x10) {
      local_10 = 0xf;
      uVar6 = 0;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      if (*(int *)((int)key + 4) == 2) {
        uVar6 = *(undefined4 *)((int)key + 8);
      }
      uVar8 = 1;
      switch(*(undefined4 *)((int)this + 0xf8)) {
      case 3:
        uVar8 = 2;
        break;
      case 0x3a:
        uVar8 = 0x36;
        break;
      case 0x3b:
        uVar8 = 0x37;
      }
      pvVar2 = Mem_Alloc(0x18);
      local_4 = 2;
      if (pvVar2 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = ReturnValueMap_ctor();
      }
      local_4 = 0xffffffff;
      ReturnValueMap_setInteger(uVar8,uVar6);
      StateMachine_pushPendingState(uVar5);
      ExceptionList = local_c;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}

