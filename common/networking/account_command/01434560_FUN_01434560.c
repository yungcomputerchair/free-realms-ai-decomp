// addr: 0x01434560
// name: FUN_01434560
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_01434560(int *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_44 [4];
  void *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01696c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&local_40,DAT_01b839d8 ^ (uint)&stack0xffffffac);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(int *)param_1[2] + 0x24))(param_2), cVar1 != '\0'))
  {
    uStack_4 = param_2;
    local_40 = (void *)0x0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_c = (void *)0x0;
    bVar2 = Deserializer_readIntegerVector(&uStack_4,auStack_44);
    if (bVar2) {
      puVar4 = auStack_44;
      IntToIntVectorMap_getOrCreate(&stack0xffffffb4);
      FUN_005f1e5c(puVar4);
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      local_c._0_1_ = 1;
      bVar2 = Deserializer_readIntegerVector(&uStack_4,auStack_34);
      if (bVar2) {
        puVar4 = auStack_34;
        IntToIntVectorMap_getOrCreate(&stack0xffffffb4);
        FUN_005f1e5c(puVar4);
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        local_c._0_1_ = 2;
        bVar2 = Deserializer_readIntegerVector(&uStack_4,auStack_24);
        if (bVar2) {
          puVar4 = auStack_24;
          uStack_4 = 4;
          IntToIntVectorMap_getOrCreate(&uStack_4);
          FUN_005f1e5c(puVar4);
          uStack_4 = param_2;
          cVar1 = FUN_01432950(param_1 + 7);
          if (cVar1 != '\0') {
            uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
            uStack_4 = CONCAT31(uStack_4._1_3_,uVar3);
            local_c._0_1_ = 1;
            StdVector_clearStorage(auStack_24);
            local_c = (void *)((uint)local_c._1_3_ << 8);
            StdVector_clearStorage(auStack_34);
            local_c = (void *)0xffffffff;
            StdVector_clearStorage(auStack_44);
            ExceptionList = pvStack_14;
            return uStack_4 & 0xff;
          }
        }
        local_c._0_1_ = 1;
        StdVector_clearStorage(auStack_24);
      }
      local_c = (void *)((uint)local_c._1_3_ << 8);
      StdVector_clearStorage(auStack_34);
      local_c = (void *)0xffffffff;
      StdVector_clearStorage(auStack_44);
      ExceptionList = pvStack_14;
      return 0;
    }
    local_c = (void *)0xffffffff;
    if (local_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}

