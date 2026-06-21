// addr: 0x012b9450
// name: ArchetypeDB_getInheritedPropertyValue
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_getInheritedPropertyValue(void * this, void * outValue, void
   * propertyName, int version) */

bool __thiscall
ArchetypeDB_getInheritedPropertyValue(void *this,void *outValue,void *propertyName,int version)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *value;
  undefined4 *puVar3;
  int in_stack_00000010;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Ensures the archetype version is loaded, gathers matching property records
                       from the archetype/inheritance list into a temporary vector, then resolves
                       them into the caller's output value. Evidence is ArchetypeDB.cpp's version
                       assert, iteration over FUN_012b89d0 results, vector pushes of non-null
                       FUN_012b8ff0 results, and the final value resolver call that asserts 'value'.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d910;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  if (in_stack_00000010 == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x218);
  }
  ArchetypeDB_openStorageForVersion(this,in_stack_00000010);
  puStack_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  uStack_20 = 0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 1;
  ArchetypeDB_getArchetypeIDs(this,auStack_2c,in_stack_00000010);
  puVar3 = puStack_28;
  if (puStack_24 < puStack_28) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = puStack_24;
    if (puStack_24 < puStack_28) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (puStack_24 <= puVar3) {
      FUN_00d83c2d();
    }
    iStack_30 = ArchetypeDB_getArchetype(*puVar3,in_stack_00000010);
    if (iStack_30 != 0) {
      UIntVector_pushBack(auStack_1c,&iStack_30,value);
    }
    if (puStack_24 <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  bVar2 = ArchetypeDB_getInheritedPropertyValueHelper(outValue,propertyName,(int)auStack_1c);
  uStack_4 = uStack_4 & 0xffffff00;
  if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_18);
  }
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 0xffffffff;
  if (puStack_28 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_28);
  }
  ExceptionList = local_c;
  return bVar2;
}

