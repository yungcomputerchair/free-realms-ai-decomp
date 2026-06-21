// addr: 0x00bcacb0
// name: ClientRequirementCheckCountryFactory_getOrCreatePool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientRequirementCheckCountryFactory_getOrCreatePool(void * factory) */

int __fastcall ClientRequirementCheckCountryFactory_getOrCreatePool(void *factory)

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
  
                    /* Looks up the ClientRequirementCheckCountry object-factory pool by constant
                       key; allocates the pool wrapper and inserts it if absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015eca0b;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)factory + 0x21ac8);
  local_10 = 0xa001bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcad12:
      local_14 = Mem_Alloc(0x18);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        ClientRequirementCheckCountryPoolWrapper_ctor(local_14);
        local_14 = extraout_EAX;
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckCountryFactory_insertPool
                          ((void *)((int)factory + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcad54:
      ExceptionList = local_c;
      return (int)*ppvVar2;
    }
    if (*piVar1 == -0x5ffe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcad54;
      goto LAB_00bcad12;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

