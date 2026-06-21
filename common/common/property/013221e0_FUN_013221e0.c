// addr: 0x013221e0
// name: FUN_013221e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetDB_attachRuleSetFromOwner(void * this) */

void __fastcall RuleSetDB_attachRuleSetFromOwner(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Fetches a rule-set object via a virtual method with id 0xc, then applies two
                       RuleSetDB helper calls using this object and the instance field at offset 8.
                        */
  uVar1 = (**(code **)(*(int *)this + 0x50))(0xc);
  uVar2 = *(undefined4 *)((int)this + 8);
  FUN_012a0710(uVar1,uVar2);
  RuleSetDB_getRuleSet(uVar1,uVar2);
  return;
}

