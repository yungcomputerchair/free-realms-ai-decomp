// addr: 0x00bcd560
// name: ClientRequirementCheckNudgeFactory_getOrCreatePoolWrapper
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall ClientRequirementCheckNudgeFactory_getOrCreatePoolWrapper(int param_1)

{
  int *piVar1;
  void **pool;
  void **ppvVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up the Nudge requirement wrapper in the factory ref-pool tree,
                       allocating/inserting it on miss. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ed6bb;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)(param_1 + 0x21ac8);
  local_10 = 0xbc01bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcd5c2:
      local_14 = Mem_Alloc(0xa8);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        local_14 = SoeGems_ObjectFactory_ClientRequirementCheckNudge_PoolWrapper_ctor(local_14);
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckNudgeFactory_insertRefPool
                          ((void *)(param_1 + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcd607:
      ExceptionList = local_c;
      return *ppvVar2;
    }
    if (*piVar1 == -0x43fe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcd607;
      goto LAB_00bcd5c2;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

