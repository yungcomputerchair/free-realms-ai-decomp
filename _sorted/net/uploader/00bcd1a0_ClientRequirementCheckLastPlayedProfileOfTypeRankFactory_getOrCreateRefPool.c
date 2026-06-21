// addr: 0x00bcd1a0
// name: ClientRequirementCheckLastPlayedProfileOfTypeRankFactory_getOrCreateRefPool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int
   ClientRequirementCheckLastPlayedProfileOfTypeRankFactory_getOrCreateRefPool(void * factory) */

int __fastcall
ClientRequirementCheckLastPlayedProfileOfTypeRankFactory_getOrCreateRefPool(void *factory)

{
  int *piVar1;
  void **pool;
  void **ppvVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up the ClientRequirementCheckLastPlayedProfileOfTypeRank object-factory
                       reference pool by constant key; allocates the pool wrapper and inserts it if
                       absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ed5cb;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)factory + 0x21ac8);
  local_10 = 0xa801bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcd202:
      local_14 = Mem_Alloc(0xa8);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        local_14 = SoeGems_ObjectFactory_ClientRequirementCheckLastPlayedProfileOfTypeRank_PoolWrapper_ctor
                             (local_14);
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckLastPlayedProfileOfTypeRankFactory_insertRefPool
                          ((void *)((int)factory + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcd247:
      ExceptionList = local_c;
      return (int)*ppvVar2;
    }
    if (*piVar1 == -0x57fe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcd247;
      goto LAB_00bcd202;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

