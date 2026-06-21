// addr: 0x00914fb0
// name: ActorMeshEmitterDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorMeshEmitterDefinitionList_add(void * list, uint key_) */

void __thiscall ActorMeshEmitterDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Wrapper that adds a mesh emitter definition to a list by forwarding the key
                       and list storage to the allocation/insertion helper. Evidence: prepares a
                       local key and calls the mesh insertion routine 00914f30. */
  ActorMeshEmitterDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

