// addr: 0x01486370
// name: STLMap_intToSerializablePointer_serialize_01486370
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToSerializablePointer_serialize_01486370(void * writer, int map)
    */

int __thiscall STLMap_intToSerializablePointer_serialize_01486370(void *this,void *writer,int map)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  int unaff_EDI;
  void *local_10;
  undefined4 local_c;
  
                    /* Serializes a map from integer keys to serializable object pointers. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)writer + 8),unaff_EDI);
  piVar1 = *(int **)((int)writer + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      iVar4 = Serialize_returnTrue();
      return iVar4;
    }
    if (writer == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)writer + 4)) {
      FUN_00d83c2d();
    }
    local_10 = (void *)piVar2[3];
    local_c = piVar2[4];
    bVar3 = SerializeDwordAndObjectElement(*(void **)this,&local_10);
    if (!bVar3) break;
    FUN_01485df0();
  }
  return (uint)extraout_var << 8;
}

