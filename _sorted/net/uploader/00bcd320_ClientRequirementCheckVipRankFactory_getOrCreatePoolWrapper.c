// addr: 0x00bcd320
// name: ClientRequirementCheckVipRankFactory_getOrCreatePoolWrapper
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall ClientRequirementCheckVipRankFactory_getOrCreatePoolWrapper(int param_1)

{
  int *piVar1;
  void **pool;
  void **ppvVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up the VipRank requirement wrapper in the factory ref-pool tree,
                       allocating/inserting it on miss. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ed62b;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)(param_1 + 0x21ac8);
  local_10 = 0xb001bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcd382:
      local_14 = Mem_Alloc(0xa8);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        local_14 = SoeGems_ObjectFactory_ClientRequirementCheckVipRank_PoolWrapper_ctor(local_14);
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckVipRankFactory_insertRefPool
                          ((void *)(param_1 + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcd3c7:
      ExceptionList = local_c;
      return *ppvVar2;
    }
    if (*piVar1 == -0x4ffe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcd3c7;
      goto LAB_00bcd382;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

