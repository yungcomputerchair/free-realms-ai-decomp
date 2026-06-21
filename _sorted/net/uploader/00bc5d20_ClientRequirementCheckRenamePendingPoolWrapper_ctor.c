// addr: 0x00bc5d20
// name: ClientRequirementCheckRenamePendingPoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckRenamePendingPoolWrapper_ctor(void * this) */

void __fastcall ClientRequirementCheckRenamePendingPoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for
                       ClientRequirementCheckRenamePending and initializes empty state. Evidence is
                       the PoolWrapper<ClientRequirementCheckRenamePending,...>::vftable assignment.
                        */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckRenamePending,SoeUtil::ObjectPool<ClientRequirementCheckRenamePending,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

