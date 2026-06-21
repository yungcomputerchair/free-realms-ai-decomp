// addr: 0x00bcb6c0
// name: ClientRequirementCheckLanguage_PoolWrapper_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall ClientRequirementCheckLanguage_PoolWrapper_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the SoeGems ObjectFactory pool wrapper for
                       ClientRequirementCheckLanguage and initializes the underlying
                       RefObjectPool/table. */
  puStack_8 = &LAB_015ecd5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  local_4 = 0;
  *param_1 = SoeGems::ObjectFactory<IRequirement,int>::
             PoolWrapper<ClientRequirementCheckLanguage,SoeUtil::RefObjectPool<ClientRequirementCheckLanguage,0>_>
             ::vftable;
  FUN_00bc4270(uVar1);
  ExceptionList = local_c;
  return param_1;
}

