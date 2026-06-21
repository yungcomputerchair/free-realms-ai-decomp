// addr: 0x01343080
// name: STLMap_intToIntVector_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int STLMap_intToIntVector_serialize(void * writer, void * map) */

int __thiscall STLMap_intToIntVector_serialize(void *this,void *writer,void *map)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint extraout_EAX;
  void *local_28;
  undefined4 *local_24;
  int local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a map from integer keys to integer-vector values by writing the
                       map count and then each key followed by its int vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c850;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Serializer_startAppendingSTLContainer
            (*(void **)this,*(int *)((int)writer + 8),DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  puVar1 = *(undefined4 **)((int)writer + 4);
  local_24 = (undefined4 *)*puVar1;
  local_28 = writer;
  while( true ) {
    puVar3 = local_24;
    pvVar2 = local_28;
    if ((local_28 == (void *)0x0) || (local_28 != writer)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_20[0] = puVar3[3];
    FUN_005f15f0(puVar3 + 4);
    local_4 = 1;
    iVar4 = STLMap_intToIntVectorElement_serialize(*(int *)this,local_20);
    if ((char)iVar4 == '\0') {
      local_4 = 0xffffffff;
      StdStringBuffer_release(local_20);
      ExceptionList = local_c;
      return extraout_EAX & 0xffffff00;
    }
    local_4 = 0xffffffff;
    StdStringBuffer_release(local_20);
    RbTreeIterator_incrementLargeNode(&local_28);
  }
  iVar4 = Serialize_returnTrue();
  ExceptionList = local_c;
  return iVar4;
}

