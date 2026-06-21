// addr: 0x0129fab0
// name: RuleSetDB_registerRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/RuleSetDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_registerRuleSet(void * ruleSet, int version) */

void __thiscall RuleSetDB_registerRuleSet(void *this,void *ruleSet,int version)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int *extraout_EAX;
  undefined4 *puVar6;
  int *unaff_EBP;
  int *unaff_EDI;
  undefined1 *tree;
  void **ppvVar7;
  undefined1 auStack_8 [8];
  
                    /* Registers a ruleset object for a version, assigning it a new id when its
                       virtual get-id call returns zero, then inserting the object into the
                       RuleSetDB map if absent. Evidence is RuleSetDB.cpp with the 'v != -1'
                       assertion and map insertion keyed from the ruleSet vtable methods. */
  iVar2 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\RuleSetDB.cpp",0x101);
  }
  RuleSetDB_openStorageForVersion(this,iVar2);
  pvVar1 = ruleSet;
  iVar2 = (**(code **)(*(int *)ruleSet + 0x44))();
  if (iVar2 == 0) {
    piVar3 = IntDefaultMap_getOrInsert((void *)((int)this + 4),&version);
    *piVar3 = *piVar3 + 1;
    (**(code **)(*(int *)pvVar1 + 0x48))(*piVar3);
  }
  ruleSet = (void *)(**(code **)(*(int *)pvVar1 + 0x44))();
  iVar4 = RuleSetIndexMap_findOrInsert(&version);
  iVar2 = *(int *)(iVar4 + 4);
  ppvVar7 = &ruleSet;
  tree = auStack_8;
  pvVar5 = (void *)RuleSetIndexMap_findOrInsert(&version);
  RBTreeInt_lowerBound_ruleCache(pvVar5,tree,ppvVar7,unaff_EBP);
  if ((*extraout_EAX == 0) || (*extraout_EAX != iVar4)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar2) {
    ruleSet = (void *)(**(code **)(*(int *)pvVar1 + 0x44))();
    ppvVar7 = &ruleSet;
    pvVar5 = (void *)RuleSetIndexMap_findOrInsert(&version);
    puVar6 = RuleSetMap_getOrInsert(pvVar5,ppvVar7,unaff_EDI);
    *puVar6 = pvVar1;
  }
  return;
}

