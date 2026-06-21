// addr: 0x00bc5550
// name: ClientRequirementCheckLanguagePoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckLanguagePoolWrapper_ctor(void * this) */

void __fastcall ClientRequirementCheckLanguagePoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for ClientRequirementCheckLanguage
                       and clears its bookkeeping fields. Evidence is the
                       PoolWrapper<ClientRequirementCheckLanguage,...>::vftable assignment. */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckLanguage,SoeUtil::ObjectPool<ClientRequirementCheckLanguage,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

