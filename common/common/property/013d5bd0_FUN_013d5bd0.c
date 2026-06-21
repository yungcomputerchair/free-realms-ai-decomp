// addr: 0x013d5bd0
// name: FUN_013d5bd0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool InstanceIDVector_deserializePairBool(void * this, void * stream) */

bool __thiscall InstanceIDVector_deserializePairBool(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *vector;
  int unaff_EBX;
  void *pvStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [20];
  void *pvStack_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Initializes temporary InstanceID/property vectors and deserializes a vector
                       of pair/bool entries from the stream. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0168b910;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_60,DAT_01b839d8 ^ (uint)&stack0xffffff90)
  ;
  if ((((cVar1 == '\0') || (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 4)), !bVar2)
       ) || ((unaff_EBX < 7 && (bVar2 = Deserializer_readInteger(stream,(int *)&pvStack_64), !bVar2)
             ))) || (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 8)), !bVar2)) {
    ExceptionList = pvStack_1c;
    return false;
  }
  if (unaff_EBX < 4) {
    pvStack_64 = stream;
    PropertyVector16_init(auStack_34);
    local_14 = (void *)0x0;
    cVar1 = FUN_013d5ae0(auStack_34);
    if (cVar1 == '\0') {
      local_14 = (void *)0xffffffff;
      PropertyVector16_clearAndFree(auStack_34);
      ExceptionList = pvStack_1c;
      return false;
    }
    local_14 = (void *)0xffffffff;
    PropertyVector16_clearAndFree(auStack_34);
  }
  else if (3 < unaff_EBX) {
    bVar2 = Deserializer_readInteger(stream,&local_60);
    if (!bVar2) {
      ExceptionList = pvStack_1c;
      return false;
    }
    *(bool *)((int)this + 0xc) = local_60 != 0;
  }
  if (unaff_EBX < 6) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_14 = (void *)0x1;
    pvStack_64 = stream;
    if (1 < unaff_EBX) {
      FUN_00508490();
      bVar2 = StdVectorPairBool_deserialize(&pvStack_64,auStack_44);
      if (!bVar2) goto LAB_013d5d58;
      FUN_012c2ea0();
      puVar4 = (undefined4 *)FUN_004fa96b(&uStack_5c);
      uStack_54 = *puVar4;
      uStack_50 = puVar4[1];
      puVar4 = (undefined4 *)FUN_004fa957(auStack_4c);
      uStack_5c = *puVar4;
      uStack_58 = puVar4[1];
      bVar2 = CheckedTreeIterator_notAtEnd_alt(&uStack_54);
      if (bVar2) {
        do {
          piVar5 = (int *)FUN_012c1d40();
          iVar6 = FUN_012c1d40();
          InstanceID_ctor(auStack_34,*piVar5,0,*(int *)(iVar6 + 4));
          local_14._0_1_ = 2;
          FUN_012c3e50(auStack_34);
          local_14 = (void *)CONCAT31(local_14._1_3_,1);
          InstanceID_dtor(auStack_34);
          FUN_012c1d70(auStack_4c,0);
          bVar2 = CheckedTreeIterator_notAtEnd_alt(&uStack_54);
        } while (bVar2);
      }
    }
    if (2 < unaff_EBX) {
      FUN_00508490();
      bVar2 = StdVectorPairBool_deserialize(&pvStack_64,vector);
      if (!bVar2) {
LAB_013d5d58:
        local_14 = (void *)0xffffffff;
        FUN_0050848b();
        ExceptionList = pvStack_1c;
        return false;
      }
      FUN_012c2ea0();
      puVar4 = (undefined4 *)FUN_004fa96b(auStack_4c);
      uStack_54 = *puVar4;
      uStack_50 = puVar4[1];
      puVar4 = (undefined4 *)FUN_004fa957(auStack_4c);
      uStack_5c = *puVar4;
      uStack_58 = puVar4[1];
      bVar2 = CheckedTreeIterator_notAtEnd_alt(&uStack_54);
      if (bVar2) {
        do {
          piVar5 = (int *)FUN_012c1d40();
          iVar6 = FUN_012c1d40();
          InstanceID_ctor(auStack_34,*piVar5,0,*(int *)(iVar6 + 4));
          local_14._0_1_ = 3;
          FUN_012c3e50(auStack_34);
          local_14 = (void *)CONCAT31(local_14._1_3_,1);
          InstanceID_dtor(auStack_34);
          FUN_012c1d70(auStack_4c,0);
          bVar2 = CheckedTreeIterator_notAtEnd_alt(&uStack_54);
        } while (bVar2);
      }
    }
    local_14 = (void *)0xffffffff;
    FUN_0050848b();
  }
  else {
    pvStack_64 = stream;
    bVar2 = SynchronizationCommand_deserializeInstanceIDList(&pvStack_64);
    if (!bVar2) {
      ExceptionList = pvStack_1c;
      return false;
    }
    bVar2 = SynchronizationCommand_deserializeInstanceIDList(&pvStack_64);
    if (!bVar2) {
      ExceptionList = pvStack_1c;
      return false;
    }
  }
  uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
  ExceptionList = pvStack_20;
  return (bool)uVar3;
}

