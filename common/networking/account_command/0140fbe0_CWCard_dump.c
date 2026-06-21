// addr: 0x0140fbe0
// name: CWCard_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCard_dump(void * this, void * writer) */

void __thiscall CWCard_dump(void *this,void *writer)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *map;
  void *writer_00;
  int iVar4;
  void *pvStack_48;
  int *local_44;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_34;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Appends a textual/debug dump for CWCard, wrapping the base Card dump and
                       serializing additional CWCard collection/map data. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_016923f8;
  local_14 = ExceptionList;
  map = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa8);
  ExceptionList = &local_14;
  local_44 = this;
  (**(code **)(*(int *)this + 8))(writer);
  DebugStream_writeCString(writer,"Starting CWCard\n");
  CWCard_dumpDetails(this,writer);
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  iStack_1c = 0;
  uStack_c = 0;
  puStack_34 = *(undefined4 **)((int)this + 0x140);
  iVar4 = (int)this + 0x13c;
  puStack_3c = (undefined4 *)*puStack_34;
  pvStack_48 = writer;
  iStack_40 = iVar4;
  while( true ) {
    puVar2 = puStack_3c;
    iVar1 = iStack_40;
    if ((iStack_40 == 0) || (iStack_40 != iVar4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == puStack_34) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    puVar3 = puStack_20;
    if ((puStack_24 == (undefined4 *)0x0) ||
       ((uint)(iStack_1c - (int)puStack_24 >> 2) <= (uint)((int)puStack_20 - (int)puStack_24 >> 2)))
    {
      if (puStack_20 < puStack_24) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_30,&pvStack_28,puVar3,puVar2 + 3);
      FUN_0137a9c0();
    }
    else {
      *puStack_20 = puVar2[3];
      puStack_20 = puStack_20 + 1;
      FUN_0137a9c0();
    }
  }
  STLVector_int_serialize(&pvStack_48,(int)&pvStack_28);
  puStack_3c = (undefined4 *)**(undefined4 **)((int)this + 0x140);
  pvStack_48 = writer;
  iStack_40 = iVar4;
  while( true ) {
    puVar2 = puStack_3c;
    iVar1 = iStack_40;
    if ((iStack_40 == 0) || (iStack_40 != iVar4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == puStack_34) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    writer_00 = (void *)IntToObjectTree_findOrCreateSlot(puVar2 + 3);
    STLMap_intToIntVector_serialize(&pvStack_48,writer_00,map);
    FUN_0137a9c0();
  }
  DebugStream_writeCString(writer,"Ending CWCard\n");
  (**(code **)(*local_44 + 0xc))(writer);
  puStack_10 = (undefined1 *)0xffffffff;
  if (pvStack_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  ExceptionList = pvStack_18;
  return;
}

