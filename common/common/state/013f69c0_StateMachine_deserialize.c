// addr: 0x013f69c0
// name: StateMachine_deserialize
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x013f70b7) */
/* WARNING: Removing unreachable block (ram,0x013f70c7) */
/* WARNING: Removing unreachable block (ram,0x013f70de) */
/* WARNING: Removing unreachable block (ram,0x013f70f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void StateMachine_deserialize(void * this, void * buffer) */

void __thiscall StateMachine_deserialize(void *this,void *buffer)

{
  uint *puVar1;
  rsize_t _DstSize;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *extraout_EAX;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *unaff_EBP;
  undefined4 unaff_ESI;
  uint *outValue;
  undefined4 *local_ac;
  undefined4 *puStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [4];
  undefined4 *local_98;
  undefined1 auStack_94 [4];
  undefined4 *puStack_90;
  int *piStack_8c;
  undefined4 *puStack_88;
  uint uStack_84;
  int iStack_80;
  void *pvStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  int *piStack_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  uint uStack_5c;
  int iStack_58;
  void *pvStack_54;
  undefined1 auStack_50 [4];
  void *local_4c;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [4];
  void *pvStack_30;
  undefined4 uStack_20;
  uint uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a StateMachine, rebuilding the state stack map, current state
                       stack, persistent StateMachineState objects, sentinel values, and multiple
                       saved state lists from a packet/archive. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168f81c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_ac;
  ExceptionList = &local_c;
  local_4c = buffer;
  outValue = buffer;
  local_ac = this;
  cVar4 = (**(code **)(*(int *)this + 0x10))(buffer,&local_98,DAT_01b839d8 ^ (uint)&stack0xffffff44)
  ;
  if (cVar4 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x374);
  }
  bVar5 = Deserializer_readInteger(buffer,&iStack_58);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x377);
  }
  if (*(int *)((int)this + 4) == 0) {
    pvVar6 = Game_findByID(iStack_58);
    *(void **)((int)this + 4) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x37b);
    }
  }
  FUN_005258fb();
  local_c = (void *)0x0;
  FUN_01365f40();
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  puStack_a8 = buffer;
  uVar7 = Game_deserializeIntPairVector_01300190(&puStack_a8,auStack_9c);
  if ((char)uVar7 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x387);
  }
  puStack_a8 = buffer;
  cVar4 = FUN_0135d780(&puStack_90);
  if (cVar4 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x38d);
  }
  puStack_a8 = buffer;
  Deserializer_readIntegerVector(&puStack_a8,&pvStack_7c);
  piStack_68 = local_98;
  local_ac = (undefined4 *)*local_98;
  while( true ) {
    puVar12 = local_ac;
    if (&stack0x00000000 == (undefined1 *)0x9c) {
      FUN_00d83c2d();
    }
    if (puVar12 == piStack_68) break;
    ComponentFactory_initSingleton();
    puStack_a8 = extraout_EAX;
    if (&stack0x00000000 == (undefined1 *)0x9c) {
      FUN_00d83c2d();
    }
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    puVar1 = puVar12 + 3;
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    uStack_84 = StateMachine_getOrCreateStateEntry(puVar1);
    uVar8 = (**(code **)*puStack_a8)
                      (puVar12[4],0,&PersistentComponent::RTTI_Type_Descriptor,
                       &StateMachineState::RTTI_Type_Descriptor,0);
    uVar8 = FUN_00d8d382(uVar8);
    *puStack_88 = uVar8;
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    piVar9 = (int *)StateMachine_getOrCreateStateEntry(puVar1);
    if (*piVar9 == 0) {
      FUN_012f5a60("mStateStackMap[smIter->first]","..\\common\\common\\state\\StateMachine.cpp",
                   0x399);
    }
    if ((puVar12 == local_98) && (FUN_00d83c2d(), puVar12 == local_98)) {
      FUN_00d83c2d();
    }
    puVar10 = (undefined4 *)StateMachine_getOrCreateStateEntry(puVar1);
    set_field_ec((void *)*puVar10,*puVar1);
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    puVar10 = (undefined4 *)StateMachine_getOrCreateStateEntry(puVar1);
    (**(code **)(*(int *)*puVar10 + 0x50))(unaff_ESI);
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    puVar10 = (undefined4 *)StateMachine_getOrCreateStateEntry(puVar1);
    get_field_1c_address((void *)*puVar10);
    if (puVar12 == local_98) {
      FUN_00d83c2d();
    }
    Game_logGeneral((void *)unaff_EBP[1],"stateID: %d, Statename: %s",*puVar1);
    FUN_004d21f9();
    this = unaff_EBP;
  }
  pvVar6 = *(void **)((int)this + 0x10);
  if (pvVar6 < *(void **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)((int)this + 0xc);
  if (*(void **)((int)this + 0x10) < _Dst) {
    FUN_00d83c2d();
  }
  piVar9 = this;
  if (_Dst != pvVar6) {
    iVar11 = *(int *)((int)this + 0x10) - (int)pvVar6 >> 2;
    _DstSize = iVar11 * 4;
    if (0 < iVar11) {
      _memmove_s(_Dst,_DstSize,pvVar6,_DstSize);
    }
    *(void **)((int)this + 0x10) = (void *)(_DstSize + (int)_Dst);
    piVar9 = unaff_EBP;
  }
  uStack_84 = uStack_74;
  if (uStack_74 < uStack_78) {
    FUN_00d83c2d();
  }
  uVar7 = uStack_78;
  if (uStack_74 < uStack_78) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x7c) {
      FUN_00d83c2d();
    }
    if (uVar7 == uStack_84) break;
    if (&stack0x00000000 == (undefined1 *)0x7c) {
      FUN_00d83c2d();
    }
    if (uStack_74 <= uVar7) {
      FUN_00d83c2d();
    }
    piVar9 = (int *)FUN_013f2ab0(&puStack_a8,uVar7);
    puVar12 = (undefined4 *)piVar9[1];
    piStack_68 = (int *)unaff_EBP[0x43];
    if (((int *)*piVar9 == (int *)0x0) || ((int *)*piVar9 != unaff_EBP + 0x42)) {
      FUN_00d83c2d();
    }
    if (puVar12 == piStack_68) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3a7);
    }
    if (uStack_74 <= uVar7) {
      FUN_00d83c2d();
    }
    puVar12 = (undefined4 *)StateMachine_getOrCreateStateEntry(uVar7);
    uVar2 = *(uint *)((int)this + 0xc);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)this + 0x14) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)this + 0x10) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)this + 0x10);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      FUN_013f55d0(auStack_60,(int *)((int)this + 8),uVar3,puVar12);
    }
    else {
      puVar10 = *(undefined4 **)((int)this + 0x10);
      *puVar10 = *puVar12;
      *(undefined4 **)((int)this + 0x10) = puVar10 + 1;
    }
    if (uStack_74 <= uVar7) {
      FUN_00d83c2d();
    }
    uVar7 = uVar7 + 4;
    piVar9 = unaff_EBP;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  if ((uVar7 != 0) && ((int)(*(int *)((int)this + 0x10) - uVar7) >> 2 != 0)) {
    uVar2 = *(uint *)((int)this + 0x10);
    if (uVar2 < uVar7) {
      FUN_00d83c2d();
    }
    uStack_5c = uVar2;
    if ((*(uint *)((int)this + 0x10) < uVar2 - 4) || (uVar2 - 4 < *(uint *)((int)this + 0xc))) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x10) <= (int *)(uVar2 - 4)) {
      FUN_00d83c2d();
    }
    piVar9[6] = *(int *)(uVar2 - 4);
  }
  piStack_68 = piStack_8c;
  piVar9 = (int *)*piStack_8c;
  local_ac = piVar9;
  if (&stack0x00000000 == (undefined1 *)0x90) {
    FUN_00d83c2d();
  }
  if (piVar9 != piStack_68) {
    if (&stack0x00000000 == (undefined1 *)0x90) {
      FUN_00d83c2d();
    }
    if (piVar9 == piStack_8c) {
      FUN_00d83c2d();
    }
    piVar13 = (int *)FUN_013f2ab0(auStack_60,piVar9 + 3);
    iStack_a4 = piVar13[1];
    iStack_80 = unaff_EBP[0x43];
    if (((int *)*piVar13 == (int *)0x0) || ((int *)*piVar13 != unaff_EBP + 0x42)) {
      FUN_00d83c2d();
    }
    if (iStack_a4 == iStack_80) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3b5);
    }
    PacketBuffer_init(auStack_50);
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    if ((piVar9 == piStack_8c) && (FUN_00d83c2d(), piVar9 == piStack_8c)) {
      FUN_00d83c2d();
    }
    RawBuffer_assign(auStack_50,(void *)piVar9[4],(void *)piVar9[5],(uint)outValue);
    if (piVar9 == piStack_8c) {
      FUN_00d83c2d();
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar9[4]);
  }
  iStack_64 = 0;
  bVar5 = Deserializer_readInteger(pvStack_54,&iStack_64);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3c0);
  }
  if (iStack_64 != 0xa2c2a) {
    FUN_012f5a60("foo == 666666","..\\common\\common\\state\\StateMachine.cpp",0x3c1);
  }
  local_ac = (undefined4 *)unaff_EBP[1];
  cVar4 = FUN_013f58f0(unaff_EBP + 8);
  if (cVar4 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3c5);
  }
  bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x10);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3c8);
  }
  bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x17);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3cb);
  }
  if (iStack_a0 < 10) {
    PacketBuffer_readPackedUInt(pvStack_54,&stack0xffffff4c,outValue);
    uStack_1c = 0xf;
    uStack_20 = 0;
    pvStack_30 = (void *)((uint)pvStack_30 & 0xffffff00);
    uStack_38 = 0xf;
    uStack_3c = 0;
    local_4c = (void *)((uint)local_4c & 0xffffff00);
    local_c = (void *)CONCAT31(local_c._1_3_,5);
    bVar5 = Deserializer_readString(pvStack_54,auStack_34);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3db);
    }
    bVar5 = Deserializer_readString(pvStack_54,auStack_50);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3de);
    }
    local_c = (void *)CONCAT31(local_c._1_3_,4);
    if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    uStack_38 = 0xf;
    uStack_3c = 0;
    local_4c = (void *)((uint)local_4c & 0xffffff00);
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    uStack_1c = 0xf;
    uStack_20 = 0;
    pvStack_30 = (void *)((uint)pvStack_30 & 0xffffff00);
  }
  else {
    cVar4 = (**(code **)(unaff_EBP[0x1e] + 0x24))(pvStack_54);
    if (cVar4 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3e2);
    }
    cVar4 = (**(code **)(unaff_EBP[0x25] + 0x24))(pvStack_54);
    if (cVar4 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3e5);
    }
  }
  bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x2c);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3e9);
  }
  bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x33);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3ec);
  }
  bVar5 = Deserializer_readInteger(pvStack_54,unaff_EBP + 0x41);
  if (!bVar5) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3ef);
  }
  if (3 < iStack_a0) {
    bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x45);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3f3);
    }
    bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x4c);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3f6);
    }
    cVar4 = (**(code **)(unaff_EBP[0x53] + 0x24))(pvStack_54);
    if (cVar4 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3f9);
    }
    cVar4 = (**(code **)(unaff_EBP[0x5a] + 0x24))(pvStack_54);
    if (cVar4 == '\0') {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3fc);
    }
    bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x61);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x3ff);
    }
    bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x68);
    if (!bVar5) {
      FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x402);
    }
  }
  if ((0xd < iStack_a0) && (bVar5 = Deserializer_readString(pvStack_54,unaff_EBP + 0x3a), !bVar5)) {
    FUN_012f5a60("false","..\\common\\common\\state\\StateMachine.cpp",0x407);
  }
  (**(code **)(*unaff_EBP + 0x14))();
  local_10 = CONCAT31(local_10._1_3_,1);
  if (pvStack_7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_7c);
  }
  pvStack_7c = (void *)0x0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_10 = (uint)local_10._1_3_ << 8;
  StateMachineTree_eraseRange
            (auStack_94,&iStack_64,auStack_94,(void *)*puStack_90,auStack_94,puStack_90,pvStack_54);
                    /* WARNING: Subroutine does not return */
  _free(puStack_90);
}

