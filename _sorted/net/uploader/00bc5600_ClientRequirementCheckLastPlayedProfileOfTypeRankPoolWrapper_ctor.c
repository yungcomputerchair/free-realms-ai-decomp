// addr: 0x00bc5600
// name: ClientRequirementCheckLastPlayedProfileOfTypeRankPoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckLastPlayedProfileOfTypeRankPoolWrapper_ctor(void *
   this) */

void __fastcall ClientRequirementCheckLastPlayedProfileOfTypeRankPoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for
                       ClientRequirementCheckLastPlayedProfileOfTypeRank and initializes empty pool
                       state. Evidence is the matching PoolWrapper vtable symbol. */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckLastPlayedProfileOfTypeRank,SoeUtil::ObjectPool<ClientRequirementCheckLastPlayedProfileOfTypeRank,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

