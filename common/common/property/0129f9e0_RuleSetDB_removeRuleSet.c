// addr: 0x0129f9e0
// name: RuleSetDB_removeRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_removeRuleSet(int ruleSetID, int version) */

void __thiscall RuleSetDB_removeRuleSet(void *this,int ruleSetID,int version)

{
  undefined4 *puVar1;
  int version_00;
  void *pvVar2;
  void *pvVar3;
  int *unaff_EDI;
  void **ppvVar4;
  int *outIt;
  void *pvStack_8;
  void *pvStack_4;
  
                    /* For a non--1 version, ensures RuleSetDB storage is initialized, locates the
                       rule-set entry, erases it from the map, and destroys the pointed-to RuleSet
                       object if present. The erase path uses RuleSetDB.cpp map helpers and then
                       calls the object's virtual destructor. */
  version_00 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\RuleSetDB.cpp",0xc2);
  }
  RuleSetDB_openStorageForVersion(this,version_00);
  outIt = &ruleSetID;
  ppvVar4 = &pvStack_8;
  pvVar2 = (void *)RuleSetIndexMap_findOrInsert(&version);
  RBTreeInt_lowerBound_ruleCache(pvVar2,ppvVar4,outIt,unaff_EDI);
  pvVar3 = (void *)RuleSetIndexMap_findOrInsert(&version);
  pvVar2 = *(void **)((int)pvVar3 + 4);
  if ((pvStack_8 == (void *)0x0) || (pvStack_8 != pvVar3)) {
    FUN_00d83c2d();
  }
  if (pvStack_4 != pvVar2) {
    if (pvStack_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvStack_4 == *(void **)((int)pvStack_8 + 4)) {
      FUN_00d83c2d();
    }
    puVar1 = *(undefined4 **)((int)pvStack_4 + 0x10);
    ppvVar4 = &pvStack_8;
    pvVar2 = (void *)RuleSetIndexMap_findOrInsert(&version);
    RuleSetMap_eraseNode(pvVar2,ppvVar4,pvStack_8,pvStack_4,unaff_EDI);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

