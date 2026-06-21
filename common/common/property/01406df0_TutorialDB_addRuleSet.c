// addr: 0x01406df0
// name: TutorialDB_addRuleSet
// subsystem: common/common/property
// source (binary assert): common/common/property/TutorialDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TutorialDB_addRuleSet(void * this, void * ruleSet) */

void __thiscall TutorialDB_addRuleSet(void *this,void *ruleSet)

{
  void *pvVar1;
  int iVar2;
  int *extraout_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_EBP;
  int *unaff_EDI;
  void *this_00;
  undefined1 auStack_8 [8];
  
                    /* Adds a RuleSet pointer to TutorialDB's lookup map keyed by
                       ruleSet->getRuleSetID(), after asserting the pointer and ID are valid. If the
                       ID already exists it logs the duplicate-ID message instead of overwriting. */
  pvVar1 = ruleSet;
  if (ruleSet == (void *)0x0) {
    FUN_012f5a60("ruleSet","..\\common\\common\\property\\TutorialDB.cpp",0xe0);
  }
  iVar2 = (**(code **)(*(int *)pvVar1 + 0x44))();
  if (iVar2 == 0) {
    FUN_012f5a60("ruleSet->getRuleSetID() != 0","..\\common\\common\\property\\TutorialDB.cpp",0xe1)
    ;
  }
  ruleSet = (void *)(**(code **)(*(int *)pvVar1 + 0x44))();
  iVar2 = *(int *)((int)this + 0xc);
  this_00 = (void *)((int)this + 8);
  RBTreeInt_lowerBound_ruleCache(this_00,auStack_8,&ruleSet,unaff_EBP);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] == iVar2) {
    ruleSet = (void *)(**(code **)(*(int *)pvVar1 + 0x44))();
    puVar3 = RuleSetMap_getOrInsert(this_00,&ruleSet,unaff_EDI);
    *puVar3 = pvVar1;
    return;
  }
  uVar4 = (**(code **)(*(int *)pvVar1 + 0x44))();
  FUN_012f5dc0("ruleSetID: %d already in lookup Map!!",uVar4);
  return;
}

