// addr: 0x014392f0
// name: PropertyDescriptor_registerWithRegistry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyDescriptor_registerWithRegistry(void * this, void * registryKey)
    */

void __thiscall PropertyDescriptor_registerWithRegistry(void *this,void *registryKey)

{
  int *extraout_EAX;
  int *extraout_EAX_00;
  
                    /* Registers or emits a property descriptor using a global registry/service
                       object. It first calls the service vfunc at +0x28 for the supplied key, then
                       vfunc +0xc with fields at this+4, this+8, and this+0xc. */
  DeckBuilderUtilities_getInstance();
  (**(code **)(*extraout_EAX + 0x28))(registryKey);
  DeckBuilderUtilities_getInstance();
  (**(code **)(*extraout_EAX_00 + 0xc))
            (registryKey,*(undefined4 *)((int)this + 4),registryKey,*(undefined1 *)((int)this + 8),
             (int)this + 0xc);
  return;
}

