// addr: 0x00bc5bc0
// name: ClientRequirementCheckVipRankPoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckVipRankPoolWrapper_ctor(void * this) */

void __fastcall ClientRequirementCheckVipRankPoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for ClientRequirementCheckVipRank
                       and initializes empty pool state. Evidence is the
                       PoolWrapper<ClientRequirementCheckVipRank,...>::vftable assignment. */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckVipRank,SoeUtil::ObjectPool<ClientRequirementCheckVipRank,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

