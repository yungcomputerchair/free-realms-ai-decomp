// addr: 0x0129aea0
// name: RBTreeInt_lowerBound_ruleCache
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTreeInt_lowerBound_ruleCache(void * tree, void * outIt, int * key) */

void __thiscall RBTreeInt_lowerBound_ruleCache(void *this,void *tree,void *outIt,int *key)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 *local_4;
  
                    /* Finds lower_bound for integer-keyed rule/action cache maps and returns a
                       two-word iterator/result. Evidence: compares node key at +0xc against *key
                       and is used by RuleSetDB cache and TutorialDB rule cache lookups. */
  local_c = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)local_c[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)local_c[1];
    do {
      if ((int)puVar2[3] < *(int *)outIt) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        local_c = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  local_10 = this;
  if ((local_c == *(undefined4 **)((int)this + 4)) || (*(int *)outIt < (int)local_c[3])) {
    local_8 = this;
    local_4 = *(undefined4 **)((int)this + 4);
    ppvVar4 = &local_8;
  }
  else {
    ppvVar4 = &local_10;
  }
  pvVar1 = ppvVar4[1];
  *(void **)tree = *ppvVar4;
  *(void **)((int)tree + 4) = pvVar1;
  return;
}

