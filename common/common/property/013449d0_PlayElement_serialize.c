// addr: 0x013449d0
// name: PlayElement_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PlayElement_serialize(void * this, void * serializer) */

uint __thiscall PlayElement_serialize(void *this,void *serializer)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *stream;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  int *piStack_44;
  int *local_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  void *pvStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Serializes a PlayElement into the supplied serializer/debug stream, including
                       game id, play element id, containment links, contained element ids, property
                       set, and player id. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0167cb98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_40 = this;
  if (serializer == (void *)0x0) {
    serializer = (void *)0x1344a1d;
    stream = (int *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  }
  else {
    stream = (int *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting PlayElement\n");
  DebugStream_writeCString(stream,"GameID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Play Element ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"CurrentContainment Type: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(stream,"Containment Type: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x34));
  DebugStream_writeCString(stream,"ContainingElement: ");
  if (*(int *)((int)this + 0x10) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(int *)((int)this + 0x10) + 0x34);
  }
  Serializer_appendInteger(stream,uVar7);
  FUN_01247380();
  puStack_10 = (undefined1 *)0x0;
  puStack_34 = *(undefined4 **)((int)this + 8);
  local_40 = (int *)((int)this + 4);
  puStack_3c = (undefined4 *)*puStack_34;
  while( true ) {
    piVar6 = local_40;
    if ((local_40 == (int *)0x0) || (local_40 != (int *)((int)this + 4))) {
      FUN_00d83c2d();
    }
    if (puStack_3c == puStack_34) break;
    if (piVar6 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puStack_3c == (undefined4 *)piVar6[1]) {
      FUN_00d83c2d();
    }
    puVar8 = puStack_3c;
    piVar1 = (int *)puStack_3c[6];
    if (piVar1 < (int *)puStack_3c[5]) {
      FUN_00d83c2d();
    }
    if (puStack_3c == (undefined4 *)piVar6[1]) {
      FUN_00d83c2d();
    }
    piVar6 = (int *)puVar8[5];
    if ((int *)puVar8[6] < piVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (puVar8 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar1) break;
      if (puVar8 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((int *)puVar8[6] <= piVar6) {
        FUN_00d83c2d();
      }
      puVar8 = puStack_3c;
      uVar2 = *(undefined4 *)(*piVar6 + 0x34);
      if (puStack_3c == (undefined4 *)local_40[1]) {
        FUN_00d83c2d();
      }
      uStack_48 = puVar8[3];
      iVar5 = IntKeyBufferMap_findOrInsert(&uStack_48);
      uVar7 = *(uint *)(iVar5 + 4);
      if ((uVar7 == 0) ||
         ((uint)((int)(*(int *)(iVar5 + 0xc) - uVar7) >> 2) <=
          (uint)((int)(*(int *)(iVar5 + 8) - uVar7) >> 2))) {
        uVar4 = *(uint *)(iVar5 + 8);
        if (uVar4 < uVar7) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_30,iVar5,uVar4,&stack0xffffffb0);
        puVar8 = puStack_3c;
      }
      else {
        puVar3 = *(undefined4 **)(iVar5 + 8);
        *puVar3 = uVar2;
        *(undefined4 **)(iVar5 + 8) = puVar3 + 1;
      }
      if ((int *)puVar8[6] <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
    FUN_01340aa0();
    this = piStack_44;
  }
  DebugStream_writeCString(stream,"ContainedElements: ");
  piStack_44 = stream;
  STLMap_intToIntVector_serialize(&piStack_44,auStack_28,serializer);
  DebugStream_writeCString(stream,"HasProperties::propertySet: ");
  piVar6 = (int *)(**(code **)(*(int *)((int)this + -8) + 0x1c))();
  (**(code **)(*piVar6 + 0x28))(stream);
  DebugStream_writeCString(stream,"PlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x38));
  DebugStream_writeCString(stream,"Ending PlayElement\n");
  uVar7 = (**(code **)(*(int *)this + 0xc))(stream);
  uStack_18 = 0xffffffff;
  StdRbTree_destroyAndFree(auStack_30);
  ExceptionList = pvStack_1c;
  return uVar7;
}

