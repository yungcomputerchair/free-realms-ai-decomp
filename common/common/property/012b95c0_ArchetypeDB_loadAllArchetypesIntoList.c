// addr: 0x012b95c0
// name: ArchetypeDB_loadAllArchetypesIntoList
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_loadAllArchetypesIntoList(void * this, void * outList, int
   version) */

bool __thiscall ArchetypeDB_loadAllArchetypesIntoList(void *this,void *outList,int version)

{
  undefined1 extraout_AL;
  uint *value;
  uint uVar1;
  undefined1 *puStack00000010;
  undefined1 uStack00000014;
  void *in_stack_ffffffac;
  void *in_stack_ffffffb0;
  void *outVector;
  void **sortableVector;
  void *pvStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an archetype DB version is open, enumerates all archetype IDs, loads
                       each archetype, appends loaded entries to a temporary/list object, and
                       returns a boolean result. Evidence: ArchetypeDB.cpp assert 'v != -1', calls
                       ArchetypeDB_getArchetypeIDs and 012b8ff0 getArchetype in a loop. */
  puStack_8 = &LAB_0166d958;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  ExceptionList = &local_c;
  local_4 = 0;
  if (_uStack00000014 == (undefined1 *)0xffffffff) {
    in_stack_ffffffb0 = (void *)0x12b960c;
    FUN_012f5a60();
  }
  ArchetypeDB_openStorageForVersion(this,(int)_uStack00000014);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  outVector = (void *)0x12b9646;
  ArchetypeDB_getArchetypeIDs(this,&pvStack_2c,(int)_uStack00000014);
  uVar1 = uStack_28;
  if (uStack_24 < uStack_28) {
    FUN_00d83c2d();
  }
  while( true ) {
    _uStack00000014 = (undefined1 *)uStack_24;
    if (uStack_24 < uStack_28) {
      FUN_00d83c2d();
    }
    if ((undefined1 *)uVar1 == _uStack00000014) break;
    if (uStack_24 <= uVar1) {
      FUN_00d83c2d();
    }
    outVector = (void *)0x12b968d;
    _uStack00000014 = (undefined1 *)ArchetypeDB_getArchetype();
    if (_uStack00000014 != (undefined1 *)0x0) {
      UIntVector_pushBack(&pvStack_1c,&stack0x00000014,value);
    }
    if (uStack_24 <= uVar1) {
      FUN_00d83c2d();
    }
    uVar1 = uVar1 + 4;
  }
  sortableVector = &pvStack_1c;
  _uStack00000014 = &stack0xffffffac;
  puStack00000010 = &stack0xffffffac;
  PropertyTree_copyCtor(&stack0xffffffac,(int)&outList,(int)in_stack_ffffffac);
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  ArchetypeDB_collectFilteredArchetypes
            (in_stack_ffffffac,in_stack_ffffffb0,outVector,sortableVector);
  puStack00000010 = (undefined1 *)CONCAT31(puStack00000010._1_3_,extraout_AL);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (pvStack_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_1c);
  }
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (pvStack_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  PropertyTree_destroyNodesAndStorage(&stack0x00000000);
  ExceptionList = local_c;
  return (bool)uStack00000014;
}

