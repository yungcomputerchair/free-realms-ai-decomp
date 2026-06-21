// addr: 0x00946420
// name: ActorSoundEmitterDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorSoundEmitterDefinitionList_add(void * list, uint key_) */

void __thiscall ActorSoundEmitterDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds an ActorSoundEmitterDefinition entry using the sound emitter
                       allocation/insertion helper. Evidence: passes a local key plus list
                       subobjects to 00946390. */
  ActorSoundEmitterDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,&list,(uint *)((int)this + 0xc),
             (void *)((int)this + 0x84c),list);
  return;
}

