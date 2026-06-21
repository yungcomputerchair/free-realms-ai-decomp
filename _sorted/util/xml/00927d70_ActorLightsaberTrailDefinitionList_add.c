// addr: 0x00927d70
// name: ActorLightsaberTrailDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorLightsaberTrailDefinitionList_add(void * list, uint key_) */

void __thiscall ActorLightsaberTrailDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds a lightsaber-trail definition entry by invoking the corresponding
                       allocation/insertion helper. Evidence: thin wrapper around 00927cf0. */
  ActorLightsaberTrailDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

