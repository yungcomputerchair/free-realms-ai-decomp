// addr: 0x00bcad70
// name: ClientRequirementCheckLanguageFactory_getOrCreatePool
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientRequirementCheckLanguageFactory_getOrCreatePool(void * factory) */

int __fastcall ClientRequirementCheckLanguageFactory_getOrCreatePool(void *factory)

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
  
                    /* Looks up the ClientRequirementCheckLanguage object-factory pool by constant
                       key; allocates the pool wrapper and inserts it if absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015eca3b;
  local_c = ExceptionList;
  pool = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)factory + 0x21ac8);
  local_10 = 0xa401bea8;
  do {
    if (piVar1 == (int *)0x0) {
LAB_00bcadd2:
      local_14 = Mem_Alloc(0x18);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        ClientRequirementCheckLanguagePoolWrapper_ctor(local_14);
        local_14 = extraout_EAX;
      }
      local_4 = 0xffffffff;
      ppvVar2 = ClientRequirementCheckLanguageFactory_insertPool
                          ((void *)((int)factory + 0x2101c),&local_10,(uint *)&local_14,pool);
LAB_00bcae14:
      ExceptionList = local_c;
      return (int)*ppvVar2;
    }
    if (*piVar1 == -0x5bfe4158) {
      ppvVar2 = (void **)(piVar1 + 1);
      if (ppvVar2 != (void **)0x0) goto LAB_00bcae14;
      goto LAB_00bcadd2;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

