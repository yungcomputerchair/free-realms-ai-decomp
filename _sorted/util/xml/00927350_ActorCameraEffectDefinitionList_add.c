// addr: 0x00927350
// name: ActorCameraEffectDefinitionList_add
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorCameraEffectDefinitionList_add(void * list, uint key_) */

void __thiscall ActorCameraEffectDefinitionList_add(void *this,void *list,uint key_)

{
                    /* Adds a camera effect definition entry via the camera definition
                       allocation/insertion helper. Evidence: wrapper over 009272d0 with a local
                       key. */
  ActorCameraEffectDefinitionList_insert
            ((void *)((int)this + 0x2c),&stack0xfffffffc,(void *)((int)this + 0xc),(uint *)&list,
             list);
  return;
}

