// addr: 0x012fc750
// name: STLMap_intToSerializablePointer_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToSerializablePointer_serialize(void * this, int map) */

int __thiscall STLMap_intToSerializablePointer_serialize(void *this,int map)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  int unaff_EDI;
  void *local_10;
  undefined4 local_c;
  
                    /* Serializes an associative container whose entries contain an integer key and
                       a serializable object pointer value. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)(map + 8),unaff_EDI);
  piVar1 = *(int **)(map + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (map == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar4 = Serialize_returnTrue();
      return iVar4;
    }
    if (map == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(map + 4)) {
      FUN_00d83c2d();
    }
    local_10 = (void *)piVar2[3];
    local_c = piVar2[4];
    bVar3 = SerializeDwordAndObjectElement(*(void **)this,&local_10);
    if (!bVar3) break;
    FUN_012af3e0();
  }
  return (uint)extraout_var << 8;
}

