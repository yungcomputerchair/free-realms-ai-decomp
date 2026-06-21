// addr: 0x01366210
// name: InstalledActionMap_serialize
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint InstalledActionMap_serialize(void * serializerHolder, void * map) */

uint __thiscall InstalledActionMap_serialize(void *this,void *serializerHolder,void *map)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint extraout_EAX;
  uint uVar5;
  void *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a map/list of installed action records: starts an STL container,
                       iterates nodes, serializes each key pair plus embedded vector element via
                       STLMap_intToIntPairVectorElement_deserialize/serialize helper, and finishes
                       the container. Used by game/card dump paths for InstalledActions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f87b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Serializer_startAppendingSTLContainer
            (*(void **)this,*(int *)((int)serializerHolder + 8),
             DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  puVar1 = *(undefined4 **)((int)serializerHolder + 4);
  local_28 = (undefined4 *)*puVar1;
  local_2c = serializerHolder;
  while( true ) {
    puVar3 = local_28;
    pvVar2 = local_2c;
    if ((local_2c == (void *)0x0) || (local_2c != serializerHolder)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_24 = puVar3[3];
    local_20[0] = puVar3[4];
    FUN_0135e190(puVar3 + 5);
    local_4 = 2;
    bVar4 = STLMap_intToIntPairVectorElement_deserialize(*(void **)this,&local_24);
    if (!bVar4) {
      local_4 = 0xffffffff;
      EmbeddedVector_clearAt08_alt(local_20);
      ExceptionList = local_c;
      return extraout_EAX & 0xffffff00;
    }
    local_4 = 0xffffffff;
    EmbeddedVector_clearAt08_alt(local_20);
    RbTreeIterator25_increment((int *)&local_2c);
  }
  uVar5 = Serialize_returnTrue();
  ExceptionList = local_c;
  return uVar5;
}

