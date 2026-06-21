// addr: 0x00927860
// name: ActorRumbleEffectDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorRumbleEffectDefinitionList_add(void * list, uint key_) */

void __thiscall ActorRumbleEffectDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds a rumble effect definition entry by forwarding the key to the
                       allocation/insertion helper. Evidence: thin wrapper over 009277e0. */
  ActorRumbleEffectDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

