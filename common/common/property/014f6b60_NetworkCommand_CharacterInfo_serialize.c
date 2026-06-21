// addr: 0x014f6b60
// name: NetworkCommand_CharacterInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_CharacterInfo_serialize(void * this, void * serializer) */

void __thiscall NetworkCommand_CharacterInfo_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  void *map;
  
                    /* Serializes a network command containing several integer fields, a string, an
                       int vector, an optional nested serializable object, and a dword-pair map. The
                       exact class is not named, but the layout and NetworkCommand-style virtual
                       framing match neighboring command serializers. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendString(serializer,(void *)((int)this + 0x14));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x30);
  piVar1 = *(int **)((int)this + 0x4c);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x40),map);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

