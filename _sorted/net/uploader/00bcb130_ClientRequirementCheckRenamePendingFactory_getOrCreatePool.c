// addr: 0x00bcb130
// name: ClientRequirementCheckRenamePendingFactory_getOrCreatePool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientRequirementCheckRenamePendingFactory_getOrCreatePool(void * factory)
    */

int __fastcall ClientRequirementCheckRenamePendingFactory_getOrCreatePool(void *factory)

{
  int *piVar1;
  void **pool;
  void *extraout_EAX;
  void **ppvVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up the ClientRequirementCheckRenamePending object-factory pool by
                       constant key; allocates the pool wrapper and inserts it if absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ecb2b;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)factory + 0x21ac8);
  local_10 = 0xb801bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcb192:
      local_14 = Mem_Alloc(0x18);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        ClientRequirementCheckRenamePendingPoolWrapper_ctor(local_14);
        local_14 = extraout_EAX;
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckRenamePendingFactory_insertPool
                          ((void *)((int)factory + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcb1d4:
      ExceptionList = local_c;
      return (int)*ppvVar2;
    }
    if (*piVar1 == -0x47fe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcb1d4;
      goto LAB_00bcb192;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

