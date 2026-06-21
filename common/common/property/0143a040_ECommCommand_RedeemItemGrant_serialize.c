// addr: 0x0143a040
// name: ECommCommand_RedeemItemGrant_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_serialize(void * this, void * serializer) */

void __thiscall ECommCommand_RedeemItemGrant_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  
                    /* Serializes RedeemItemGrant data: emits a base/embedded object, an integer, an
                       optional polymorphic child object, boolean flags, and additional integer
                       fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  ECommCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x1c));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

