// addr: 0x01443f80
// name: Property_serializeDwordPairMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Property_serializeDwordPairMap(void * serializer_owner, void * map) */

uint __thiscall Property_serializeDwordPairMap(void *this,void *serializer_owner,void *map)

{
  int *piVar1;
  int *piVar2;
  uint extraout_EAX;
  uint uVar3;
  int unaff_EDI;
  int local_10;
  undefined4 local_c;
  
                    /* Serializes an STL-style container by starting a container, writing each pair
                       of dwords through SerializeDwordPairElement, advancing the iterator, and
                       ending the container. */
  Serializer_startAppendingSTLContainer
            (*(void **)this,*(int *)((int)serializer_owner + 8),unaff_EDI);
  piVar1 = *(int **)((int)serializer_owner + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (serializer_owner == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      uVar3 = Serialize_returnTrue();
      return uVar3;
    }
    if (serializer_owner == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)serializer_owner + 4)) {
      FUN_00d83c2d();
    }
    local_10 = piVar2[3];
    local_c = piVar2[4];
    SerializeDwordPairElement(*(void **)this,&local_10);
    if ((char)extraout_EAX == '\0') break;
    FUN_014437a0();
  }
  return extraout_EAX & 0xffffff00;
}

