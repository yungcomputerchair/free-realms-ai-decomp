// addr: 0x0137f470
// name: PropertyContainer_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PropertyContainer_deserialize(void * this, void * serializer) */

uint __thiscall PropertyContainer_deserialize(void *this,void *serializer)

{
  void *this_00;
  char extraout_AL;
  bool bVar1;
  char cVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 uVar5;
  int iVar3;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  this_00 = serializer;
                    /* Deserializes a versioned property container, reading base data and either old
                       PropertyTree15B state or newer serialized property data, then reads boolean
                       flags for later versions. */
  iStack_4 = -1;
  puStack_8 = &LAB_016822e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0x10))(serializer,&serializer,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  uVar5 = extraout_var;
  if (((extraout_AL != '\0') &&
      (bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 8)), uVar5 = extraout_var_00,
      bVar1)) &&
     ((6 < iStack_4 ||
      (bVar1 = Deserializer_readInteger(this_00,(int *)&puStack_30), uVar5 = extraout_var_01, bVar1)
      ))) {
    if (1 < iStack_4) {
      bVar1 = Deserializer_readInteger(this_00,(int *)((int)this + 0x18));
      uVar5 = extraout_var_02;
      if ((!bVar1) ||
         (bVar1 = Deserializer_readInteger(this_00,(int *)&stack0xffffffc8), uVar5 = extraout_var_03
         , !bVar1)) goto LAB_0137f576;
      *(undefined4 *)((int)this + 0x20) = unaff_EBP;
      if (iStack_4 < 6) {
        bVar1 = Deserializer_readInteger(this_00,(int *)&stack0xffffffcc);
        uVar5 = extraout_var_04;
        if (!bVar1) goto LAB_0137f576;
        (**(code **)(*(int *)this + 0x60))(unaff_EBX);
      }
    }
    if (iStack_4 < 7) {
      PropertyTree15B_ctor((int)auStack_20);
      local_c = (void *)0x0;
      puStack_30 = this_00;
      cVar2 = FUN_0137da80(auStack_20);
      if (cVar2 == '\0') {
        local_c = (void *)0xffffffff;
        PropertyTree15B_clearAndFreeHeader((int)auStack_20);
        uVar5 = extraout_var_05;
        goto LAB_0137f576;
      }
      uStack_2c = *puStack_1c;
      puStack_30 = auStack_20;
      iVar3 = FUN_0137bb90();
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar3 + 4);
      local_c = (void *)0xffffffff;
      PropertyTree15B_clearAndFreeHeader((int)auStack_20);
    }
    else {
      cVar2 = FUN_0137abe0(this_00,(undefined4 *)((int)this + 0x10));
      FormatSpecificData_setVersion(*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      FUN_014315f0();
      uVar5 = extraout_var_06;
      if (cVar2 == '\0') goto LAB_0137f576;
    }
    if (2 < iStack_4) {
      bVar1 = Deserializer_readInteger(this_00,&iStack_28);
      uVar5 = extraout_var_07;
      if (!bVar1) goto LAB_0137f576;
      *(bool *)((int)this + 0x24) = iStack_28 != 0;
    }
    if (3 < iStack_4) {
      bVar1 = Deserializer_readInteger(this_00,&iStack_24);
      uVar5 = extraout_var_08;
      if (!bVar1) goto LAB_0137f576;
      *(bool *)((int)this + 0x25) = iStack_24 != 0;
    }
    uVar4 = (**(code **)(*(int *)this + 0x14))(this_00);
    ExceptionList = pvStack_14;
    return uVar4;
  }
LAB_0137f576:
  ExceptionList = pvStack_14;
  return (uint)uVar5 << 8;
}

