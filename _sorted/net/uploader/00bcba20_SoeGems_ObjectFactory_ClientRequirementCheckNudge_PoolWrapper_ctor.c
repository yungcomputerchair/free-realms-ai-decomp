// addr: 0x00bcba20
// name: SoeGems_ObjectFactory_ClientRequirementCheckNudge_PoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoeGems_ObjectFactory_ClientRequirementCheckNudge_PoolWrapper_ctor(void
   * this) */

void * __fastcall SoeGems_ObjectFactory_ClientRequirementCheckNudge_PoolWrapper_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the SoeGems pool wrapper for ClientRequirementCheckNudge and
                       initializes its RefObjectPool base. Vtable identifies the type. */
  puStack_8 = &LAB_015ecedb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  local_4 = 0;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckNudge,SoeUtil::RefObjectPool<ClientRequirementCheckNudge,0>_>
       ::vftable;
  SoeUtil_RefObjectPool_ctor((void *)((int)this + 8));
  ExceptionList = local_c;
  return this;
}

