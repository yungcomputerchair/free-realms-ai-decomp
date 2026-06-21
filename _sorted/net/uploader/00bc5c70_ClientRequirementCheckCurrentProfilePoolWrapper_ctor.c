// addr: 0x00bc5c70
// name: ClientRequirementCheckCurrentProfilePoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckCurrentProfilePoolWrapper_ctor(void * this) */

void __fastcall ClientRequirementCheckCurrentProfilePoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for
                       ClientRequirementCheckCurrentProfile and clears pool bookkeeping. Evidence is
                       the PoolWrapper<ClientRequirementCheckCurrentProfile,...>::vftable
                       assignment. */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckCurrentProfile,SoeUtil::ObjectPool<ClientRequirementCheckCurrentProfile,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

