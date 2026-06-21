// addr: 0x00a19e70
// name: ClientEffectMap_getOrCreateById
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientEffectMap_getOrCreateById(void * this, uint id_, void * initData)
    */

void * __thiscall ClientEffectMap_getOrCreateById(void *this,uint id_,void *initData)

{
  void *pvVar1;
  void *extraout_EAX;
  
                    /* Looks up an effect entry in a 0x14-bucket map by id, creating one on miss,
                       marking an owner/list dirty, and applying init data. Effect naming is
                       inferred from neighboring ClientEffectTag code. */
  pvVar1 = *(void **)((int)this + (id_ % 0x14) * 4 + 0x6f0);
  while( true ) {
    if (pvVar1 == (void *)0x0) {
      ClientEffectTagMap_insertNew((void *)((int)this + 0x6dc),(uint)&id_);
      *(undefined1 *)(*(int *)((int)this + 0x35658) + 600) = 1;
      (**(code **)(**(int **)((int)this + 0x35658) + 0x10))();
      FUN_00a18cc0(initData);
      return extraout_EAX;
    }
    if (*(uint *)((int)pvVar1 + 0x80) == id_) break;
    pvVar1 = *(void **)((int)pvVar1 + 0x84);
  }
  FUN_00a18cc0(initData);
  return pvVar1;
}

