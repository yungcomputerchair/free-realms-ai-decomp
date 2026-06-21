// addr: 0x00bc5dd0
// name: ClientRequirementCheckNudgePoolWrapper_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientRequirementCheckNudgePoolWrapper_ctor(void * this) */

void __fastcall ClientRequirementCheckNudgePoolWrapper_ctor(void *this)

{
                    /* Constructs the ObjectFactory pool wrapper for ClientRequirementCheckNudge and
                       clears its bookkeeping fields. Evidence is the
                       PoolWrapper<ClientRequirementCheckNudge,...>::vftable assignment. */
  *(undefined ***)this = SoeGems::ObjectFactory<IRequirement,int>::BasePool::vftable;
  *(undefined ***)this =
       SoeGems::ObjectFactory<IRequirement,int>::
       PoolWrapper<ClientRequirementCheckNudge,SoeUtil::ObjectPool<ClientRequirementCheckNudge,0>_>
       ::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}

