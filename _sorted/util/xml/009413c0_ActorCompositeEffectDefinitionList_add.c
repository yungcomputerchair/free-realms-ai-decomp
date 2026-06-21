// addr: 0x009413c0
// name: ActorCompositeEffectDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorCompositeEffectDefinitionList_add(uint key_) */

void __thiscall ActorCompositeEffectDefinitionList_add(void *this,uint key_)

{
                    /* Thin wrapper that adds a composite effect definition entry by passing a local
                       key to the insert helper. Evidence: only prepares local_4 and calls 00941310.
                        */
  ActorCompositeEffectDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,&key_,(uint *)key_);
  return;
}

