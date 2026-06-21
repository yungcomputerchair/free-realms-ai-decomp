// addr: 0x00926e40
// name: ActorLightEmitterDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorLightEmitterDefinitionList_add(void * list, uint key_) */

void __thiscall ActorLightEmitterDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Thin wrapper that adds a light emitter definition to the list using the
                       common allocation/insert helper. Evidence: forwards a local copy of the key
                       to 00926dc0. */
  ActorLightEmitterDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

