// addr: 0x013ce230
// name: ComponentFactory_setFactoryForType
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ComponentFactory_setFactoryForType(uint typeId_, void * factoryFn) */

void __thiscall ComponentFactory_setFactoryForType(void *this,uint typeId_,void *factoryFn)

{
  void **ppvVar1;
  
                    /* Stores a factory function/pointer in the component/value factory registry
                       slot for the given type id. */
  ppvVar1 = ComponentFactory_findOrInsertFactorySlot((void *)((int)this + 4),(int *)&typeId_);
  *ppvVar1 = factoryFn;
  return;
}

