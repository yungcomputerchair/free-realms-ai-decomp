// addr: 0x0143fd80
// name: IgnoreStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IgnoreStatus_serialize(void * this, void * serializer) */

void __thiscall IgnoreStatus_serialize(void *this,void *serializer)

{
                    /* Serializes IgnoreStatus by writing an integer and two string-like fields
                       between serializer begin/end virtual calls. */
  (**(code **)(*(int *)this + 8))(serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendString(serializer,(void *)((int)this + 0x24));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

