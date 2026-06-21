// addr: 0x01386980
// name: ReturnValueMap_deserialize
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ReturnValueMap_deserialize(void * this) */

bool __fastcall ReturnValueMap_deserialize(void *this)

{
  void *pvVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int local_4c;
  undefined4 *local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  void *local_2c;
  undefined1 local_28 [12];
  void *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count of int/serializable pairs, builds ValueData entries,
                       inserts them into the return-value map, and finalizes the read. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683350;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffa4;
  ExceptionList = &local_c;
  local_48 = this;
  FUN_013c2690(&local_4c);
  iVar5 = 0;
  if (0 < local_4c) {
    do {
      local_2c = (void *)0x0;
      FUN_012fa910(uVar4);
      local_4 = 1;
      bVar2 = STLPair_intSerializable_deserialize(*(void **)this,&local_2c);
      pvVar1 = local_2c;
      if (!bVar2) {
        local_4 = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_c;
        return false;
      }
      ValueData_ctor(local_28);
      local_4._0_1_ = 3;
      local_1c[0] = pvVar1;
      ValueData_ctor(local_44);
      local_4._0_1_ = 5;
      FUN_01385840(local_38,local_1c);
      local_4._0_1_ = 3;
      FUN_01300cd0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_01300cd0();
      local_4 = 0xffffffff;
      FUN_01300cd0();
      iVar5 = iVar5 + 1;
      this = local_48;
    } while (iVar5 < local_4c);
  }
  uVar3 = FUN_013c26d0();
  ExceptionList = local_c;
  return (bool)uVar3;
}

