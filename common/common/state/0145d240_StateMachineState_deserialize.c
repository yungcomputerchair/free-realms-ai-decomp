// addr: 0x0145d240
// name: StateMachineState_deserialize
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0145d4a6) */
/* WARNING: Removing unreachable block (ram,0x0145d4b6) */
/* WARNING: Removing unreachable block (ram,0x0145d4cd) */
/* WARNING: Removing unreachable block (ram,0x0145d4e1) */
/* Setting prototype: void StateMachineState_deserialize(void * this, void * buffer) */

void __thiscall StateMachineState_deserialize(void *this,void *buffer)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  uint *outValue;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  void *pvStack_4c;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [4];
  void *pvStack_30;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Reads a StateMachineState from a packet/archive, asserting each read
                       succeeds, reconstructing referenced machine/game state, nested string/list
                       members, and then invoking a post-load virtual hook. Evidence is the
                       StateMachineState.cpp assertions and repeated PacketBuffer read calls. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169cd8b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&iStack_64;
  ExceptionList = &local_c;
  outValue = buffer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(buffer,&local_5c,DAT_01b839d8 ^ (uint)&stack0xffffff8c)
  ;
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x37e);
  }
  bVar2 = Deserializer_readInteger(buffer,&iStack_58);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x381);
  }
  pvVar3 = Game_findByID(iStack_58);
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60(&DAT_018e78cc,"..\\common\\common\\state\\StateMachineState.cpp",899);
  }
  if (*(int *)((int)this + 8) == 0) {
    pvVar3 = Game_getCurrentTurn(pvVar3);
    pvVar3 = GameTurn_getCurrentStateMachine(pvVar3);
    *(void **)((int)this + 8) = pvVar3;
  }
  bVar2 = Deserializer_readInteger(buffer,(int *)((int)this + 0xec));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x389);
  }
  bVar2 = Deserializer_readInteger(buffer,&iStack_60);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x38c);
  }
  if (iStack_60 != 0) {
    iVar4 = FUN_013f3130(iStack_60);
    *(int *)((int)this + 4) = iVar4;
    if (iVar4 == 0) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x390);
    }
  }
  bVar2 = Deserializer_readInteger(buffer,(int *)((int)this + 0xc));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x395);
  }
  bVar2 = Deserializer_readInteger(buffer,&iStack_54);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x398);
  }
  *(int *)((int)this + 0x10) = iStack_54;
  bVar2 = Deserializer_readInteger(buffer,(int *)((int)this + 0x14));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x39c);
  }
  bVar2 = Deserializer_readInteger(buffer,(int *)&stack0xffffff98);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x39f);
  }
  *(undefined4 *)((int)this + 0x18) = unaff_EBX;
  bVar2 = Deserializer_readString(buffer,(void *)((int)this + 0x1c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3a3);
  }
  bVar2 = Deserializer_readString(buffer,(void *)((int)this + 0x38));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3a6);
  }
  if (iStack_64 < 10) {
    PacketBuffer_readPackedUInt(buffer,&stack0xffffff94,outValue);
    puStack_1c = (undefined1 *)0xf;
    uStack_20 = 0;
    pvStack_30 = (void *)((uint)pvStack_30 & 0xffffff00);
    uStack_38 = 0xf;
    uStack_3c = 0;
    pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
    local_c = (void *)0x1;
    bVar2 = Deserializer_readString(buffer,auStack_34);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3b6);
    }
    bVar2 = Deserializer_readString(buffer,auStack_50);
    if (!bVar2) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3b9);
    }
    local_c = (void *)((uint)local_c & 0xffffff00);
    if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4c);
    }
    uStack_38 = 0xf;
    uStack_3c = 0;
    pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
    local_c = (void *)0xffffffff;
    if (0xf < puStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    puStack_1c = &DAT_0000000f;
    uStack_20 = 0;
    pvStack_30 = (void *)((uint)pvStack_30 & 0xffffff00);
  }
  else {
    cVar1 = (**(code **)(*(int *)((int)this + 0x54) + 0x24))(buffer);
    if (cVar1 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3bd);
    }
    cVar1 = (**(code **)(*(int *)((int)this + 0x70) + 0x24))(buffer);
    if (cVar1 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3c0);
    }
  }
  bVar2 = Deserializer_readString(buffer,(void *)((int)this + 0x8c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3c4);
  }
  bVar2 = Deserializer_readString(buffer,(void *)((int)this + 0xa8));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3c7);
  }
  bVar2 = Deserializer_readString(buffer,(void *)((int)this + 0xc4));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3ca);
  }
  bVar2 = Deserializer_readInteger(buffer,(int *)((int)this + 0xe0));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3cd);
  }
  bVar2 = Deserializer_readInteger(buffer,&local_5c);
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3d0);
  }
  *(bool *)((int)this + 0xe4) = local_5c != 0;
  if (*(int *)((int)this + 0xe8) == 0) {
    pvVar3 = Mem_Alloc(0x94);
    local_c = (void *)0x2;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = EvaluationEnvironment_ctor();
    }
    local_c = (void *)0xffffffff;
    *(undefined4 *)((int)this + 0xe8) = uVar5;
  }
  cVar1 = (**(code **)(**(int **)((int)this + 0xe8) + 0x24))(buffer);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachineState.cpp",0x3d7);
  }
  StateMachine_setCurrentEnvironment(*(undefined4 *)((int)this + 0xe8));
  (**(code **)(*(int *)this + 0x14))(buffer);
  ExceptionList = puStack_1c;
  return;
}

