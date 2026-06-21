// addr: 0x01310ea0
// name: STLMap_intToSerializablePointer_serialize_01310ea0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToSerializablePointer_serialize_01310ea0(void * writer, int map)
    */

int __thiscall STLMap_intToSerializablePointer_serialize_01310ea0(void *this,void *writer,int map)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint3 extraout_var;
  int iVar5;
  int unaff_EDI;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined4 local_c;
  
                    /* Serializes a map from integer keys to serializable object pointers by writing
                       count, key, and each pointed object's virtual serialize. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)writer + 8),unaff_EDI);
  puVar1 = *(undefined4 **)((int)writer + 4);
  local_14 = (undefined4 *)*puVar1;
  local_18 = writer;
  while( true ) {
    puVar3 = local_14;
    pvVar2 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != writer)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_10 = (void *)puVar3[3];
    local_c = puVar3[4];
    bVar4 = SerializeDwordAndObjectElement(*(void **)this,&local_10);
    if (!bVar4) {
      return (uint)extraout_var << 8;
    }
    RBTreeIterator_increment(&local_18);
  }
  iVar5 = Serialize_returnTrue();
  return iVar5;
}

